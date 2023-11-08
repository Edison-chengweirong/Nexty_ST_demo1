################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../BSP/BSP_IIS.c \
../BSP/BSP_KEY.c \
../BSP/BSP_LED.c \
../BSP/BSP_PWM.c \
../BSP/BSP_UART.c 

OBJS += \
./BSP/BSP_IIS.o \
./BSP/BSP_KEY.o \
./BSP/BSP_LED.o \
./BSP/BSP_PWM.o \
./BSP/BSP_UART.o 

C_DEPS += \
./BSP/BSP_IIS.d \
./BSP/BSP_KEY.d \
./BSP/BSP_LED.d \
./BSP/BSP_PWM.d \
./BSP/BSP_UART.d 


# Each subdirectory must supply rules for building sources it contributes
BSP/%.o BSP/%.su BSP/%.cyclo: ../BSP/%.c BSP/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"D:/projects/ST/demo1/demo1/BSP" -I"D:/projects/ST/demo1/demo1/API" -I"D:/projects/ST/demo1/demo1/APP" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-BSP

clean-BSP:
	-$(RM) ./BSP/BSP_IIS.cyclo ./BSP/BSP_IIS.d ./BSP/BSP_IIS.o ./BSP/BSP_IIS.su ./BSP/BSP_KEY.cyclo ./BSP/BSP_KEY.d ./BSP/BSP_KEY.o ./BSP/BSP_KEY.su ./BSP/BSP_LED.cyclo ./BSP/BSP_LED.d ./BSP/BSP_LED.o ./BSP/BSP_LED.su ./BSP/BSP_PWM.cyclo ./BSP/BSP_PWM.d ./BSP/BSP_PWM.o ./BSP/BSP_PWM.su ./BSP/BSP_UART.cyclo ./BSP/BSP_UART.d ./BSP/BSP_UART.o ./BSP/BSP_UART.su

.PHONY: clean-BSP

