cmake_minimum_required(VERSION 3.17)
project(NUMBER_GENERATOR CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


file(GLOB SRC_FILES src/*.cpp)
add_library(generator SHARED
  ${SRC_FILES}
)

target_include_directories(generator PUBLIC include)


add_executable(main_exec
    src/main.cpp
)

target_link_libraries(main_exec PRIVATE generator)
