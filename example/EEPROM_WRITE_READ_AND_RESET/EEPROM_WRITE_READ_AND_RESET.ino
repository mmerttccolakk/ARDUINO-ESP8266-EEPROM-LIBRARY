#include "esp82_eeprom.h" //https://github.com/mmerttccolakk/ARDUINO-ESP8266-EEPROM-LIBRARY


void setup() {

  Serial.begin(115200);//serial begin
  setup_eeprom(512);//eprom begin


  eprom_write(100,"token_code");//begin adress and write string
  String reading =eprom_read(100);//reading adress auto just reading string



  Serial.println("reading from eprom");
  Serial.println(reading);
  
  //eeprom reset
  //void eprom_reset();
}

void loop() {


}