################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Embedded-ARM-ITI-Training/Assignmet-1--Traffic-Lightening-system/system/src/newlib/assert.c \
../src/Embedded-ARM-ITI-Training/Assignmet-1--Traffic-Lightening-system/system/src/newlib/exit.c \
../src/Embedded-ARM-ITI-Training/Assignmet-1--Traffic-Lightening-system/system/src/newlib/sbrk.c \
../src/Embedded-ARM-ITI-Training/Assignmet-1--Traffic-Lightening-system/system/src/newlib/startup.c \
../src/Embedded-ARM-ITI-Training/Assignmet-1--Traffic-Lightening-system/system/src/newlib/syscalls.c 

CPP_SRCS += \
../src/Embedded-ARM-ITI-Training/Assignmet-1--Traffic-Lightening-system/system/src/newlib/cxx.cpp 

OBJS += \
./src/Embedded-ARM-ITI-Training/Assignmet-1--Traffic-Lightening-system/system/src/newlib/assert.o \
./src/Embedded-ARM-ITI-Training/Assignmet-1--Traffic-Lightening-system/system/src/newlib/cxx.o \
./src/Embedded-ARM-ITI-Training/Assignmet-1--Traffic-Lightening-system/system/src/newlib/exit.o \
./src/Embedded-ARM-ITI-Training/Assignmet-1--Traffic-Lightening-system/system/src/newlib/sbrk.o \
./src/Embedded-ARM-ITI-Training/Assignmet-1--Traffic-Lightening-system/system/src/newlib/startup.o \
./src/Embedded-ARM-ITI-Training/Assignmet-1--Traffic-Lightening-system/system/src/newlib/syscalls.o 

C_DEPS += \
./src/Embedded-ARM-ITI-Training/Assignmet-1--Traffic-Lightening-system/system/src/newlib/assert.d \
./src/Embedded-ARM-ITI-Training/Assignmet-1--Traffic-Lightening-system/system/src/newlib/exit.d \
./src/Embedded-ARM-ITI-Training/Assignmet-1--Traffic-Lightening-system/system/src/newlib/sbrk.d \
./src/Embedded-ARM-ITI-Training/Assignmet-1--Traffic-Lightening-system/system/src/newlib/startup.d \
./src/Embedded-ARM-ITI-Training/Assignmet-1--Traffic-Lightening-system/system/src/newlib/syscalls.d 

CPP_DEPS += \
./src/Embedded-ARM-ITI-Training/Assignmet-1--Traffic-Lightening-system/system/src/newlib/cxx.d 


# Each subdirectory must supply rules for building sources it contributes
src/Embedded-ARM-ITI-Training/Assignmet-1--Traffic-Lightening-system/system/src/newlib/%.o: ../src/Embedded-ARM-ITI-Training/Assignmet-1--Traffic-Lightening-system/system/src/newlib/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra  -g3 -DDEBUG -DUSE_FULL_ASSERT -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DSTM32F401xC -DUSE_HAL_DRIVER -DHSE_VALUE=25000000 -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/stm32f4-hal" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Embedded-ARM-ITI-Training/Assignmet-1--Traffic-Lightening-system/system/src/newlib/%.o: ../src/Embedded-ARM-ITI-Training/Assignmet-1--Traffic-Lightening-system/system/src/newlib/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU C++ Compiler'
	arm-none-eabi-g++ -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra  -g3 -DDEBUG -DUSE_FULL_ASSERT -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DSTM32F401xC -DUSE_HAL_DRIVER -DHSE_VALUE=25000000 -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/stm32f4-hal" -std=gnu++11 -fabi-version=0 -fno-exceptions -fno-rtti -fno-use-cxa-atexit -fno-threadsafe-statics -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


