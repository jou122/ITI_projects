/*
 * MRCC_Prog.c
 *
 *  Created on: Aug 10, 2023
 *      Author: Mostafa Ashraf
 */

#include"../LIB/STD_Types.h"
#include"../LIB/BIT_Math.h"

#include "MRCC_Int.h"
#include "MRCC_Private.h"
#include "MRCC_Config.h"

void MRCC_vInit(void)
{
	/*1- CSS (ON/OFF) */

	/*2- HSE_BYP CLR->Oscillator Enable not bypassed, SET->Oscillator Disable bypassed */
	CLR_BIT(RCC -> CR, HSEBYP);

	/*3- select clock switch (HSI/HSE/PLL) */
	SET_BIT(RCC -> CFGR, SW0);

	/*4- Bus prescalers   */

	/*5- PLL configuration */

	/*6- Enable the selected clock (HSI ON / HSE ON / PLL ON)*/
#if RCC_HSE_ENABLE == ENABLE
	SET_BIT(RCC->CR, HSEON);
#endif

}

void MRCC_vEnableClock(/*???*/)
{
/******************** Assignment *******************************/
}

void MRCC_vDisableClock(/*???*/)
{
/******************** Assignment *******************************/
}
