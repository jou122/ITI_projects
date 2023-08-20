#include"BIT_Math.h"
#include"STD_Types.h"

#include "MGPIO_Int.h"
#include "MRCC_Int.h"
#include "MSTK_Int.h"
#include"song.h"

#define time 125




void WriteToDAC()

{
	for( u32 counter=0;counter<Song_Length;counter++){
	MGPIO_vSetPortVal(MGPIO_PORTA,Song_Array[counter]);
	}
}





int main(void)
{

	void (*fun_ptr)(void)=&WriteToDAC;

	MRCC_vEnableClock(RCC_AHB1,GPIOAEN);
	MRCC_vEnableClock(RCC_APB2,SYSCFGEN);


	MSTK_vInit();

	for(u8 i=0;i<8;i++){
	MGPIO_vSetPinMode(MGPIO_PORTA,i,MGPIO_MODE_OUTPUT);
	}


	MSTK_voidSetCallBack(fun_ptr);

	MSTK_vCount(time);

  while (1)
    {

    }
  return 0;
}



