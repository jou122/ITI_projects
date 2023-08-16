/*********************************************/
/* AUTHOR:          MOHAMED HAGGAG           */
/* DATE:            16 /8/2023               */
/* VERSION: version 1                        */
/* DESCRIPTION : OS_SCHEDULER                */
/*********************************************/

TASK systemtasks[MAX_NUM_OF_TASKS] ={0};
u8 TASKtiming[MAX_NUM_OF_TASKS];

TASK empty ={0};

void RTOS_voidStartOS
{
	
}

u8 RTOS_u8CreateTask(void(*Copy_Handler)(void),u8 Copy_Periodicty,u8 Copy_priority,u8 Copy_FirstD)
{
	u8 Local_ErrorState =0;
if(Copy_priority <MAX_NUM_OF_TASKS)
	{
		if (systemtasks[Copy_priority].TaskHandler ==0)
		{
		systemtasks[Copy_priority].TaskHandler =Copy_Handler;
		systemtasks[Copy_priority].Periodicity =Copy_Periodicty;
		TASKtiming[Copy_priority]              =Copy_FirstD;
		systemtasks[Copy_priority].TaskRunState =Ready;
		}
		else
		{	
		Local_ErrorState =2;	
		}

	}
	else
	{
		Local_ErrorState =1;
	}
	return Local_ErrorState;
	
}
 
void scheduler (void)
{
	u8 Local_counter =0;
	for(Local_counter=0;Local_counter<MAX_NUM_OF_TASKS;Local_counter++)
	{
		if(systemtasks[Local_counter].TaskHandler !=0)
		{
			if (systemtasks[Local_counter].TaskRunState == Running)
			{
				
			
				if(TASKtiming[Local_counter]==0){
				systemtasks[Local_counter].TaskHandler();
				TASKtiming[Local_counter]=systemtasks[Local_counter].Periodicity;
				}
				else
				{
				TASKtiming[Local_counter]--;
				}
			
			
			
			}
		
		}
	}
	
	
	
	
	
}


void RTOS_voidDeletetask(u8 Copy_priority)
{
if(systemtasks[Copy_priority].TaskHandler !=0)
{
	systemtasks[Copy_priority]=empty;
}
	
}

void RTOS_voidSuspendtask(u8 Copy_priority)
{
if(systemtasks[Copy_priority].TaskHandler !=0)
{
	systemtasks[Copy_priority].TaskRunState =suspended;
}
	
	
}
void RTOS_voidResume(u8 Copy_priority)
{
if(systemtasks[Copy_priority].TaskHandler !=0)
{
	systemtasks[Copy_priority].TaskRunState =Ready;
}
	
	
	
}

