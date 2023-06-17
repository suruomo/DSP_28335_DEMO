/*
 * main.c
 *
 *  Created on: 2018-3-21
 *      Author: Administrator
 */


#include "DSP2833x_Device.h"     // DSP2833x Headerfile Include File
#include "DSP2833x_Examples.h"   // DSP2833x Examples Include File

#include "leds.h"
#include "beep.h"

/*******************************************************************************
* �� �� ��         : main
* ��������		   : ��������ʹ��������������ʹLED�Ʒ�ת
* ��    ��         : ��
* ��    ��         : ��
*******************************************************************************/
void main()
{
	int i=0;

	InitSysCtrl();

	LED_Init();
	BEEP_Init();

	while(1)
	{
		i++;

		BEEP_TOGGLE;

		if(i%1000==0)
		{
			LED1_TOGGLE;
		}
		// ѹ��ʽ��������Ҫ���1.5KHZ-5KHZ����Ƶ�źţ��迹ƥ�����ƶ�ѹ�����Ƭ����
		// �˴�ʹ��5KHZ������F=1/T����ʱ������Ϊ0.0002S=200΢���˸ߵ͵�ƽ�����100΢�������ʱ100΢�ת��
		DELAY_US(100);
	}
}

