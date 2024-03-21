#include "stm32f10x.h"                  // Device header
#include "Delay.h"

int main(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
	
	GPIO_InitTypeDef GPIO_InitStructure;
	// �������ģʽ
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_All;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	// ��ʼ��A�ڣ� �ṹ���ָ���ȥ ��ʾ��A�ڵ���������
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	
	while (1)
	{
		// ����Ϊ�͵�ƽ
		GPIO_ResetBits(GPIOA, GPIO_Pin_0);
		Delay_ms(200);
		GPIO_SetBits(GPIOA, GPIO_Pin_0);
		Delay_ms(100);
		
		GPIO_ResetBits(GPIOA, GPIO_Pin_1);
		Delay_ms(200);
		GPIO_SetBits(GPIOA, GPIO_Pin_1);
		Delay_ms(100);
		
		GPIO_ResetBits(GPIOA, GPIO_Pin_2);
		Delay_ms(200);
		GPIO_SetBits(GPIOA, GPIO_Pin_2);
		Delay_ms(100);
		
		GPIO_ResetBits(GPIOA, GPIO_Pin_3);
		Delay_ms(200);
		GPIO_SetBits(GPIOA, GPIO_Pin_3);
		Delay_ms(100);
		
		GPIO_ResetBits(GPIOA, GPIO_Pin_4);
		Delay_ms(200);
		GPIO_SetBits(GPIOA, GPIO_Pin_4);
		Delay_ms(100);
		
		GPIO_ResetBits(GPIOA, GPIO_Pin_5);
		Delay_ms(200);
		GPIO_SetBits(GPIOA, GPIO_Pin_5);
		Delay_ms(100);
		
		GPIO_ResetBits(GPIOA, GPIO_Pin_6);
		Delay_ms(200);
		GPIO_SetBits(GPIOA, GPIO_Pin_6);
		Delay_ms(100);
		
		GPIO_ResetBits(GPIOA, GPIO_Pin_7);
		Delay_ms(200);
		GPIO_SetBits(GPIOA, GPIO_Pin_7);
		Delay_ms(500);
	}
}
