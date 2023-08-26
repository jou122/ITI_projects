#include "LIB/LSTD_TYPES.h"
#include "LIB/LBIT_MATH.h"
#include "MCAL/MRCC/MRCC_Inteface.h"
#include "MCAL/MGPIO/MGPIO_Interface.h"
#include "MCAL/MUART/MUSART_Interface.h"

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


    MGPIO_voidSetPinMode(MGPIOA_PORT, MGPIO_PIN0, MGPIO_MODE_OUTPUT);


    MUSART_voidInit();


    u8 receivedData = 0 ;

    while (1)
    {
        /* Receive data from the second microcontroller */
         receivedData = MUSART_u8ReadData();

        /* Check the received value */
        if (receivedData == 1)
        {
            /* Light off the LED */
            MGPIO_voidSetPinValue(MGPIOA_PORT, MGPIO_PIN0, MGPIO_LOW);
        }
        else
        {
            /* Turn up the LED */
            MGPIO_voidSetPinValue(MGPIOA_PORT, MGPIO_PIN0, MGPIO_HIGH);
        }
    }
    return 0;
}
