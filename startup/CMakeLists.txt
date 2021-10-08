cmake_minimum_required(VERSION 3.0)

project(startup
        VERSION 6.0.0
        LANGUAGES ASM
)

add_library(${PROJECT_NAME} startup_stm32.c)

target_include_directories(${PROJECT_NAME} PUBLIC)
target_include_directories(${PROJECT_NAME} PUBLIC
        ${CMAKE_HOME_DIRECTORY}/lib/CMSIS/device
        ${CMAKE_HOME_DIRECTORY}/lib/CMSIS/core
        ${CMAKE_HOME_DIRECTORY}/lib/StdPeriph_Driver/inc
)
