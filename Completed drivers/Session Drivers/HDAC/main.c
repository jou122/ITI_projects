
#include "../include/LIB/STD_TYPES.h"
#include "../include/LIB/BIT_MATH.h"
#include "../include/LIB/LIB.h"
#include "../include/MCAL/RCC/RCC_interface.h"
#include "../include/MCAL/GPIO/GPIO_interface.h"
#include "../include/MCAL/SYSTICK/SYSTICK_interface.h"



#include "../include/song.h"


void play (void)
{
	static u32 counter=0;

	GPIOA->ODR=SIA_raw[counter];
	counter++;
	if (counter==28016)
	{
		counter=0;
	}
}


int main()
{
	MRCC_voidInit();
	MSYSTICk_voidConfig();
	MRCC_voidPeripheralEnable(AHB1, GPIOAEN);
	MGPIO_voidSetPinDirection(GPIOA_PORT, 0, OUTPUT_PUSH_PULL, MEDIUM_SPEED);
	MGPIO_voidSetPinDirection(GPIOA_PORT, 1, OUTPUT_PUSH_PULL, MEDIUM_SPEED);
	MGPIO_voidSetPinDirection(GPIOA_PORT, 2, OUTPUT_PUSH_PULL, MEDIUM_SPEED);
	MGPIO_voidSetPinDirection(GPIOA_PORT, 3, OUTPUT_PUSH_PULL, MEDIUM_SPEED);
	MGPIO_voidSetPinDirection(GPIOA_PORT, 4, OUTPUT_PUSH_PULL, MEDIUM_SPEED);
	MGPIO_voidSetPinDirection(GPIOA_PORT, 5, OUTPUT_PUSH_PULL, MEDIUM_SPEED);
	MGPIO_voidSetPinDirection(GPIOA_PORT, 6, OUTPUT_PUSH_PULL, MEDIUM_SPEED);
	MGPIO_voidSetPinDirection(GPIOA_PORT, 7, OUTPUT_PUSH_PULL, MEDIUM_SPEED);
	MSYSTICK_voidSetIntervalPeriodic(125, MICRO_SEC, play);
// Infinite loop
  while (1)
  {
    // Add your code here.
  }
}
