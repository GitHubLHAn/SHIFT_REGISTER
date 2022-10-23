#define LIGHT_H
#include "stm32f1xx_hal.h"

#define LATCH(x) HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, x); // thay doi cac chan nay cho phu hop
#define DATA(x)  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, x); // thay doi cac chan nay cho phu hop
#define SHIFT(x) HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, x); // thay doi cac chan nay cho phu hop

extern void out1Light(unsigned char data);
extern void outNLight(unsigned char ardata[], unsigned int count);