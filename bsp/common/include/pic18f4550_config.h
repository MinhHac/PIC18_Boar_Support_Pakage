/**
* @file common/include/pic18f4550_config.h
* @brief pic18f4550 configuration bits 
* @author hugo descoubes - copyleft
*/
#ifndef _DEV_CONFIG_H
#define _DEV_CONFIG_H

/* Clock configuration for 32MHz system clock
 * if PICSIMLAB McLab2/Board3 use 8MHz external quartz
 */
#pragma config PLLDIV=2, CPUDIV=OSC2_PLL3, FOSC=HSPLL_HS

/* Default system tools states */
#pragma config BOR=OFF, WDT=OFF, MCLRE=ON

#endif /*_DEV_CONFIG_H*/


















