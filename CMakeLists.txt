cmake_minimum_required(VERSION 3.10.0)
project(updatechecklib VERSION 0.1.0 LANGUAGES C CXX)

find_package(cpr CONFIG REQUIRED)

find_package(nlohmann_json CONFIG REQUIRED)

file(GLOB LIB_SOURCES "lib/*.cpp")
add_executable(updatechecklib main.cpp ${LIB_SOURCES})

target_link_libraries(updatechecklib PRIVATE nlohmann_json::nlohmann_json cpr::cpr)