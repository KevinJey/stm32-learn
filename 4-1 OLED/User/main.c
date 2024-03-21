#include "stm32f10x.h"                  // Device header
#include "Delay.h"

#include "OLED.h"

int main(void)
{
	OLED_Init();
	OLED_ShowChar(1,1,'A');
	OLED_ShowString(1,3,"Hello World"); 
	
	OLED_ShowChar(2,1,'A');
	OLED_ShowString(2,3,"Hello World"); 
	
	OLED_ShowChar(3,1,'A');
	OLED_ShowString(3,3,"Hello World"); 
	
	OLED_ShowChar(4,1,'A');
	OLED_ShowString(4,3,"Hello World"); 
	while (1)
	{

	}
}
