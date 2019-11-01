################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../lintcode/hard/121.word-laddder-ii.cpp \
../lintcode/hard/20.diced-sum.cpp \
../lintcode/hard/24.lfu-cache.cpp \
../lintcode/hard/43.maximum-subarray-iii.cpp \
../lintcode/hard/65.median-of-two-sorted-arrays.cpp \
../lintcode/hard/87.remove-node-in-binary-search-tree.cpp 

OBJS += \
./lintcode/hard/121.word-laddder-ii.o \
./lintcode/hard/20.diced-sum.o \
./lintcode/hard/24.lfu-cache.o \
./lintcode/hard/43.maximum-subarray-iii.o \
./lintcode/hard/65.median-of-two-sorted-arrays.o \
./lintcode/hard/87.remove-node-in-binary-search-tree.o 

CPP_DEPS += \
./lintcode/hard/121.word-laddder-ii.d \
./lintcode/hard/20.diced-sum.d \
./lintcode/hard/24.lfu-cache.d \
./lintcode/hard/43.maximum-subarray-iii.d \
./lintcode/hard/65.median-of-two-sorted-arrays.d \
./lintcode/hard/87.remove-node-in-binary-search-tree.d 


# Each subdirectory must supply rules for building sources it contributes
lintcode/hard/%.o: ../lintcode/hard/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


