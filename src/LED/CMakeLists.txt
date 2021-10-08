cmake_minimum_required(VERSION 3.0)

project(led
        VERSION 6.0.0
        LANGUAGES C
)

add_library(${PROJECT_NAME} led.c)

target_include_directories(${PROJECT_NAME} PUBLIC
                            ${CMAKE_HOME_DIRECTORY}/lib/CMSIS/core
                            ${CMAKE_HOME_DIRECTORY}/lib/CMSIS/device
                            ${CMAKE_HOME_DIRECTORY}/lib/StdPeriph_Driver/inc
)
