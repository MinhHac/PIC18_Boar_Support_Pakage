#include <schedulercooperative/include/scheduler_cp.h>

void SCH_Timer0_isr_Process(void) {
    if (INTCONbits.TMR0IF) {
        INTCONbits.TMR0IF = 0;
        SCH_timer0_reload(TIMER0_BASE_PERIOD);

        uInt8_t Index;

        for (Index = 0; Index < SCH_MAX_TASKS; Index++) {
            // Check if there is a task at this location
            if (SCH_tasks_G[Index].pTask) {
                if (SCH_tasks_G[Index].Delay == 0) {
                    // The task is due to run
                    SCH_tasks_G[Index].RunMe += 1; // Inc. the 'Run Me' flag

                    if (SCH_tasks_G[Index].Period) {
                        // Schedule periodic tasks to run again
                        SCH_tasks_G[Index].Delay = SCH_tasks_G[Index].Period;
                    }
                } else {
                    // Not yet ready to run: just decrement the delay 
                    SCH_tasks_G[Index].Delay -= 1;
                }
            }
        }
    }
}
/* Cu moi lan interrup T = Xms. Duyet tat ca cac Task trong mang
 *  - Neu Task ma dc tao ra thi pTask khac 0
 *    - Neu chi so Delay = 0, thi bat flag: Runme cho Ham SCH_DisPatcher_task 
 *      - Neu chay nhieu hon 1 lan tuc la period cua no khac 0, thi hen lai lan sau
 *        bang cach cho Delay = Period
 *    - Neu chi so Delay van chua bang khong thi giam no mot lan T = xms roi doi
 *    lan sau check tiep
 *  */