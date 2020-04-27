#include <schedulercooperative/include/scheduler_cp.h>

bit SCH_Delete_Task(const uInt8_t TASK_INDEX) {
    
    static bit Return_code;
    if (SCH_tasks_G[TASK_INDEX].pTask == 0) {
        // No task at this location...
        //
        // Set the global error variable
        Error_code_G = ERROR_SCH_CANNOT_DELETE_TASK;

        // ...also return an error code
        Return_code = RETURN_ERROR;
    } else {
        Return_code = RETURN_NORMAL;
    }

    SCH_tasks_G[TASK_INDEX].pTask = 0x0000;
    SCH_tasks_G[TASK_INDEX].Delay = 0;
    SCH_tasks_G[TASK_INDEX].Period = 0;

    SCH_tasks_G[TASK_INDEX].RunMe = 0;

    return Return_code; // return status
}