#include "stm32f4xx.h"
#include "stm32f4xx_gpio.h"
#include "led.h" 

/*********************************************************************************
*********************�������� STM32F407Ӧ�ÿ�����(�����)*************************
**********************************************************************************
* �ļ�����: led.c                                                                *
* �ļ�������LED��ʼ��                                                            *
* �������ڣ�2017.08.30                                                           *
* ��    ����V1.0                                                                 *
* ��    �ߣ�Clever                                                               *
* ˵    ����LED��ӦIO�ڳ�ʼ��                                                    * 
* �Ա����̣�https://shop125046348.taobao.com                                     *
**********************************************************************************
*********************************************************************************/

//LED��ӦIO��ʼ��
void LED_Init(void)
{    	 
  GPIO_InitTypeDef GPIO_InitStructure;

	RCC_AHB1PeriphClockCmd(
	RCC_AHB1Periph_GPIOA | RCC_AHB1Periph_GPIOE | RCC_AHB1Periph_GPIOG, ENABLE); //ʹ��GPIOGʱ��

	//PG13��PG14��PG15��ʼ������
//	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3 | GPIO_Pin_4; //LED0��LED1��LED2��ӦIO��
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;                 //��ͨ���ģʽ
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;                 //�������
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;             //100MHz
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;                   //����

	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1;
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	GPIO_SetBits(GPIOA, GPIO_Pin_1);
}






