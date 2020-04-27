/**
* @file common/include/delay.h
* @brief header file for pic18 ASM software delay library 
* @author hugo descoubes - copyleft
*/

/** @ingroup DELAY */
/* @{ */
/** @defgroup SOFTWARE_DELAY_32MHz_CPU */
/** @ingroup SOFTWARE_DELAY_32MHz_CPU */
/* @{ */
#ifndef _DELAY_H
#define _DELAY_H

//#include <pic18.h>
void Delay10KTCYx(unsigned char unit);
void Delay1KTCYx(unsigned char unit);
void Delay10TCYx(unsigned char unit);
 /**
  * @brief 10us software delay
  * @warning 10us duration only for 32MHz cpu clock  
  */
#define	Delay_10us()		Delay10TCYx(8)	

#define	Delay_100us()		Delay10TCYx(80)	
		
 /**
  * @brief 1ms software delay
  * @warning 1ms duration only for 32MHz cpu clock    
  */
#define	Delay_1ms()		Delay1KTCYx(8) 

#define	Delay_2ms()		Delay1KTCYx(16) 

#define Delay_5ms()     Delay1KTCYx(40)

#define	Delay_10ms()	Delay10KTCYx(8)

#define	Delay_20ms()	Delay10KTCYx(16)
 /**
  * @brief 40ms software delay
  * @warning 40ms duration only for 32MHz cpu clock   
  */
#define	Delay_40ms()	Delay10KTCYx(32)

#define	Delay_60ms()	Delay10KTCYx(48)

#define	Delay_200ms()	Delay10KTCYx(32*5)
 /**
  * @brief 200ms software delay
  * @warning 200ms duration only for 32MHz cpu clock    
  */

#endif /* _DELAY_H */


















