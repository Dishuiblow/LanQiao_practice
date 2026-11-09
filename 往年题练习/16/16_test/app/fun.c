#include "HEADFILE.H"

char text[20];

void LED_Show(uint8_t led,uint8_t mode)
{
	HAL_GPIO_WritePin(GPIOD,GPIO_PIN_2,GPIO_PIN_SET);
	if(mode)
	{
		HAL_Delay(20);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_8<<(led-1),GPIO_PIN_RESET);
		HAL_Delay(20);
	}
	else
	{
		HAL_Delay(20);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_8<<(led-1),GPIO_PIN_SET);
		HAL_Delay(20);
	}
	HAL_GPIO_WritePin(GPIOD,GPIO_PIN_2,GPIO_PIN_RESET);
}

void lcd_show(void)
{
	sprintf(text,"text");
	LCD_DisplayStringLine(Line1,(uint8_t *)text);
	HAL_Delay(20);
}