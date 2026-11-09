#include "HEADFILE.H"

uint8_t B1_state;
uint8_t B2_state;
uint8_t B3_state;
uint8_t B4_state;
uint8_t B1_laststate;
uint8_t B2_laststate;
uint8_t B3_laststate;
uint8_t B4_laststate;

void key_scan(void)
{
	B1_state=HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_0);
	B2_state=HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_1);
	B3_state=HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_2);
	B4_state=HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0);
	if(B1_laststate==1 && B1_state==0)
	{
		LED_Show(1,1);
	}
	if(B2_laststate==1 && B2_state==0)
	{
		LED_Show(1,0);
	}
	if(B3_laststate==1 && B3_state==0)
	{
		
	}
	if(B4_laststate==1 && B4_state==0)
	{
		
	}
	B1_laststate=B1_state;
	B2_laststate=B2_state;
	B3_laststate=B3_state;
	B4_laststate=B4_state;
}
