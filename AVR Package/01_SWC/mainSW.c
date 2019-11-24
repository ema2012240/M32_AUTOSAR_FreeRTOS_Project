#include "OS.h"
#include "App.h"

OS_TASK(TASK1);
void main(void)
{
	/* Call FreeRTOS APIs to create tasks, all tasks has the same priority "1" with thesame stack size*/
	xTaskCreate( OS_TASK_PTR(TASK1), OS_TASK_NAME(TASK1), configMINIMAL_STACK_SIZE, NULL, 1, NULL );
	// Start the RTOS kernel
	vTaskStartScheduler();
	/* Do nothing here and just run infinte loop */
	while(1);
}

portTickType Os_Counter=0;

OS_TASK(TASK1)
{
	portTickType xLastWakeTime;
	APP_TASK_CALL(Init_Task);
	xLastWakeTime = xTaskGetTickCount();
	while (1)
	{
		vTaskDelayUntil( &xLastWakeTime, 5 );
		Os_Counter++;
		if ( Os_Counter == 1 )
		{
			APP_TASK_CALL(5ms_task);
		}
		else if ( Os_Counter == 2 )
		{
			APP_TASK_CALL(5ms_task);
			APP_TASK_CALL(10ms_task);
			Os_Counter = 0;
		}
	}
}