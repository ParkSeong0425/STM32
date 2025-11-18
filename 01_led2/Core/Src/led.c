/*
 * led.c
 *
 *  Created on: Oct 13, 2025
 *      Author: user8
 */


#include "led.h"

LED_CONTROL led[8]=
    {
        {GPIOA, GPIO_PIN_5, GPIO_PIN_SET, GPIO_PIN_RESET},
        {GPIOA, GPIO_PIN_6, GPIO_PIN_SET, GPIO_PIN_RESET},
        {GPIOA, GPIO_PIN_7, GPIO_PIN_SET, GPIO_PIN_RESET},
        {GPIOB, GPIO_PIN_6, GPIO_PIN_SET, GPIO_PIN_RESET},
        {GPIOC, GPIO_PIN_7, GPIO_PIN_SET, GPIO_PIN_RESET},
        {GPIOA, GPIO_PIN_9, GPIO_PIN_SET, GPIO_PIN_RESET},
        {GPIOA, GPIO_PIN_8, GPIO_PIN_SET, GPIO_PIN_RESET},
        {GPIOB, GPIO_PIN_10, GPIO_PIN_SET, GPIO_PIN_RESET}

    };

void ledOn(uint8_t num)
{
  // 한꺼번에 다 킴

    HAL_GPIO_WritePin(led[num].port, led[num].pinNumber, led[num].onState);


}

void ledOff(uint8_t num)
{

  HAL_GPIO_WritePin(led[num].port, led[num].pinNumber, led[num].offState);

}

void ledToggle(uint8_t num)
{
  for(uint8_t i = 0; i < num; i++)
  {
  HAL_GPIO_TogglePin(led[i].port, led[i].pinNumber);
  HAL_Delay(200);
  }
}

void ledLeftShift(uint8_t num)
{
 for(uint8_t i =0; i<= 7; i++)
 {
   ledOn(i);
   HAL_Delay(100);
 }
  HAL_Delay(500);
  for(uint8_t i =0; i<= 7; i++)
    {
     ledOff(i);
    HAL_Delay(100);
    }
}


void ledRightShift(uint8_t num)
{
  for (int i = 0; i <= 7; i++)
  {
    ledOn(7-i);
    HAL_Delay(100);

  }

  HAL_Delay(500);

  for (int i = 0; i <= 7; i++)
  {
    ledOff(7-i);
    HAL_Delay(100);

  }
}


void ledFlower_1(uint8_t num)
{

for(int i=4; i <= 7; i++)
{
  ledOn(i);
  ledOn(7-i);
  HAL_Delay(100);
}
for(int i=4; i <= 7; i++)
{
  ledOff(i);
  ledOff(7-i);
  HAL_Delay(100);
}

}

void ledFlower_2(uint8_t num)
{

for(int i=7; i >=4; i--)
{
  ledOn(i);
  ledOn(7-i);
  HAL_Delay(100);
}
for(int i=7; i >=4; i--)
{
  ledOff(i);
  ledOff(7-i);
  HAL_Delay(100);
}

}


