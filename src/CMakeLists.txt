cmake_minimum_required(VERSION 3.16)
project(HwProjectile LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(projectile 
    main.cpp 
    Angle.cpp
)

# 注意这里：从 src 往上一级找 include 文件夹
target_include_directories(projectile PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../include)