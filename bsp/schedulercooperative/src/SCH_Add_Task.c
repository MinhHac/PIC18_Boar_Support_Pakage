#include <schedulercooperative/include/scheduler_cp.h>

uInt8_t SCH_Add_Task(void (* pFunction)(), const uInt16_t DELAY, const uInt16_t PERIOD) {
    uInt8_t Index = 0;

    // First find a gap in the array (if there is one)
    while ((SCH_tasks_G[Index].pTask != 0) && (Index < SCH_MAX_TASKS)) {
        Index++;
    }

    // Have we reached the end of the list?   
    if (Index == SCH_MAX_TASKS) {
        // Task list is full
        //
        // Set the global error variable
        Error_code_G = ERROR_SCH_TOO_MANY_TASKS;

        // Also return an error code
        return SCH_MAX_TASKS;
    }

    // If we're here, there is a space in the task array
    SCH_tasks_G[Index].pTask = pFunction;

    SCH_tasks_G[Index].Delay = DELAY;
    SCH_tasks_G[Index].Period = PERIOD;

    SCH_tasks_G[Index].RunMe = 0;

    return Index; // return position of task (to allow later deletion)
}

/* B1: Tim mot ô tr?ng trong mang Task, N?u full thi bao l?i. Neu no = gia tri 
 * cuoi thi bao loi luôn
 * 
 * B2: Kh?i t?o cac giá tr? ban ?âu cho Task
 * 
 */