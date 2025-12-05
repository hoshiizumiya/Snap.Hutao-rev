#pragma once

#include <Windows.h>

#ifdef __cplusplus
extern "C" {
#endif

__declspec(dllexport) BOOL WINAPI is_auto_start_task_active_for_this_user();
__declspec(dllexport) BOOL WINAPI create_auto_start_task_for_this_user(BOOL runElevated);
__declspec(dllexport) BOOL WINAPI delete_auto_start_task_for_this_user();

#ifdef __cplusplus
}
#endif
