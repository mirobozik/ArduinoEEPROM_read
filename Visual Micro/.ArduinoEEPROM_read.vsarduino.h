//Board = Arduino Uno
#define __AVR_ATmega328P__
#define ARDUINO 105
#define F_CPU 16000000L
#define __AVR__
extern "C" void __cxa_pure_virtual() {;}

//
//
void readFromEeprom();

#include "D:\applications\arduino-1.0.5\hardware\arduino\variants\standard\pins_arduino.h" 
#include "D:\applications\arduino-1.0.5\hardware\arduino\cores\arduino\arduino.h"
#include "D:\projects-arduino\ArduinoEEPROM_read\ArduinoEEPROM_read.ino"
