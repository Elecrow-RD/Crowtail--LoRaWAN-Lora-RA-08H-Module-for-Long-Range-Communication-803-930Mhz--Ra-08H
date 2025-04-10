#include <SoftwareSerial.h> 
// Pin2——>LORA-TXD
// Pin3——>LORA-RXD
SoftwareSerial LORA(2, 3); 
char val;
 
void setup() {
  Serial.begin(9600); 
  Serial.println("LORA is ready!");
  LORA.begin(9600);
}
 
void loop() {
  if (Serial.available()) {
    val = Serial.read();
    LORA.print(val);
    delay(10);
  }
 
  if (LORA.available()) {
    val = LORA.read();
    Serial.print(val);
    delay(10);
  }
}
