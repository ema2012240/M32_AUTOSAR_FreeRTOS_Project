/*
File May changed by User
*/
#ifndef OS
#define OS

#include "FreeRTOS.h"
#include "task.h"
#include "croutine.h"

#define OS_TASK(index) void OS_##index(void* pvParameters)
#define OS_TASK_NAME(index) "##index##"
#define OS_TASK_PTR(index) OS_##index




#endif