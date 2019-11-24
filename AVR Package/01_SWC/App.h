#ifndef SW_APPLICATION_HEADER
#define SW_APPLICATION_HEADER

#define APP_TASK(index) void App_##index(void)
#define APP_TASK_CALL(index) App_##index()

APP_TASK(Init_Task);
APP_TASK(5ms_task);
APP_TASK(10ms_task);


#endif