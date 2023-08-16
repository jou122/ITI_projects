/*
 * MGPIO_Prog.c
 *
 *  Created on: Aug 10, 2023
 *      Author: Mostafa Ashraf
 */

#include"../../LIB/BIT_Math.h"
#include"../../LIB/STD_Types.h"

#include"MGPIO_Int.h"
#include"MGPIO_Private.h"
#include"MGPIO_Config.h"



void MGPIO_vSetPinMode(u8 Copy_u8PortId, u8 Copy_PinNo, u8 Copy_u8Mode){

	if(Copy_u8Mode == GPIO_MODE_INPUT){
		switch(Copy_u8PortId){
		case GPIO_PORTA:
			GPIOA -> MODER &= ~(0b11 << (Copy_PinNo*2));
			GPIOA -> MODER |= (Copy_u8Mode <<(Copy_PinNo*2));
			break;
		case GPIO_PORTB:
			GPIOB -> MODER &= ~(0b11 << (Copy_PinNo*2));
			GPIOB -> MODER |= (Copy_u8Mode <<(Copy_PinNo*2));
			break;
		case GPIO_PORTC:
			GPIOC -> MODER &= ~(0b11 << (Copy_PinNo*2));
			GPIOC -> MODER |= (Copy_u8Mode <<(Copy_PinNo*2));
			break;
		}
	}
	else if(Copy_u8Mode == GPIO_MODE_OUTPUT){
		switch(Copy_u8PortId){
		case GPIO_PORTA:
			GPIOA -> MODER &= ~(0b11 << (Copy_PinNo*2));
			GPIOA -> MODER |= (Copy_u8Mode <<(Copy_PinNo*2));
			break;
		case GPIO_PORTB:
			GPIOB -> MODER &= ~(0b11 << (Copy_PinNo*2));
			GPIOB -> MODER |= (Copy_u8Mode <<(Copy_PinNo*2));
			break;
		case GPIO_PORTC:
			GPIOC -> MODER &= ~(0b11 << (Copy_PinNo*2));
			GPIOC -> MODER |= (Copy_u8Mode <<(Copy_PinNo*2));
			break;
		}
	}
	else if(Copy_u8Mode == GPIO_MODE_ALTFUN){
		switch(Copy_u8PortId){
		case GPIO_PORTA:
			GPIOA -> MODER &= ~(0b11 << (Copy_PinNo*2));
			GPIOA -> MODER |= (Copy_u8Mode <<(Copy_PinNo*2));
			break;
		case GPIO_PORTB:
			GPIOB -> MODER &= ~(0b11 << (Copy_PinNo*2));
			GPIOB -> MODER |= (Copy_u8Mode <<(Copy_PinNo*2));
			break;
		case GPIO_PORTC:
			GPIOC -> MODER &= ~(0b11 << (Copy_PinNo*2));
			GPIOC -> MODER |= (Copy_u8Mode <<(Copy_PinNo*2));
			break;
		}
	}
	else if(Copy_u8Mode == GPIO_MODE_ANALOG){
		switch(Copy_u8PortId){
		case GPIO_PORTA:
			GPIOA -> MODER &= ~(0b11 << (Copy_PinNo*2));
			GPIOA -> MODER |= (Copy_u8Mode <<(Copy_PinNo*2));
			break;
		case GPIO_PORTB:
			GPIOB -> MODER &= ~(0b11 << (Copy_PinNo*2));
			GPIOB -> MODER |= (Copy_u8Mode <<(Copy_PinNo*2));
			break;
		case GPIO_PORTC:
			GPIOC -> MODER &= ~(0b11 << (Copy_PinNo*2));
			GPIOC -> MODER |= (Copy_u8Mode <<(Copy_PinNo*2));
			break;
		}
	}

}

void MGPIO_vSetPinOutputType(u8 Copy_u8PortId, u8 Copy_u8PinNo, u8 Copy_u8OutPutType){

	if (Copy_u8OutPutType == GPIO_OPENDRAIN){
		switch(Copy_u8PortId){
		case GPIO_PORTA:
			SET_BIT(GPIOA -> OTYPER, Copy_u8PinNo);
			break;
		case GPIO_PORTB:
			SET_BIT(GPIOB -> OTYPER, Copy_u8PinNo);
			break;
		case GPIO_PORTC:
			SET_BIT(GPIOC -> OTYPER, Copy_u8PinNo);
			break;
		}
	}
	else if (Copy_u8OutPutType == GPIO_PUSHPULL){
		switch(Copy_u8PortId){
		case GPIO_PORTA:
			CLR_BIT(GPIOA -> OTYPER, Copy_u8PinNo);
			break;
		case GPIO_PORTB:
			CLR_BIT(GPIOB -> OTYPER, Copy_u8PinNo);
			break;
		case GPIO_PORTC:
			CLR_BIT(GPIOC -> OTYPER, Copy_u8PinNo);
			break;
		}
	}

}
void MGPIO_vSetPinOutputSpeed(u8 Copy_u8PortId, u8 Copy_u8PinNo, u8 Copy_u8OutputSpeed){
	if(Copy_u8OutputSpeed == GPIO_LOW_SPEED){
		switch(Copy_u8PortId){
		case GPIO_PORTA:
			GPIOA -> OSPEEDR &= ~(0b11 << (Copy_u8PinNo*2));
			GPIOA -> OSPEEDR |= (Copy_u8OutputSpeed <<(Copy_u8PinNo*2));
			break;
		case GPIO_PORTB:
			GPIOB -> OSPEEDR &= ~(0b11 << (Copy_u8PinNo*2));
			GPIOB -> OSPEEDR |= (Copy_u8OutputSpeed <<(Copy_u8PinNo*2));
			break;
		case GPIO_PORTC:
			GPIOC -> OSPEEDR &= ~(0b11 << (Copy_u8PinNo*2));
			GPIOC -> OSPEEDR |= (Copy_u8OutputSpeed <<(Copy_u8PinNo*2));
			break;
		}
	}
	else if(Copy_u8OutputSpeed == GPIO_MEDIUM_SPEED){
		switch(Copy_u8PortId){
		case GPIO_PORTA:
			GPIOA -> OSPEEDR &= ~(0b11 << (Copy_u8PinNo*2));
			GPIOA -> OSPEEDR |= (Copy_u8OutputSpeed <<(Copy_u8PinNo*2));
			break;
		case GPIO_PORTB:
			GPIOB -> OSPEEDR &= ~(0b11 << (Copy_u8PinNo*2));
			GPIOB -> OSPEEDR |= (Copy_u8OutputSpeed <<(Copy_u8PinNo*2));
			break;
		case GPIO_PORTC:
			GPIOC -> OSPEEDR &= ~(0b11 << (Copy_u8PinNo*2));
			GPIOC -> OSPEEDR |= (Copy_u8OutputSpeed <<(Copy_u8PinNo*2));
			break;
		}
	}
	else if(Copy_u8OutputSpeed == GPIO_HIGH_SPEED){
		switch(Copy_u8PortId){
		case GPIO_PORTA:
			GPIOA -> OSPEEDR &= ~(0b11 << (Copy_u8PinNo*2));
			GPIOA -> OSPEEDR |= (Copy_u8OutputSpeed <<(Copy_u8PinNo*2));
			break;
		case GPIO_PORTB:
			GPIOB -> OSPEEDR &= ~(0b11 << (Copy_u8PinNo*2));
			GPIOB -> OSPEEDR |= (Copy_u8OutputSpeed <<(Copy_u8PinNo*2));
			break;
		case GPIO_PORTC:
			GPIOC -> OSPEEDR &= ~(0b11 << (Copy_u8PinNo*2));
			GPIOC -> OSPEEDR |= (Copy_u8OutputSpeed <<(Copy_u8PinNo*2));
			break;
		}
	}
	else if(Copy_u8OutputSpeed == GPIO_VERY_HIGH_SPEED){
		switch(Copy_u8PortId){
		case GPIO_PORTA:
			GPIOA -> OSPEEDR &= ~(0b11 << (Copy_u8PinNo*2));
			GPIOA -> OSPEEDR |= (Copy_u8OutputSpeed <<(Copy_u8PinNo*2));
			break;
		case GPIO_PORTB:
			GPIOB -> OSPEEDR &= ~(0b11 << (Copy_u8PinNo*2));
			GPIOB -> OSPEEDR |= (Copy_u8OutputSpeed <<(Copy_u8PinNo*2));
			break;
		case GPIO_PORTC:
			GPIOC -> OSPEEDR &= ~(0b11 << (Copy_u8PinNo*2));
			GPIOC -> OSPEEDR |= (Copy_u8OutputSpeed <<(Copy_u8PinNo*2));
			break;
		}
	}
}
void MGPIO_vSetPinInputPull(u8 Copy_u8PortId, u8 Copy_u8PinNo, u8 Copy_u8PullType){
	if(Copy_u8PullType == GPIO_NO_PULL){
		switch(Copy_u8PortId){
		case GPIO_PORTA:
			GPIOA -> PUPDR &= ~(0b11 << (Copy_u8PinNo*2));
			GPIOA -> PUPDR |= (Copy_u8PullType <<(Copy_u8PinNo*2));
			break;
		case GPIO_PORTB:
			GPIOB -> PUPDR &= ~(0b11 << (Copy_u8PinNo*2));
			GPIOB -> PUPDR |= (Copy_u8PullType <<(Copy_u8PinNo*2));
			break;
		case GPIO_PORTC:
			GPIOC -> PUPDR &= ~(0b11 << (Copy_u8PinNo*2));
			GPIOC -> PUPDR |= (Copy_u8PullType <<(Copy_u8PinNo*2));
			break;
		}
	}
	else if(Copy_u8PullType == GPIO_PULL_UP){
		switch(Copy_u8PortId){
		case GPIO_PORTA:
			GPIOA -> PUPDR &= ~(0b11 << (Copy_u8PinNo*2));
			GPIOA -> PUPDR |= (Copy_u8PullType <<(Copy_u8PinNo*2));
			break;
		case GPIO_PORTB:
			GPIOB -> PUPDR &= ~(0b11 << (Copy_u8PinNo*2));
			GPIOB -> PUPDR |= (Copy_u8PullType <<(Copy_u8PinNo*2));
			break;
		case GPIO_PORTC:
			GPIOC -> PUPDR &= ~(0b11 << (Copy_u8PinNo*2));
			GPIOC -> PUPDR |= (Copy_u8PullType <<(Copy_u8PinNo*2));
			break;
		}
	}
	else if(Copy_u8PullType == GPIO_PULL_DOWN){
		switch(Copy_u8PortId){
		case GPIO_PORTA:
			GPIOA -> PUPDR &= ~(0b11 << (Copy_u8PinNo*2));
			GPIOA -> PUPDR |= (Copy_u8PullType <<(Copy_u8PinNo*2));
			break;
		case GPIO_PORTB:
			GPIOB -> PUPDR &= ~(0b11 << (Copy_u8PinNo*2));
			GPIOB -> PUPDR |= (Copy_u8PullType <<(Copy_u8PinNo*2));
			break;
		case GPIO_PORTC:
			GPIOC -> PUPDR &= ~(0b11 << (Copy_u8PinNo*2));
			GPIOC -> PUPDR |= (Copy_u8PullType <<(Copy_u8PinNo*2));
			break;
		}
	}

}

u8 MGPIO_u8GetPinValue(u8 Copy_u8PortId, u8 Copy_u8PinNo){

	u8 L_u8PinValue = 0;
	switch(Copy_u8PortId){
	case GPIO_PORTA:
		L_u8PinValue = GET_BIT(GPIOA -> IDR, Copy_u8PinNo);
		break;
	case GPIO_PORTB:
		L_u8PinValue = GET_BIT(GPIOB -> IDR, Copy_u8PinNo);
		break;
	case GPIO_PORTC:
		L_u8PinValue = GET_BIT(GPIOC -> IDR, Copy_u8PinNo);
		break;
	}
	return L_u8PinValue;
}

void MGPIO_vSetPinVal(u8 Copy_u8PortId, u8 Copy_u8PinNo, u8 Copy_u8PinVal){

	if (Copy_u8PinVal == GPIO_HIGH){
			switch(Copy_u8PortId){
			case GPIO_PORTA:
				SET_BIT(GPIOA -> ODR, Copy_u8PinNo);
				break;
			case GPIO_PORTB:
				SET_BIT(GPIOB -> ODR, Copy_u8PinNo);
				break;
			case GPIO_PORTC:
				SET_BIT(GPIOC -> ODR, Copy_u8PinNo);
				break;
			}
		}
	if (Copy_u8PinVal == GPIO_LOW){
				switch(Copy_u8PortId){
				case GPIO_PORTA:
					CLR_BIT(GPIOA -> ODR, Copy_u8PinNo);
					break;
				case GPIO_PORTB:
					CLR_BIT(GPIOB -> ODR, Copy_u8PinNo);
					break;
				case GPIO_PORTC:
					CLR_BIT(GPIOC -> ODR, Copy_u8PinNo);
					break;
				}
			}

}
void MGPIO_vSetPinVal_fast(u8 Copy_u8PortId, u8 Copy_u8PinNo, u8 Copy_u8PinVal){

	if (Copy_u8PinVal == GPIO_HIGH){
				switch(Copy_u8PortId){
				case GPIO_PORTA:
					GPIOA -> BSRR = 1<<Copy_u8PinNo;
					break;
				case GPIO_PORTB:
					GPIOB -> BSRR = 1<<Copy_u8PinNo;
					break;
				case GPIO_PORTC:
					GPIOC -> BSRR = 1<<Copy_u8PinNo;
					break;
				}
			}
		if (Copy_u8PinVal == GPIO_LOW){
			Copy_u8PinNo+=16;
			switch(Copy_u8PortId){
				case GPIO_PORTA:
						GPIOA -> BSRR = 1<<Copy_u8PinNo;
						break;
					case GPIO_PORTB:
						GPIOB -> BSRR = 1<<Copy_u8PinNo;
						break;
					case GPIO_PORTC:
						GPIOC -> BSRR = 1<<Copy_u8PinNo;
						break;
					}
				}

}

void MGPIO_vSetAlternativeFunction(u8 Copy_u8PortId, u8 Copy_u8PinNo, u8 Copy_u8AltFun){
	if(Copy_u8PinNo<8){
		switch(Copy_u8PortId){
			case GPIO_PORTA:
				GPIOA -> AFRH &= ~(0b1111 << (Copy_u8PinNo*4));
				GPIOA->AFRH |= (Copy_u8AltFun<<Copy_u8PinNo*4);
			break;

			case GPIO_PORTB:
				GPIOB -> AFRH &= ~(0b1111 << (Copy_u8PinNo*4));
				GPIOB->AFRH |= (Copy_u8AltFun<<Copy_u8PinNo*4);
			break;

			case GPIO_PORTC:
				GPIOC -> AFRH &= ~(0b1111 << (Copy_u8PinNo*4));
				GPIOC->AFRH |= (Copy_u8AltFun<<Copy_u8PinNo*4);
			break;
		}
	}


	else{
		Copy_u8PinNo-=8;
		switch(Copy_u8PortId){
			case GPIO_PORTA:
				GPIOA -> AFRH &= ~(0b1111 << (Copy_u8PinNo*4));
				GPIOA->AFRH |= (Copy_u8AltFun<<Copy_u8PinNo*4);
			break;

			case GPIO_PORTB:
				GPIOB -> AFRH &= ~(0b1111 << (Copy_u8PinNo*4));
				GPIOB->AFRH |= (Copy_u8AltFun<<Copy_u8PinNo*4);
			break;

			case GPIO_PORTC:
				GPIOC -> AFRH &= ~(0b1111 << (Copy_u8PinNo*4));
				GPIOC->AFRH |= (Copy_u8AltFun<<Copy_u8PinNo*4);
			break;
		}


	}
}
