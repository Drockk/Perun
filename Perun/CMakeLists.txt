cmake_minimum_required(VERSION 3.28)
project(Perun)

set(CMAKE_CXX_STANDARD 23)

find_package(spdlog)

add_executable(Perun)

target_sources(Perun
        PRIVATE
        source/main.cpp
        source/Core/Log.cpp
        PRIVATE
        FILE_SET HEADERS
        FILES
        source/Core/Log.hpp
)

target_link_libraries(Perun
        spdlog::spdlog)
