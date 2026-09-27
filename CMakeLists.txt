# COTMRecomp — Castlevania: Circle of the Moon (USA) static recomp host.
# Links generated cart code + gbarecomp_runtime into cotm.exe.

cmake_minimum_required(VERSION 3.20)
project(cotm C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_STANDARD 11)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

set(GBARECOMP_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/../gbarecomp-main"
    CACHE PATH "Path to the gbarecomp framework source tree")

if(NOT EXISTS "${GBARECOMP_ROOT}/CMakeLists.txt")
    message(FATAL_ERROR "GBARECOMP_ROOT not found: ${GBARECOMP_ROOT}")
endif()

# SDL2 development package (headers + import lib + SDL2.dll).
# Provide -DSDL2_ROOT=<prefix> if not auto-detected.
set(SDL2_ROOT "" CACHE PATH "SDL2 MinGW/MSVC development prefix (include/SDL2 + lib)")
if(SDL2_ROOT)
    set(SDL2_INCLUDE_DIR "${SDL2_ROOT}/include/SDL2" CACHE PATH "" FORCE)
    set(SDL2_LIBRARY     "${SDL2_ROOT}/lib/libSDL2.dll.a" CACHE FILEPATH "" FORCE)
endif()

add_subdirectory("${GBARECOMP_ROOT}" gbarecomp-build EXCLUDE_FROM_ALL)

set(GENERATED_DIR "${CMAKE_CURRENT_SOURCE_DIR}/recomp/generated_official")
if(NOT EXISTS "${GENERATED_DIR}/dispatch_table.cpp")
    message(FATAL_ERROR
        "Generated cart code not found in ${GENERATED_DIR}.\n"
        "Run: gba_recompile --rom <your.gba> --config game.toml --out recomp/generated_official")
endif()
file(GLOB COTM_SHARDS CONFIGURE_DEPENDS "${GENERATED_DIR}/recompiled_*.cpp")

add_executable(cotm
    src/main.cpp
    ${COTM_SHARDS}
    "${GENERATED_DIR}/dispatch_table.cpp"
    "${GENERATED_DIR}/symbol_map.cpp"
)

target_include_directories(cotm PRIVATE
    "${GBARECOMP_ROOT}/src/armv4t"
    "${GBARECOMP_ROOT}/src/gba"
    "${GBARECOMP_ROOT}/src/runtime"
    "${GBARECOMP_ROOT}/src/debug"
    "${GENERATED_DIR}"
)

target_compile_definitions(cotm PRIVATE
    GBARECOMP_WINDOW_TITLE="COTMRecomp"
    GBARECOMP_DEFAULT_GAME_CONFIG="game.toml"
)

# The framework archives are mutually recursive; GNU ld needs an explicit group.
target_link_libraries(cotm PRIVATE
    -Wl,--start-group
    gbarecomp_armv4t
    gbarecomp_gba
    gbarecomp_runtime
    gbarecomp_debug
    -Wl,--end-group
)

if(WIN32)
    target_link_options(cotm PRIVATE "LINKER:--stack,16777216")
endif()

if(SDL2_ROOT AND EXISTS "${SDL2_ROOT}/bin/SDL2.dll")
    add_custom_command(TARGET cotm POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${SDL2_ROOT}/bin/SDL2.dll"
            "$<TARGET_FILE_DIR:cotm>/SDL2.dll"
    )
endif()
