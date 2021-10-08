cmake_minimum_required(VERSION 3.0)

project(stm32f407
        VERSION 6.0.0
        LANGUAGES C ASM
)
add_subdirectory(led)
add_subdirectory(uart)

add_executable(stm32f407 main.c
        syscalls.c
        system_stm32f4xx.c
        tx_initialize_low_level.S
)

target_link_libraries(${PROJECT_NAME} PUBLIC
                led uart
                standard_lib
                startup
                ${CMAKE_HOME_DIRECTORY}/lib/threadx/libthreadx.a
                ${CMAKE_HOME_DIRECTORY}/lib/filex/libfilex.a
)

target_include_directories(${PROJECT_NAME} PUBLIC
                            ${CMAKE_HOME_DIRECTORY}/lib/CMSIS/core
                            ${CMAKE_HOME_DIRECTORY}/lib/CMSIS/device
                            ${CMAKE_HOME_DIRECTORY}/lib/StdPeriph_Driver/inc
                            ${CMAKE_HOME_DIRECTORY}/lib/threadx
                            ${CMAKE_HOME_DIRECTORY}/lib/threadx/common/inc
                            ${CMAKE_HOME_DIRECTORY}/lib/threadx/cortex_m4/gnu/inc
                            ${CMAKE_HOME_DIRECTORY}/lib/threadx/custom_inc
                            ${CMAKE_HOME_DIRECTORY}/lib/filex
                            ${CMAKE_HOME_DIRECTORY}/lib/filex/common/inc
                            ${CMAKE_HOME_DIRECTORY}/lib/filex/cortex_m4/gnu/inc
                            ${CMAKE_HOME_DIRECTORY}/lib/filex/custom_inc
                            ${CMAKE_HOME_DIRECTORY}/src/LED
                            ${CMAKE_HOME_DIRECTORY}/src/UART
)

set_target_properties(stm32f407 PROPERTIES
    SUFFIX .elf
)