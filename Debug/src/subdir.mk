################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CsvParser.cpp \
../src/Loader.cpp \
../src/MACD.cpp \
../src/main.cpp 

OBJS += \
./src/CsvParser.o \
./src/Loader.o \
./src/MACD.o \
./src/main.o 

CPP_DEPS += \
./src/CsvParser.d \
./src/Loader.d \
./src/MACD.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -std=c++11 -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


