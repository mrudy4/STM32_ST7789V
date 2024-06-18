/*
 * ST7789V.c
 *
 *  Created on: Jun 13, 2024
 *      Author: maciejrudy
 */

#include "stm32f1xx_hal.h"
#include "gpio.h"
#include "ST7789V.h"

extern SPI_HandleTypeDef hspi2;
#define ST7789V_SPI &hspi2
#define ST7789V_CS_PORT GPIOB
#define ST7789V_CS_PIN CS_Pin

void ST7789V_init(){

	HAL_GPIO_WritePin(ST7789V_CS_PORT, ST7789V_CS_PIN, 0);
	// test //
}

void CS_Select (void)
{
	HAL_GPIO_WritePin(ST7789V_CS_PORT, ST7789V_CS_PIN, GPIO_PIN_RESET);
}

void CS_UnSelect (void)
{
	HAL_GPIO_WritePin(ST7789V_CS_PORT, ST7789V_CS_PIN, GPIO_PIN_SET);
}


