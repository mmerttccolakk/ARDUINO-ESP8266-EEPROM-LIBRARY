#include "Arduino.h"
#include "EEPROM.h"

void setup_eeprom(unsigned int eeprom_begin_int);
void eprom_write(unsigned int StartToWriteAddress,  const String &toWrite);
String eprom_read(unsigned int StartToReadAddress);
void eprom_reset();