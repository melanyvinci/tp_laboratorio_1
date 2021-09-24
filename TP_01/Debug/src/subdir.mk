################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/BibliotecaUTN_2021.c \
../src/TP01_MelanyVinci.c 

OBJS += \
./src/BibliotecaUTN_2021.o \
./src/TP01_MelanyVinci.o 

C_DEPS += \
./src/BibliotecaUTN_2021.d \
./src/TP01_MelanyVinci.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


