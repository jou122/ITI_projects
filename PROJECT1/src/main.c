/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus)
 * Copyright (c) 2014 Liviu Ionescu.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

// ----------------------------------------------------------------------------
#include"BIT_Math.h"
#include"STD_Types.h"

#include "MGPIO_Int.h"
#include "MRCC_Int.h"
#include "MEXTI_Int.h"
#include "MSTK_Int.h"

#define LED_G 0
#define LED_Y 1
#define LED_R 2
#define button 3

void Blink_LED(void)
{
	MGPIO_vSetPinVal(MGPIO_PORTA,LED_Y,MGPIO_HIGH);
	MGPIO_vSetPinVal(MGPIO_PORTA,LED_G,MGPIO_HIGH);
	MGPIO_vSetPinVal(MGPIO_PORTA,LED_R,MGPIO_LOW);
}


int main(void)
{

	void (*fun_ptr)(void)=&Blink_LED;

	MRCC_vInit();

	MRCC_vEnableClock(RCC_AHB1,GPIOAEN);
	MRCC_vEnableClock(RCC_AHB1,SYSCFGEN);


	MGPIO_vSetPinMode(MGPIO_PORTA,LED_Y,MGPIO_MODE_OUTPUT);
	MGPIO_vSetPinMode(MGPIO_PORTA,LED_G,MGPIO_MODE_OUTPUT);
	MGPIO_vSetPinMode(MGPIO_PORTA,LED_R,MGPIO_MODE_OUTPUT);

	MGPIO_vSetPinMode(MGPIO_PORTA,button,MGPIO_MODE_INPUT);
	MGPIO_vSetPinInputPull(MGPIO_PORTA, button, MGPIO_PULL_UP);

	MEXTI_voidInerruptSetPort(LINE3,MEXTI_PORTA);
	MEXTI_voidSelectTrigger(LINE3,FALLING);
	MEXIT_voidSetCallback(LINE3,fun_ptr);
	MEXTI_voidEnableEXTI(LINE3);


	while (1)
    {
    }
	return 0;
}
