/*
 * main.c
 *
 *  Created on: 2018-3-21
 *      Author: Administrator
 */


#include "DSP2833x_Device.h"     // DSP2833x Headerfile Include File
#include "DSP2833x_Examples.h"   // DSP2833x Examples Include File

#include "leds.h"
#include "key.h"


/*******************************************************************************
* �� �� ��         : main
* ��������		   : ������
* ��    ��         : ��
* ��    ��         : ��
*******************************************************************************/
void main()
{
	int i=0;
	char key=0;

	InitSysCtrl();

	LED_Init();
	KEY_Init();

	while(1)
	{
		key=KEY_Scan(0);
		switch(key)
		{
			case KEY1_PRESS: LED2_TOGGLE;break;
			case KEY2_PRESS: LED3_TOGGLE;break;
			case KEY3_PRESS: LED4_TOGGLE;break;
			case KEY4_PRESS: LED5_TOGGLE;break;
			case KEY5_PRESS: LED6_TOGGLE;break;
			case KEY6_PRESS: LED7_TOGGLE;break;
		}

		i++;
		if(i%2000==0)
		{
			LED1_TOGGLE;
		}
		DELAY_US(100);
	}
}

