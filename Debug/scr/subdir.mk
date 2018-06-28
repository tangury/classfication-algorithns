################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../scr/01_rabbit.cpp \
../scr/02_prime_number.cpp \
../scr/03_daffodil_number.cpp \
../scr/04_int_to_factor.cpp \
../scr/05_student_grade.cpp \
../scr/06_phase_division.cpp \
../scr/07_Statistical_char.cpp \
../scr/08_number_sum.cpp \
../scr/09_Complete_number.cpp \
../scr/10_free_fall.cpp \
../scr/11_Monkey_\ picking_\ peach.cpp \
../scr/12_Iterative_\ for_equation.cpp \
../scr/13_sort_star.cpp \
../scr/14_Palindrome.cpp \
../scr/16_Diagonal_sum_matrices.cpp \
../scr/17_Reverse_array.cpp 

C_SRCS += \
../scr/15_Determine_day.c \
../scr/18_learning_static.c 

OBJS += \
./scr/01_rabbit.o \
./scr/02_prime_number.o \
./scr/03_daffodil_number.o \
./scr/04_int_to_factor.o \
./scr/05_student_grade.o \
./scr/06_phase_division.o \
./scr/07_Statistical_char.o \
./scr/08_number_sum.o \
./scr/09_Complete_number.o \
./scr/10_free_fall.o \
./scr/11_Monkey_\ picking_\ peach.o \
./scr/12_Iterative_\ for_equation.o \
./scr/13_sort_star.o \
./scr/14_Palindrome.o \
./scr/15_Determine_day.o \
./scr/16_Diagonal_sum_matrices.o \
./scr/17_Reverse_array.o \
./scr/18_learning_static.o 

CPP_DEPS += \
./scr/01_rabbit.d \
./scr/02_prime_number.d \
./scr/03_daffodil_number.d \
./scr/04_int_to_factor.d \
./scr/05_student_grade.d \
./scr/06_phase_division.d \
./scr/07_Statistical_char.d \
./scr/08_number_sum.d \
./scr/09_Complete_number.d \
./scr/10_free_fall.d \
./scr/11_Monkey_\ picking_\ peach.d \
./scr/12_Iterative_\ for_equation.d \
./scr/13_sort_star.d \
./scr/14_Palindrome.d \
./scr/16_Diagonal_sum_matrices.d \
./scr/17_Reverse_array.d 

C_DEPS += \
./scr/15_Determine_day.d \
./scr/18_learning_static.d 


# Each subdirectory must supply rules for building sources it contributes
scr/%.o: ../scr/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

scr/11_Monkey_\ picking_\ peach.o: ../scr/11_Monkey_\ picking_\ peach.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"scr/11_Monkey_ picking_ peach.d" -MT"scr/11_Monkey_\ picking_\ peach.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

scr/12_Iterative_\ for_equation.o: ../scr/12_Iterative_\ for_equation.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"scr/12_Iterative_ for_equation.d" -MT"scr/12_Iterative_\ for_equation.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

scr/%.o: ../scr/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


