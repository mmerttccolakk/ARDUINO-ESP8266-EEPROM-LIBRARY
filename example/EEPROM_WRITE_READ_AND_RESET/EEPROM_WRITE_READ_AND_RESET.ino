#include "esp82_eeprom.h"


void setup() {

  Serial.begin(115200);//serial begin
  setup_eeprom(512);//eprom begin


  eprom_write(100,"token_code");//begin adress and write string
  String reading =eprom_read(100);//reading adress auto just reading string



  Serial.println("reading from eprom");
  Serial.println(reading);
  
  void eprom_reset();//eeprom reset
}

void loop() {


}