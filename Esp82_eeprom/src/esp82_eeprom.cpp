#include "esp82_eeprom.h"

void setup_eeprom(unsigned int eeprom_begin_int){
  EEPROM.begin(eeprom_begin_int);//eeprom
}
void eprom_write(unsigned int StartToWriteAddress,  const String &toWrite){
    unsigned int StringLength=toWrite.length();
    //begin address write how length
    EEPROM.write(StartToWriteAddress, StringLength);
    //WriteString
    for (int i = 0; i < StringLength; i++){
    EEPROM.write(StartToWriteAddress + 1 + i, toWrite[i]);
    }
    EEPROM.commit();
}

String eprom_read(unsigned int StartToReadAddress){
  //how lenght data reading from first address
  unsigned int StartToReadLength = EEPROM.read(StartToReadAddress);  
  char readingfromeprom[StartToReadLength + 1]; //new variable for reading data
  

  //reading from eprom
  for (int i = 0; i < StartToReadLength; i++){
    readingfromeprom[i] = EEPROM.read(StartToReadAddress + 1 + i);
    
  }

  //finishing variable
  readingfromeprom[StartToReadLength] = '\0';

  //return result
  return String(readingfromeprom);
}

void eprom_reset(){
   for (int i = 0; i < 512; i++) {
    }
    EEPROM.commit(); 
}