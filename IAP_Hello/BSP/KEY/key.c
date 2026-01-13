#include "Key.h"
#include "delay.h"

void Key_Port_Init()
{
	GPIO_InitTypeDef GPIO_Init_Struct ={0};
	
	__HAL_RCC_GPIOA_CLK_ENABLE();
	
	GPIO_Init_Struct.Pin=KEY1_PIN;
	GPIO_Init_Struct.Mode=GPIO_MODE_IT_FALLING;
	GPIO_Init_Struct.Pull=GPIO_PULLUP;
	HAL_GPIO_Init(KEY1_PORT,&GPIO_Init_Struct);
	
	
	GPIO_Init_Struct.Pin=GPIO_PIN_4;
	GPIO_Init_Struct.Mode=GPIO_MODE_IT_RISING;
	GPIO_Init_Struct.Pull=GPIO_PULLDOWN;
	HAL_GPIO_Init(GPIOA,&GPIO_Init_Struct);
}
	
uint8_t KeyScan(uint8_t mode)
{
	static uint8_t key_up;
	uint8_t keyvalue=0;
	if(mode) key_up=1;
	if( key_up && (!KEY1||KEY2))
	{
		delay_ms(3);
		if(!KEY1)keyvalue=1;
		else if(KEY2) keyvalue=2;
		if(keyvalue)key_up=0;
	}
	else 
	{
		delay_ms(3);
		if(KEY1&&(!KEY2))
		key_up=1;
	}
	return keyvalue;
}


