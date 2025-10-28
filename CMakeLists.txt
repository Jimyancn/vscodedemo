cmake_minimum_required(VERSION 3.15)
project(vscodedemo VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 源文件（使用绝对路径）
set(SOURCES
    ${CMAKE_SOURCE_DIR}/src/main.cpp
    ${CMAKE_SOURCE_DIR}/src/prime.cpp
)

# 设置输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/libs)  # 静态库
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/libs)  # 动态库

# 生成静态库和动态库
add_library(prime STATIC ${CMAKE_SOURCE_DIR}/src/prime.cpp)
add_library(prime_shared SHARED ${CMAKE_SOURCE_DIR}/src/prime.cpp)
add_library(addlib STATIC ${CMAKE_SOURCE_DIR}/src/add.cpp)
add_library(addlib_shared SHARED ${CMAKE_SOURCE_DIR}/src/add.cpp)
# 生成可执行文件并链接动态库
add_executable(${PROJECT_NAME} ${CMAKE_SOURCE_DIR}/src/main.cpp)
target_link_libraries(${PROJECT_NAME} prime_shared addlib_shared)

# 添加头文件搜索路径（PUBLIC 确保可执行文件和库都能访问头文件）
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_include_directories(prime PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_include_directories(prime_shared PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_include_directories(addlib PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_include_directories(addlib_shared PUBLIC ${CMAKE_SOURCE_DIR}/include)
