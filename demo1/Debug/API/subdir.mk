################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../API/API_KEY.c \
../API/API_LED.c 

OBJS += \
./API/API_KEY.o \
./API/API_LED.o 

C_DEPS += \
./API/API_KEY.d \
./API/API_LED.d 


# Each subdirectory must supply rules for building sources it contributes
API/%.o API/%.su API/%.cyclo: ../API/%.c API/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"D:/projects/ST/demo1/demo1/BSP" -I"D:/projects/ST/demo1/demo1/API" -I"D:/projects/ST/demo1/demo1/APP" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-API

clean-API:
	-$(RM) ./API/API_KEY.cyclo ./API/API_KEY.d ./API/API_KEY.o ./API/API_KEY.su ./API/API_LED.cyclo ./API/API_LED.d ./API/API_LED.o ./API/API_LED.su

.PHONY: clean-API

