cmake_minimum_required(VERSION 3.15)
project(vscodedemo VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 源文件,需要增加父目录
set(SOURCES
    addlib.cpp
)
add_library(addlib addlib.cpp)
add_library(addlib_shared SHARED addlib.cpp)
#add_executable(${PROJECT_NAME} ../src/main.cpp)
#target_link_libraries(${PROJECT_NAME} addlib_shared)

#add_executable(${PROJECT_NAME} ${SOURCES})
#需要增加子目录inculude
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/include)
# 设置可执行文件输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# 设置库文件输出目录
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/libs)  # 静态库（.a/.lib）
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/libs)  # 动态库（.so/.dll）