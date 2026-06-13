cmake_minimum_required(VERSION 3.20)
project(NintendoGameBoyEmulator VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

set(SOURCES
    src/main.cpp
    src/memory_bus.cpp
        src/cpu.cpp
)

add_executable(gameboy_emulator ${SOURCES})