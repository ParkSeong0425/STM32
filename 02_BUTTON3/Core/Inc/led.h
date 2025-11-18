/*
 * led.h
 *
 *  Created on: Oct 13, 2025
 *      Author: user8
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#include "main.h"



typedef struct
{
  GPIO_TypeDef *port;
  uint16_t pinNumber;
  GPIO_PinState onState;
  GPIO_PinState offState;
}LED_CONTROL;


void ledOn(uint8_t num);
void ledOff(uint8_t num);
void ledToggle(uint8_t num);

void ledLeftShift(uint8_t num);
void ledRightShift(uint8_t num);
void ledFlower_1(uint8_t num);
void ledFlower_2(uint8_t num);

void ledCount(uint8_t num);

#endif /* INC_LED_H_ */
