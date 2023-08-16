/*
 * MEXTI_Config.h
 *
 *  Created on: Aug 15, 2023
 *      Author: Youssef
 *      Version: V1
 */
#include"../../LIB/BIT_Math.h"
#include"../../LIB/STD_Types.h"
#include "MEXTI_int.h"
#include "MEXTI_config.h"
#include "MEXTI_private.h"



/*Pointer to function*/

static void(*EXIT_CallBack_Arr[16])(void);




void MEXTI_voidEnableEXTI(u8 Copy_u8Line)
{
	SET_BIT(MEXTI->IMR , Copy_u8Line);
}
void MEXTI_voidDisableEXTI(u8 Copy_u8Line)
{
	CLR_BIT(MEXTI->IMR , Copy_u8Line);
}
void MEXTI_voidSoftware(u8 Copy_u8Line)
{
	SET_BIT(MEXTI -> SWIER , Copy_u8Line);
}


void MEXTI_voidSelectTrigger(u8 Copy_u8Line , u8 Copy_u8Mode)
{
	switch(Copy_u8Mode)
	{
		case RISING 	:	SET_BIT(MEXTI -> RTSR , Copy_u8Line); 	break;
		case FALLING	:	SET_BIT(MEXTI -> FTSR , Copy_u8Line); 	break;
		case ON_CHANGE 	:	SET_BIT(MEXTI -> RTSR , Copy_u8Line);
							SET_BIT(MEXTI -> FTSR , Copy_u8Line); 	break;
	}
}


void MEXIT_voidCallback(u8 Copy_u8InNum,void(*ptr)(void))
{
	EXIT_CallBack_Arr[Copy_u8InNum] = ptr;
}

void EXTI0_IRQHandler(void){
	EXIT_CallBack_Arr[0]();
	SET_BIT(MEXTI->PR,0);
}
