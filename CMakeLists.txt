cmake_minimum_required(VERSION 3.5)

project(dspine)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED)

# Make the prefix path variable visible in cmake gui.
set(CMAKE_PREFIX_PATH "" CACHE PATH "CMake prefix path")

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Find Qt.
find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)

add_subdirectory(libdspine)
add_subdirectory(dspineeditor)
