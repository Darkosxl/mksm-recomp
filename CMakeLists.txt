cmake_minimum_required(VERSION 3.20)
project(ps2-web-recomp CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(PS2_GENERATED "" CACHE PATH "Folder with the C++ generated for a game")

# lockstep co-op: the same sources must compute the same floats on every peer (desktop and browser), so no FMA
# contraction even when a -march allows it
add_compile_options(-ffp-contract=off)

if(EMSCRIPTEN)
    add_compile_options(-msimd128 -mtail-call -fwasm-exceptions -sWASM_LEGACY_EXCEPTIONS=0 -pthread)
    add_link_options(-msimd128 -mtail-call -fwasm-exceptions -sWASM_LEGACY_EXCEPTIONS=0 -pthread)
endif()

if(NOT EMSCRIPTEN)
    add_executable(eerecomp
        recomp/main.cpp
        recomp/r5900.cpp
        recomp/elf.cpp
        recomp/analysis.cpp
        recomp/codegen.cpp
        recomp/snr2.cpp)
    target_compile_options(eerecomp PRIVATE -Wall -Wextra)

    add_executable(vujit_dump recomp/vujit_dump.cpp runtime/src/vu_jit.cpp)
    target_include_directories(vujit_dump PRIVATE runtime/include runtime/src)
    add_executable(vurecomp recomp/vurecomp.cpp)
    target_include_directories(vurecomp PRIVATE runtime/include)
    target_compile_options(vurecomp PRIVATE -Wall -Wextra)
endif()

add_library(ps2runtime STATIC
    runtime/src/memory.cpp
    runtime/src/dispatch.cpp
    runtime/src/system.cpp
    runtime/src/kernel.cpp
    runtime/src/hw.cpp
    runtime/src/cop.cpp
    runtime/src/disc.cpp
    runtime/src/dmac.cpp
    runtime/src/vif.cpp
    runtime/src/vu_micro.cpp
    runtime/src/vu_jit.cpp
    runtime/src/vu_jit_web.cpp
    runtime/src/ipu/ipu.cpp
    runtime/src/gs/gs.cpp
    runtime/src/gs/drawdbg.cpp
    runtime/src/gs/gif.cpp
    runtime/src/gs/queue.cpp
    runtime/src/gs/raster.cpp
    runtime/src/gs/texcache.cpp
    runtime/src/gs/texpack.cpp
    runtime/src/iop/cpu.cpp
    runtime/src/iop/kernel.cpp
    runtime/src/iop/libs.cpp
    runtime/src/iop/hw.cpp
    runtime/src/iop/spu2.cpp
    runtime/src/iop/sio2.cpp
    runtime/src/iop/io.cpp
    runtime/src/iop/cdvd.cpp
    runtime/src/iop/sif.cpp
    runtime/src/iop/cdvdfsv.cpp)
target_include_directories(ps2runtime PUBLIC runtime/include)
target_compile_options(ps2runtime PRIVATE -Wall -Wextra)
# SSE4.1 (every x86-64 CPU since 2008): floor/ceil inline as roundss instead of libm calls; the render thread's binning
# called them per primitive. Same results (IEEE, FP contraction stays off).
if(CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64|AMD64" AND NOT EMSCRIPTEN)
    target_compile_options(ps2runtime PRIVATE -msse4.1)
endif()

set(PS2_WGPU_DIR "${CMAKE_SOURCE_DIR}/third_party/wgpu-native" CACHE PATH "wgpu-native release folder")
if(EMSCRIPTEN OR EXISTS "${PS2_WGPU_DIR}/lib/libwgpu_native.a")
    set(PS2_GS_WGSL "${CMAKE_BINARY_DIR}/gs_wgsl.cpp")
    add_custom_command(OUTPUT "${PS2_GS_WGSL}"
        COMMAND ${CMAKE_COMMAND} -DSRC=${CMAKE_SOURCE_DIR}/runtime/src/gs/gpu/gs.wgsl -DOUT=${PS2_GS_WGSL} -DNAME=kGsShader -P ${CMAKE_SOURCE_DIR}/cmake/embed.cmake
        DEPENDS runtime/src/gs/gpu/gs.wgsl cmake/embed.cmake)
    set(PS2_BLIT_WGSL "${CMAKE_BINARY_DIR}/blit_wgsl.cpp")
    add_custom_command(OUTPUT "${PS2_BLIT_WGSL}"
        COMMAND ${CMAKE_COMMAND} -DSRC=${CMAKE_SOURCE_DIR}/runtime/src/gs/gpu/blit.wgsl -DOUT=${PS2_BLIT_WGSL} -DNAME=kBlitShader -P ${CMAKE_SOURCE_DIR}/cmake/embed.cmake
        DEPENDS runtime/src/gs/gpu/blit.wgsl cmake/embed.cmake)
    target_sources(ps2runtime PRIVATE runtime/src/gs/gpu/gpu.cpp "${PS2_GS_WGSL}" "${PS2_BLIT_WGSL}")
    target_compile_definitions(ps2runtime PUBLIC PS2_GPU)
    if(EMSCRIPTEN)
        target_compile_options(ps2runtime PUBLIC --use-port=emdawnwebgpu)
        target_link_options(ps2runtime PUBLIC --use-port=emdawnwebgpu)
    else()
        target_include_directories(ps2runtime PRIVATE "${PS2_WGPU_DIR}/include")
        target_link_libraries(ps2runtime PUBLIC "${PS2_WGPU_DIR}/lib/libwgpu_native.a" dl pthread m)
        if(APPLE)
            target_link_libraries(ps2runtime PUBLIC "-framework Metal" "-framework QuartzCore" "-framework Foundation" "-framework CoreFoundation" "-framework IOKit" "-framework IOSurface" objc)
        endif()
    endif()
endif()

if(PS2_GENERATED)
    file(GLOB PS2_UNITS CONFIGURE_DEPENDS "${PS2_GENERATED}/*.cpp")
    add_library(ps2game STATIC ${PS2_UNITS})
    target_include_directories(ps2game PRIVATE "${PS2_GENERATED}")
    target_link_libraries(ps2game PUBLIC ps2runtime)
    target_compile_options(ps2game PRIVATE -Wno-unused-label -Wno-unused-variable)

    # lockstep build id: a hash of the emulation sources (cmake/build_id.cmake), the same for ps2run and ps2web
    file(GLOB_RECURSE PS2_ID_SOURCES CONFIGURE_DEPENDS runtime/src/* runtime/include/*)
    file(GLOB PS2_ID_GENERATED CONFIGURE_DEPENDS "${PS2_GENERATED}/*")
    set(PS2_BUILD_ID "${CMAKE_BINARY_DIR}/lockstep_build_id.cpp")
    add_custom_command(OUTPUT "${PS2_BUILD_ID}"
        COMMAND ${CMAKE_COMMAND} -DROOT=${CMAKE_SOURCE_DIR} -DGENERATED=${PS2_GENERATED} -DOUT=${PS2_BUILD_ID} -P ${CMAKE_SOURCE_DIR}/cmake/build_id.cmake
        DEPENDS ${PS2_ID_SOURCES} ${PS2_ID_GENERATED} cmake/build_id.cmake)

    if(EMSCRIPTEN)
        set(PS2_WEB_ELF "" CACHE FILEPATH "Game executable preloaded as /game/core.elf")
        set(PS2_WEB_BOOT_FILE "" CACHE FILEPATH "Text file holding the argv[0] the game sees, preloaded as /game/boot.txt")
        add_executable(ps2web host/web.cpp host/lockstep_id.cpp "${PS2_BUILD_ID}")
        if(PS2_WEB_BOOT_FILE)
            target_link_options(ps2web PRIVATE "SHELL:--preload-file \"${PS2_WEB_BOOT_FILE}@/game/boot.txt\"")
        endif()
        target_link_libraries(ps2web PRIVATE ps2game ps2runtime)
        target_link_options(ps2web PRIVATE --profiling-funcs -sJSPI -sALLOW_MEMORY_GROWTH=1 -sINITIAL_MEMORY=268435456 -sPTHREAD_POOL_SIZE=2 -sALLOW_TABLE_GROWTH=1 -lidbfs.js -sSTACK_SIZE=16777216 -sENVIRONMENT=web
            -sEXPORTED_FUNCTIONS=_main,_ps2web_pad,_ps2web_pad_connected,_ps2web_resize,_ps2web_gpu_ms,_ps2web_frames,_ps2web_primitives,_ps2web_audio_ring,_ps2web_audio_queued_ms,_ps2web_idle_ms,_ps2web_vu_interpreted
            -sEXPORTED_RUNTIME_METHODS=callMain,addRunDependency,removeRunDependency,HEAPU8,ENV
            --shell-file ${CMAKE_SOURCE_DIR}/web/shell.html --preload-file ${PS2_WEB_ELF}@/game/core.elf)
        set_target_properties(ps2web PROPERTIES SUFFIX ".html" LINK_DEPENDS ${CMAKE_SOURCE_DIR}/web/shell.html)
        return()
    endif()

    add_executable(ps2run host/main.cpp)
    target_link_libraries(ps2run PRIVATE ps2game ps2runtime)
    # lockstep co-op (host/lockstep.hpp, web/lockstep.md): zlib for the state transfer; WebRTC through libdatachannel
    # and wss:// through OpenSSL when they are installed, else the signalling relay over ws:// only
    find_package(Threads REQUIRED)
    find_package(ZLIB QUIET)
    find_package(OpenSSL QUIET)
    find_package(LibDataChannel QUIET)
    if(ZLIB_FOUND AND CMAKE_SYSTEM_NAME STREQUAL "Linux")
        target_sources(ps2run PRIVATE host/lockstep.cpp host/lockstep_id.cpp host/lockstep_net.cpp host/lockstep_rtc.cpp "${PS2_BUILD_ID}")
        target_compile_definitions(ps2run PRIVATE PS2_LOCKSTEP)
        target_link_libraries(ps2run PRIVATE ZLIB::ZLIB Threads::Threads)
        if(OpenSSL_FOUND)
            target_compile_definitions(ps2run PRIVATE PS2_LOCKSTEP_TLS)
            target_link_libraries(ps2run PRIVATE OpenSSL::SSL OpenSSL::Crypto)
        endif()
        if(LibDataChannel_FOUND)
            target_compile_definitions(ps2run PRIVATE PS2_LOCKSTEP_RTC)
            target_link_libraries(ps2run PRIVATE LibDataChannel::LibDataChannel)
        endif()
    endif()
    if(CMAKE_SYSTEM_NAME STREQUAL "Linux" AND CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64|AMD64")
        target_sources(ps2run PRIVATE host/profile.cpp)
        target_compile_definitions(ps2run PRIVATE PS2_PROFILE)
    endif()
    find_package(SDL2 QUIET)
    if(SDL2_FOUND AND NOT EMSCRIPTEN)
        target_sources(ps2run PRIVATE host/window.cpp)
        target_compile_definitions(ps2run PRIVATE PS2_WINDOW)
        target_link_libraries(ps2run PRIVATE SDL2::SDL2)
        # time-stretched sound below full speed (host/window.cpp)
        find_package(PkgConfig QUIET)
        if(PkgConfig_FOUND)
            pkg_check_modules(PS2_SOUNDTOUCH QUIET IMPORTED_TARGET soundtouch)
        endif()
        if(PS2_SOUNDTOUCH_FOUND)
            target_compile_definitions(ps2run PRIVATE PS2_SOUNDTOUCH)
            target_link_libraries(ps2run PRIVATE PkgConfig::PS2_SOUNDTOUCH)
        endif()
    endif()
    # online co-op host (docs/netplay.md): WebRTC via libdatachannel, H.264 via FFmpeg, Opus
    find_package(PkgConfig QUIET)
    if(PkgConfig_FOUND)
        pkg_check_modules(PS2_AV QUIET IMPORTED_TARGET libavcodec libavutil libswscale opus)
    endif()
    if(LibDataChannel_FOUND AND PS2_AV_FOUND)
        set(PS2_NETPLAY_PAGE "${CMAKE_BINARY_DIR}/netplay_page.cpp")
        add_custom_command(OUTPUT "${PS2_NETPLAY_PAGE}"
            COMMAND ${CMAKE_COMMAND} -DSRC=${CMAKE_SOURCE_DIR}/web/netplay.html -DOUT=${PS2_NETPLAY_PAGE} -DNAME=kNetplayPage -P ${CMAKE_SOURCE_DIR}/cmake/embed.cmake
            DEPENDS web/netplay.html cmake/embed.cmake)
        target_sources(ps2run PRIVATE host/netplay.cpp "${PS2_NETPLAY_PAGE}")
        target_compile_definitions(ps2run PRIVATE PS2_NETPLAY)
        target_link_libraries(ps2run PRIVATE LibDataChannel::LibDataChannel PkgConfig::PS2_AV)
    endif()
endif()
