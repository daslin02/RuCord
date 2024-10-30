cmake_minimum_required(VERSION 3.5)

set(CMAKE_AUTOMOC ON)
find_package(Qt6 REQUIRED COMPONENTS Widgets Core)

add_executable(app src/main.cpp)

target_link_libraries(app Qt6::Widgets Qt6::Core)

include_directories(app PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


