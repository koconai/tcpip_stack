# Name of the target
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR cortex-m4)

set(MCPU_FLAGS "-mthumb -mcpu=cortex-m4")
set(MFPU_FLAGS "-mfpu=fpv4-sp-d16")
set(FLOAT_FLAGS "-mfloat-abi=soft")
set(VFP_FLAGS "")
set(SPEC_FLAGS "--specs=nosys.specs")
set(MACRO_FLAGS "-DSTM32 -DUART_ON -DSTM32F4 -DSTM32F407VGTx -DDEBUG -DSTM32F40XX -DUSE_STDPERIPH_DRIVER")
set(LD_FLAGS "-T\"${CMAKE_HOME_DIRECTORY}/LinkerScript.ld\"")

include(${CMAKE_CURRENT_LIST_DIR}/arm-none-eabi.cmake)