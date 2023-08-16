################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/src/SYSTICK_program.c \
../src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/src/main.c 

OBJS += \
./src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/src/SYSTICK_program.o \
./src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/src/main.o 

C_DEPS += \
./src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/src/SYSTICK_program.d \
./src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/src/SYSTICK_program.o: ../src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/src/SYSTICK_program.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra  -g3 -DDEBUG -DUSE_FULL_ASSERT -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DSTM32F401xC -DUSE_HAL_DRIVER -DHSE_VALUE=25000000 -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/stm32f4-hal" -std=gnu11 -MMD -MP -MF"src/Embedded-ARM-ITI-Training/SYSTICK Driver/src/SYSTICK_program.d" -MT"src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/src/SYSTICK_program.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/src/main.o: ../src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/src/main.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra  -g3 -DDEBUG -DUSE_FULL_ASSERT -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DSTM32F401xC -DUSE_HAL_DRIVER -DHSE_VALUE=25000000 -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/stm32f4-hal" -std=gnu11 -MMD -MP -MF"src/Embedded-ARM-ITI-Training/SYSTICK Driver/src/main.d" -MT"src/Embedded-ARM-ITI-Training/SYSTICK\ Driver/src/main.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


