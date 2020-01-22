/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#line 1 "e:/aacrs/02_12/markvisser/git_clone/ALARM_ProtectV1_test_program/Alarm_protect_v1_test_pcb/src/Alarm_protect_v1_test_pcb.ino"

#include "Particle.h"

// Xenon e00fce6855bfd82f4eeb5737 Name: crs can 1
// Xenon e00fce682498b61a39d59ce7 Name: crs can 2
// Xenon e00fce68c44338328874c780 Name: crs can 3
// Xenon e00fce6813a4279e4cd79ca8 Name: crs can 4

// burned xenon : e00fce68914fed94fc726d72  can 1 
// burned xenon : e00fce68a755ca49156869fd can 2
// Xenon e00fce689e3f887405d2cc19 Name: 74zen can 3
// Xenon e00fce68a74b2b49af258ea2 Name 74 Zen can 4 ?

// Xenon e00fce6803061a4e7f19572a Name: Metal tech can 1
inline void softDelay(uint32_t msDelay);
void setup();
void loop();
#line 15 "e:/aacrs/02_12/markvisser/git_clone/ALARM_ProtectV1_test_program/Alarm_protect_v1_test_pcb/src/Alarm_protect_v1_test_pcb.ino"
const int RELAY1 = D4;//detonation relay
const int RELAY2 = D5;//Spare 
const int PCH1= A1;//detonation relay
const int NCH1 = A0;//NPN outout drive
const int LOAD = D3;//PNO output drive
const int CLEAR = D2;//Clear Becons
const int led_green = D8;
const int led_red = D6;
const int led_blue= D7;



/********************************************************************************************
*********************************************************************************************
*********************************************************************************************/
int led2 = D7;
bool DetonateSatus = 0; // holds the status for detonation.
SYSTEM_THREAD(ENABLED);
const char *EVENT_NAME = "Beacon MAC"; // here we need to change it to name of node if possible

inline void softDelay(uint32_t msDelay){
      for (uint32_t ms = millis(); 
            millis() - ms < msDelay;  
            Particle.process());
}


void setup() {
  SYSTEM_MODE(AUTOMATIC);
  Particle.keepAlive(20);
  Serial.begin(115200);
  pinMode(RELAY1, OUTPUT);//output for triggered led
  pinMode(RELAY2, OUTPUT);//output for triggered led
  pinMode(led_red, OUTPUT);//output for triggered led
  pinMode(led_green, OUTPUT);//output for triggered led
  pinMode(led_blue, OUTPUT);//output for triggered led
  pinMode(PCH1, OUTPUT);//output for triggered led
  pinMode(NCH1, OUTPUT);//output for triggered led
  pinMode(LOAD, INPUT);//output for triggered led
  pinMode(CLEAR, INPUT);//output for triggered led
  pinMode(BATT, INPUT); // argon battery 
  BLE.setTxPower(4); // Use lower power // Use lower power -20, -16, -12, -8, -4, 0, 4, 8.
  //Remote Reset Particle Function, to reset device from the cloud
  pinMode(BATT, INPUT);
  digitalWrite (led_blue, HIGH);
  digitalWrite (led_green, HIGH);
  digitalWrite (led_green, HIGH);
  digitalWrite (RELAY1, HIGH);
  digitalWrite (RELAY2, HIGH);
}
        
void loop() {
/*
  digitalWrite (RELAY1, LOW);
  delay(500);
  digitalWrite (RELAY1, HIGH);
  delay(500);
  digitalWrite (RELAY2, LOW);
  delay(500);
  digitalWrite (RELAY2, HIGH);
  delay(500);
 */
/*
  digitalWrite (led_red, LOW);
  delay(500);
  digitalWrite (led_red, HIGH);
  delay(500);
   digitalWrite (led_green, LOW);
  delay(500);
  digitalWrite (led_green, HIGH);
  delay(500);
  digitalWrite (led_blue, LOW);
  delay(500);
  digitalWrite (led_blue, HIGH);
  delay(1000);

*/
 // digitalWrite (led_green, LOW);
  //delay(1000);
  //digitalWrite (led_green, HIGH);
  //delay(1000);
  //digitalWrite (led_red, LOW);
 // delay(1000);
 // digitalWrite (led_green, HIGH);
 // delay(1000);

 digitalWrite (PCH1, LOW);
  delay(500);
  digitalWrite (PCH1, HIGH);
  delay(500);
  digitalWrite (NCH1, LOW);
  delay(500);
  digitalWrite (NCH1, HIGH);
  delay(500);
  
} // end of main

