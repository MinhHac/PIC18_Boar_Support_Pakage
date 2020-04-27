#include <schedulercooperative/include/scheduler_cp.h>

void SCH_timer0_reload(uInt16_t count)
{
    /* TODO */	
    uInt16_t val = 65535- count;
    TMR0H = (uInt8_t)(val>>8);
    TMR0L = (uInt8_t)val;
}