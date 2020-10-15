#ifndef _DIO_
#define _DIO_

#define Turn_whole_register_on(reg) reg=0xff
#define turn_specific_port_of_register(reg,port) reg|=(1<<port)
#define turn_off_port_of_register(reg,port) reg&=~1<<port
#define turn_off_register(reg) reg=0x00
#define turn_on_port(port) port=0xff
#define turn_off_port(port) port=0x00
#define turn_specific_pin(port,pin) port|=1<<pin
#define toggle_pin(port,pin) port^=1<<pin
#define pullupresistance(pin) P1REN|=1<<pin
#define turn_port_in_p2(port) P2OUT|=1<<port
#define turn_port_in_p3(port) P3OUT|=1<<port
#define pinA0 0
#define pinA1 1
#define pinA2 2
#define pinA3 3
#define pinA4 4
#define pinA5 5
#define pinA6 6
#define pinA7 7

#endif 
