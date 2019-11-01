################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../lintcode/easy/1.a-b-problem.cpp \
../lintcode/easy/112.remove-duplicates-from-sorted-list.cpp \
../lintcode/easy/114.unique-paths.cpp \
../lintcode/easy/115.unique-paths-ii.cpp \
../lintcode/easy/165.merge-two-sorted-lists.cpp \
../lintcode/easy/174.remove-nth-node-from-end-of-list.cpp \
../lintcode/easy/41.maximum-subarray.cpp \
../lintcode/easy/69.binary-tree-level-order-traversal.cpp \
../lintcode/easy/85.insert-node-in-a-binary-search-tree.cpp \
../lintcode/easy/93.balanced-binary-tree.cpp \
../lintcode/easy/96.partition-list.cpp \
../lintcode/easy/97.maximum-depth-of-binary-tree.cpp 

OBJS += \
./lintcode/easy/1.a-b-problem.o \
./lintcode/easy/112.remove-duplicates-from-sorted-list.o \
./lintcode/easy/114.unique-paths.o \
./lintcode/easy/115.unique-paths-ii.o \
./lintcode/easy/165.merge-two-sorted-lists.o \
./lintcode/easy/174.remove-nth-node-from-end-of-list.o \
./lintcode/easy/41.maximum-subarray.o \
./lintcode/easy/69.binary-tree-level-order-traversal.o \
./lintcode/easy/85.insert-node-in-a-binary-search-tree.o \
./lintcode/easy/93.balanced-binary-tree.o \
./lintcode/easy/96.partition-list.o \
./lintcode/easy/97.maximum-depth-of-binary-tree.o 

CPP_DEPS += \
./lintcode/easy/1.a-b-problem.d \
./lintcode/easy/112.remove-duplicates-from-sorted-list.d \
./lintcode/easy/114.unique-paths.d \
./lintcode/easy/115.unique-paths-ii.d \
./lintcode/easy/165.merge-two-sorted-lists.d \
./lintcode/easy/174.remove-nth-node-from-end-of-list.d \
./lintcode/easy/41.maximum-subarray.d \
./lintcode/easy/69.binary-tree-level-order-traversal.d \
./lintcode/easy/85.insert-node-in-a-binary-search-tree.d \
./lintcode/easy/93.balanced-binary-tree.d \
./lintcode/easy/96.partition-list.d \
./lintcode/easy/97.maximum-depth-of-binary-tree.d 


# Each subdirectory must supply rules for building sources it contributes
lintcode/easy/%.o: ../lintcode/easy/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


