#include <EEPROM.h>

#define EEPROM_ADDRESS_MAX 512

byte value = 0;

void setup()
{
	Serial.begin(19200);
	
	readFromEeprom();
}

void loop()
{
}

void readFromEeprom()
{
	for (int i=0; i <= EEPROM_ADDRESS_MAX; i++)
	{
		value = EEPROM.read(i);
			
		Serial.print(i);
		Serial.print(" = 0x");
		Serial.println(value, HEX);
			
		delay(500);
	}
}