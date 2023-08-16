/*
 * MSTK_Prog.c
 *
 *  Created on: Aug 16, 2023
 *      Author: Youssef
		Version: V2
 */

#include"../../LIB/BIT_Math.h"
#include"../../LIB/STD_Types.h"
#include "MSTK_Int.h"
#include "MSTK_Config.h"
#include "MSTK_Private.h"


/*Pointer to call back function*/
void ( * MSTK_CallBack ) ( void );


/*Int handelar*/
void SysTick_Handler(void){
		if(GS_STK_Callback != NULL)
	{
		GS_STK_Callback();
	}
	if(G_u8SingleFlag)
	{
		G_u8SingleFlag = 0 ;
		/* 5-  Stop the timer   */
		CLR_BIT(STK->CTRL, STK_ENABLE);
	}
}


/*set the callback function*/
void MSTK_voidSetCallBack( void (*ptr)(void) ){
	MSTK_CallBack = ptr;
}




/*Intialise the */
void MSTK_vInit(void) {
#if(MSTK_CLOCK_SOURCE==AHB)
	{
		CLR_BIT(MSTK->CTRL,CLKSOURCE);
	}
#elif(MSTK_CLOCK_SOURCE==AHB_BY_8)
	{
		SET_BIT(MSTK->CTRL,CLKSOURCE);
	}
#endif
}

void MSTK_vSetIntState(MSTK_INT_STATE_t Copy_State){
	switch(Copy_State){
		case MSTK_INT_ENABLE:
			SET_BIT(MSTK->CTRL,TICKINT);
			break;
		case MSTK_INT_DISABLE:
			SET_BIT(MSTK->CTRL,TICKINT);
			break;
	}
}

u8  MSTK_u8GetFlag(void){
return GET_BIT(MSTK->CTRL,COUNTFLAG);
}

u32 MSTK_u32GetRemainingTime(void){
	return (MSTK->LOAD - MSTK->VAL);
}

u32 MSTK_u32GetElabsedTime(void){
	return (MSTK->VAL);
}


void MSTK_vCount(u32 Copy_u32Value){
	MSTK->LOAD=Copy_u32Value;
	MSTK->VAL=0;
	SET_BIR(MSTK->CTRL,ENABLE);
}

void MSTK_vDelay_us(u32 Copy_u32ValueUs){
	MSTK_vIntState(MSTK_INT_DISABLE);
	MSTK_vCount(Copy_u32ValueUs);
	while(MSTK_u8GetFlag()==0);
	CLR_BIT(STK->CTRL, STK_ENABLE);
}

void MSTK_vDelay_ms(u32 Copy_u32ValueMs){
	MSTK_vIntState(MSTK_INT_DISABLE);
	MSTK_vCount(Copy_u32ValueMs*1000);
	while(MSTK_u8GetFlag()==0);
	CLR_BIT(STK->CTRL, STK_ENABLE);
}


void MSTK_vSetInterval_single(u32 Copy_u32Value)
{
	G_u8SingleFlag = 1 ;
	MSTK_vCount(Copy_u32Ticks)
}