/*********************************************/
/* AUTHOR:          MOHAMED HAGGAG           */
/* DATE:            16 /8/2023               */
/* VERSION: version 1                        */
/* DESCRIPTION : OS_SCHEDULER                */
/*********************************************/

#ifndef _RTOS_PRV_H
#define _RTOS_PRV_H

typedef enum 
{
	suspended,
	Ready
}RUNstate;


typedef struct
{
void(*TaskHandler)(void);
u8 Periodicity;
u8 FirstDelay;
RUNstate TaskRunState;

}TASK;




#endif