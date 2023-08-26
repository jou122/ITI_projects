#include"LIB/LSTD_TYPES.h"
#include"LIB/LBIT_MATH.h"
#include"MCAL/MRCC/MRCC_Inteface.h"
#include"MCAL/MGPIO/MGPIO_Interface.h"
#include"MCAL/MNVIC/MNVIC_Interface.h"
#include"MCAL/MEXTI/MEXTI_Interface.h"
#include"MCAL/MSTK/MSTK_interface.h"
#include"MCAL/MUART/MUSART_Interface.h"


int main(void)
{
    /* Initialize UART and GPIO */
	MRCC_voidInitSystemClk();
	MRCC_voidEnablePeripheralClock(AHB1, MRCC_GPIOA);
	/*Enable RCC For USART1*/
	MRCC_voidEnablePeripheralClock(APB2, MRCC_USART1); //Enable CLK Of UART1   At APB2



	MGPIO_voidSetPinMode(MGPIOA_PORT, MGPIO_PIN9, MGPIO_MODE_ALTF);     //TX-->UART1
	MGPIO_voidSetPinMode(MGPIOA_PORT, MGPIO_PIN10, MGPIO_MODE_ALTF);    //RX-->UART1
	MGPIO_voidSetPinAltFun(MGPIOA_PORT, MGPIO_PIN9, MGPIO_ALTFN_7);      //TX-->UART1
	MGPIO_voidSetPinAltFun(MGPIOA_PORT, MGPIO_PIN10, MGPIO_ALTFN_7);     //RX-->UART1


    /* Configure button pin as input*/
	MGPIO_voidSetPinMode(MGPIOA_PORT, MGPIO_PIN0, MGPIO_MODE_INPUT);
	MGPIO_voidSetPullState(MGPIOA_PORT, MGPIO_PIN0,MGPIO_PULL_UP);



	MUSART_voidInit();
	MSTK_voidInit();


	u8 volatile buttonValue = 0 ;
	u8 volatile dataToSend = buttonValue;

    while (1)
    {
        /* Read the value of the button */
        buttonValue = MGPIO_u8GetPInValue(MGPIOA_PORT, MGPIO_PIN0);

        /* If button value is 1, send the value using UART */
        if (buttonValue == 1)
        {
        	dataToSend = buttonValue;

            MUSART_voidSendData(&dataToSend, 1); // Send data to the second microcontroller
        }
        else if (buttonValue == 0)
        {
        	dataToSend = buttonValue;
        	MUSART_voidSendData(&dataToSend, 1); // Send data to the second microcontroller
        }

        /* Delay for 1 second */
        /* Add your delay function here (e.g., using a timer or a software delay) */
        MSTK_voidDelayMs(10000);
    }

    return 0;
}
