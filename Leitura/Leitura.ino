#include <Thermistor.h>
Thermistor temp(5);
int pinLDR = 4;
int LDRValue = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("LDR ");
  Serial.println ("Temp. (°C)");
}

void loop() {
  // put your main code here, to run repeatedly:
  float temperatura = temp.getTemp(); 
  LDRValue = analogRead(pinLDR);
  Serial.print (LDRValue);
  Serial.print (",");
  Serial.println (temperatura);
  delay (1500);
}
