cmake_minimum_required(VERSION 3.0)

project(standard_lib
        VERSION 6.0.0
        LANGUAGES C ASM
)

add_library(${PROJECT_NAME} StdPeriph_Driver/src/stm32f4xx_gpio.c
        StdPeriph_Driver/src/stm32f4xx_rcc.c
        StdPeriph_Driver/src/stm32f4xx_usart.c
        StdPeriph_Driver/src/misc.c
)

target_include_directories(${PROJECT_NAME} PUBLIC StdPeriph_Driver/inc CMSIS/device CMSIS/core)
