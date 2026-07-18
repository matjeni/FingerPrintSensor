#include <Rtc_Pcf8563.h> 
	 
	 
//init the real time clock 
Rtc_Pcf8563 rtc; 

const char loopTime() {
  rtc.formatTime(); 
}  
