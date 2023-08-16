#include "STD_Types.h"
#include "BIT_MATH.h"
#include "MRCC_int.h"
#include "MGPIO_int.h"
#include "MSYSTICK_int.h"
#include "MNVIC_int.h"
#include "MEXTI_int.h"


void Func1_void(void);
void Func2_void(void);



void main(void)
{
	MRCC_init();
	MSYSYTICK_voidInit();
	MRCC_Enable_peripheral(RCC_AHB1,AHB1_GPIOA);
	MRCC_Enable_peripheral(RCC_AHB1,AHB1_GPIOB);
	MRCC_Enable_peripheral(RCC_APB2,APB2_SYSCFG);


	MNVIC_VoidSetInterruptGroupMode(Group16Sub0);

	MNVIC_VoidSetInterruptPriority(6,1,0);
	MNVIC_VoidSetInterruptPriority(7,0,0);

	MNVIC_VoidEnableInterrupt(6);
	MNVIC_VoidEnableInterrupt(7);


	MGPIO_SetMode(PORTB,PIN0,INPUT);
	MGPIO_SetMode(PORTB,PIN1,INPUT);

	MGPIO_SetInputPin(PORTB,PIN0,INPUT_PullUP);
	MGPIO_SetInputPin(PORTB,PIN1,INPUT_PullUP);


	MGPIO_SetMode(PORTA,PIN0,OUTPUT);
	MGPIO_SetMode(PORTA,PIN1,OUTPUT);
	MGPIO_SetMode(PORTA,PIN2,OUTPUT);
	MGPIO_SetMode(PORTA,PIN3,OUTPUT);
	MGPIO_SetMode(PORTA,PIN4,OUTPUT);
	MGPIO_SetMode(PORTA,PIN5,OUTPUT);
	MGPIO_SetMode(PORTA,PIN6,OUTPUT);
	MGPIO_SetMode(PORTA,PIN7,OUTPUT);




	MGPIO_SetOutputPinMode(PORTA,PIN0,OUTPUT_PUSH_PULL,OUTPUT_LOW);
	MGPIO_SetOutputPinMode(PORTA,PIN1,OUTPUT_PUSH_PULL,OUTPUT_LOW);
	MGPIO_SetOutputPinMode(PORTA,PIN2,OUTPUT_PUSH_PULL,OUTPUT_LOW);
	MGPIO_SetOutputPinMode(PORTA,PIN3,OUTPUT_PUSH_PULL,OUTPUT_LOW);
	MGPIO_SetOutputPinMode(PORTA,PIN4,OUTPUT_PUSH_PULL,OUTPUT_LOW);
	MGPIO_SetOutputPinMode(PORTA,PIN5,OUTPUT_PUSH_PULL,OUTPUT_LOW);
	MGPIO_SetOutputPinMode(PORTA,PIN6,OUTPUT_PUSH_PULL,OUTPUT_LOW);
	MGPIO_SetOutputPinMode(PORTA,PIN7,OUTPUT_PUSH_PULL,OUTPUT_LOW);


	MGPIO_SetPinValue(PORTA,PIN0,STD_LOW);
	MGPIO_SetPinValue(PORTA,PIN1,STD_LOW);
	MGPIO_SetPinValue(PORTA,PIN2,STD_LOW);
	MGPIO_SetPinValue(PORTA,PIN3,STD_LOW);
	MGPIO_SetPinValue(PORTA,PIN4,STD_LOW);
	MGPIO_SetPinValue(PORTA,PIN5,STD_LOW);
	MGPIO_SetPinValue(PORTA,PIN6,STD_LOW);
	MGPIO_SetPinValue(PORTA,PIN7,STD_LOW);


	MEXTI_voidInterruptTrigger(EXTI_LineZero,EXTI_Falling);
	MEXTI_voidInterruptTrigger(EXTI_LineOne,EXTI_Falling);

	MEXTI_voidInterruptEnableDisable(EXTI_LineZero,EXTI_Enable);
	MEXTI_voidInterruptEnableDisable(EXTI_LineOne,EXTI_Enable);

	MEXTI_voidInerruptSetPort(EXTI_LineZero,PORTB);
	MEXTI_voidInerruptSetPort(EXTI_LineOne,PORTB);





	MEXTI0_voidCallBack(Func1_void);
	MEXTI1_voidCallBack(Func2_void);




	while (1)
	{


	}
}

void Func1_void(void){

		MGPIO_SetPinValue(PORTA,PIN0,STD_HIGH);
		MSYSYTICK_voidDelayms(5000);

		MGPIO_SetPinValue(PORTA,PIN1,STD_HIGH);
		MSYSYTICK_voidDelayms(5000);

		MGPIO_SetPinValue(PORTA,PIN2,STD_HIGH);
		MSYSYTICK_voidDelayms(5000);

		MGPIO_SetPinValue(PORTA,PIN3,STD_HIGH);
		MSYSYTICK_voidDelayms(5000);

		MGPIO_SetPinValue(PORTA,PIN4,STD_HIGH);
		MSYSYTICK_voidDelayms(5000);

		MGPIO_SetPinValue(PORTA,PIN5,STD_HIGH);
		MSYSYTICK_voidDelayms(5000);

		MGPIO_SetPinValue(PORTA,PIN6,STD_HIGH);
		MSYSYTICK_voidDelayms(5000);

		MGPIO_SetPinValue(PORTA,PIN7,STD_HIGH);
		MSYSYTICK_voidDelayms(5000);
}
void Func2_void(void){

	MGPIO_SetPinValue(PORTA,PIN0,STD_LOW);
	MGPIO_SetPinValue(PORTA,PIN1,STD_LOW);
	MGPIO_SetPinValue(PORTA,PIN2,STD_LOW);
	MGPIO_SetPinValue(PORTA,PIN3,STD_LOW);
	MGPIO_SetPinValue(PORTA,PIN4,STD_LOW);
	MGPIO_SetPinValue(PORTA,PIN5,STD_LOW);
	MGPIO_SetPinValue(PORTA,PIN6,STD_LOW);
	MGPIO_SetPinValue(PORTA,PIN7,STD_LOW);
	MSYSYTICK_voidDelayms(5000);


}


