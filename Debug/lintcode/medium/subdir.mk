################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../lintcode/medium/102.linked-list-cycle.cpp \
../lintcode/medium/105.copy-list-with-random-pointer.cpp \
../lintcode/medium/106.convert-sorted-list-to-binary-search-tree.cpp \
../lintcode/medium/11.search-range-in-binary-search-tree.cpp \
../lintcode/medium/124.longest-consecutive-sequence.cpp \
../lintcode/medium/15.permutations.cpp \
../lintcode/medium/16.permutations-ii.cpp \
../lintcode/medium/17.subsets.cpp \
../lintcode/medium/170.rotate-list.cpp \
../lintcode/medium/191.maximum-product-subarray.cpp \
../lintcode/medium/3.digit_counts.cpp \
../lintcode/medium/4.ugly-number-ii.cpp \
../lintcode/medium/5.kth-largest-element.cpp \
../lintcode/medium/7.serialize-and-deserialize-binary-tree.cpp \
../lintcode/medium/92.backpack.cpp \
../lintcode/medium/95.validate-binary-search-tree.cpp \
../lintcode/medium/98.sort-list.cpp \
../lintcode/medium/99.reorder-list.cpp 

OBJS += \
./lintcode/medium/102.linked-list-cycle.o \
./lintcode/medium/105.copy-list-with-random-pointer.o \
./lintcode/medium/106.convert-sorted-list-to-binary-search-tree.o \
./lintcode/medium/11.search-range-in-binary-search-tree.o \
./lintcode/medium/124.longest-consecutive-sequence.o \
./lintcode/medium/15.permutations.o \
./lintcode/medium/16.permutations-ii.o \
./lintcode/medium/17.subsets.o \
./lintcode/medium/170.rotate-list.o \
./lintcode/medium/191.maximum-product-subarray.o \
./lintcode/medium/3.digit_counts.o \
./lintcode/medium/4.ugly-number-ii.o \
./lintcode/medium/5.kth-largest-element.o \
./lintcode/medium/7.serialize-and-deserialize-binary-tree.o \
./lintcode/medium/92.backpack.o \
./lintcode/medium/95.validate-binary-search-tree.o \
./lintcode/medium/98.sort-list.o \
./lintcode/medium/99.reorder-list.o 

CPP_DEPS += \
./lintcode/medium/102.linked-list-cycle.d \
./lintcode/medium/105.copy-list-with-random-pointer.d \
./lintcode/medium/106.convert-sorted-list-to-binary-search-tree.d \
./lintcode/medium/11.search-range-in-binary-search-tree.d \
./lintcode/medium/124.longest-consecutive-sequence.d \
./lintcode/medium/15.permutations.d \
./lintcode/medium/16.permutations-ii.d \
./lintcode/medium/17.subsets.d \
./lintcode/medium/170.rotate-list.d \
./lintcode/medium/191.maximum-product-subarray.d \
./lintcode/medium/3.digit_counts.d \
./lintcode/medium/4.ugly-number-ii.d \
./lintcode/medium/5.kth-largest-element.d \
./lintcode/medium/7.serialize-and-deserialize-binary-tree.d \
./lintcode/medium/92.backpack.d \
./lintcode/medium/95.validate-binary-search-tree.d \
./lintcode/medium/98.sort-list.d \
./lintcode/medium/99.reorder-list.d 


# Each subdirectory must supply rules for building sources it contributes
lintcode/medium/%.o: ../lintcode/medium/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


