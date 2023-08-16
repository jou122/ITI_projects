################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
ELF_SRCS += \
../src/Embedded-ARM-ITI-Training/GPIO/Debug/GPIO.elf 

ASM_SRCS += \
../src/Embedded-ARM-ITI-Training/GPIO/Debug/GPIO.hex.asm 

OBJS += \
./src/Embedded-ARM-ITI-Training/GPIO/Debug/GPIO.hex.o 

ASM_DEPS += \
./src/Embedded-ARM-ITI-Training/GPIO/Debug/GPIO.hex.d 


# Each subdirectory must supply rules for building sources it contributes
src/Embedded-ARM-ITI-Training/GPIO/Debug/%.o: ../src/Embedded-ARM-ITI-Training/GPIO/Debug/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU Assembler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra  -g3 -x assembler-with-cpp -DDEBUG -DUSE_FULL_ASSERT -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DSTM32F401xC -DUSE_HAL_DRIVER -DHSE_VALUE=25000000 -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/stm32f4-hal" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


