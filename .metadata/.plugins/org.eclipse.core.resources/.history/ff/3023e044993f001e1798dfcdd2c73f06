/*
 * MGPIO_Int.h
 *
 *  Created on: Aug 10, 2023
 *      Author: Mostafa Ashraf
 */

#ifndef MCAL_MGPIO_MGPIO_INT_H_
#define MCAL_MGPIO_MGPIO_INT_H_

/*Modes*/
#define MGPIO_MODE_INPUT  0b00
#define MGPIO_MODE_OUTPUT 0b01
#define MGPIO_MODE_ALTFUN 0b10
#define MGPIO_MODE_ANALOG 0b11


/*PORTS*/
#define MGPIO_PORTA 0
#define MGPIO_PORTB 1
#define MGPIO_PORTC 2


/*OUTPUT TYPE*/
#define MGPIO_PUSHPULL  0
#define MGPIO_OPENDRAIN 1

/*PIN SPEED*/
#define MGPIO_LOW_SPEED 00
#define MGPIO_MEDIUM_SPEED 01
#define MGPIO_HIGH_SPEED 10
#define MGPIO_VERY_HIGH_SPEED 11

/*INPUT PULL*/
#define MGPIO_NO_PULL 00
#define MGPIO_PULL_UP 01
#define MGPIO_PULL_DOWN 10


/*PIN VALUE*/
#define MGPIO_LOW  0
#define MGPIO_HIGH 1



void MGPIO_vSetPinMode(u8 A_u8PortId, u8 A_PinNo, u8 A_u8Mode);
void MGPIO_vSetPinOutputType(u8 A_u8PortId, u8 A_u8PinNo, u8 A_u8OutPutType);
void MGPIO_vSetPinOutputSpeed(u8 A_u8PortId, u8 A_u8PinNo, u8 A_u8OutputSpeed);
void MGPIO_vSetPinInputPull(u8 A_u8PortId, u8 A_u8PinNo, u8 A_u8PullType);

u8 MGPIO_u8GetPinValue(u8 A_u8PortId, u8 A_u8PinNo);

void MGPIO_vSetPinVal(u8 A_u8PortId, u8 A_u8PinNo, u8 A_u8PinVal);
void MGPIO_vSetPortVal(u8 Copy_u8PortId, u16 Copy_u16PortVal);

void MGPIO_vSetAlternativeFunction(u8 A_u8PortId, u8 A_u8PinNo, u8 A_u8AltFun);


#endif /* MCAL_MGPIO_MGPIO_INT_H_ */
