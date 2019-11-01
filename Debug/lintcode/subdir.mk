################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../lintcode/lintcode.cpp 

OBJS += \
./lintcode/lintcode.o 

CPP_DEPS += \
./lintcode/lintcode.d 


# Each subdirectory must supply rules for building sources it contributes
lintcode/%.o: ../lintcode/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


