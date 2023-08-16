################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/system/src/cortexm/exception-handlers.c \
../src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/system/src/cortexm/initialize-hardware.c \
../src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/system/src/cortexm/reset-hardware.c 

OBJS += \
./src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/system/src/cortexm/exception-handlers.o \
./src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/system/src/cortexm/initialize-hardware.o \
./src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/system/src/cortexm/reset-hardware.o 

C_DEPS += \
./src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/system/src/cortexm/exception-handlers.d \
./src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/system/src/cortexm/initialize-hardware.d \
./src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/system/src/cortexm/reset-hardware.d 


# Each subdirectory must supply rules for building sources it contributes
src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/system/src/cortexm/exception-handlers.o: ../src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/system/src/cortexm/exception-handlers.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra  -g3 -DDEBUG -DUSE_FULL_ASSERT -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DSTM32F401xC -DUSE_HAL_DRIVER -DHSE_VALUE=25000000 -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/stm32f4-hal" -std=gnu11 -MMD -MP -MF"src/Embedded-ARM-ITI-Training/SYSTICK Driver/system/src/cortexm/exception-handlers.d" -MT"src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/system/src/cortexm/exception-handlers.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/system/src/cortexm/initialize-hardware.o: ../src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/system/src/cortexm/initialize-hardware.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra  -g3 -DDEBUG -DUSE_FULL_ASSERT -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DSTM32F401xC -DUSE_HAL_DRIVER -DHSE_VALUE=25000000 -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/stm32f4-hal" -std=gnu11 -MMD -MP -MF"src/Embedded-ARM-ITI-Training/SYSTICK Driver/system/src/cortexm/initialize-hardware.d" -MT"src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/system/src/cortexm/initialize-hardware.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/system/src/cortexm/reset-hardware.o: ../src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/system/src/cortexm/reset-hardware.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra  -g3 -DDEBUG -DUSE_FULL_ASSERT -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DSTM32F401xC -DUSE_HAL_DRIVER -DHSE_VALUE=25000000 -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/stm32f4-hal" -std=gnu11 -MMD -MP -MF"src/Embedded-ARM-ITI-Training/SYSTICK Driver/system/src/cortexm/reset-hardware.d" -MT"src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/system/src/cortexm/reset-hardware.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


