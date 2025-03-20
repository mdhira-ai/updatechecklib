cmake_minimum_required(VERSION 3.10)

# Project name
project(UpdateCheckLib)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the library
add_library(updatechecklib STATIC
    lib/updatecheck.cpp
)

# Include the header files
target_include_directories(updatechecklib PUBLIC include)
target_include_directories(updatechecklib PRIVATE /home/kali/Desktop/vcpkg/installed/x64-linux/include)
target_include_directories(updatechecklib PRIVATE /home/kali/Qt/6.8.2/gcc_64/include)

# Add the executable
add_executable(updatecheck main.cpp)

# Link the library to the executable
target_link_libraries(updatecheck PRIVATE updatechecklib)

# Link external libraries (cpr and nlohmann/json)
find_package(cpr REQUIRED)
find_package(nlohmann_json REQUIRED)
target_link_libraries(updatecheck PRIVATE cpr::cpr nlohmann_json::nlohmann_json)

# Specify the path to Qt6Config.cmake
set(CMAKE_PREFIX_PATH "/home/kali/Qt/6.8.2/gcc_64/lib/cmake")

# Find and link Qt6 libraries
find_package(Qt6 REQUIRED COMPONENTS Widgets)
target_link_libraries(updatecheck PRIVATE Qt6::Widgets)