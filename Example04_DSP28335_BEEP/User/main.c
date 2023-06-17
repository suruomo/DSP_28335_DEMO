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
* 函 数 名         : main
* 函数功能		   : 主函数，使蜂鸣器发声，并使LED灯反转
* 输    入         : 无
* 输    出         : 无
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
		// 压电式蜂鸣器需要输出1.5KHZ-5KHZ的音频信号，阻抗匹配器推动压电蜂鸣片发声
		// 此处使用5KHZ，根据F=1/T，则时钟周期为0.0002S=200微妙，因此高低电平各输出100微妙，所以延时100微妙反转。
		DELAY_US(100);
	}
}

