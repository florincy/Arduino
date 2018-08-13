int pinT = 5;
int pinLDR = 4;
int TValue = 0;
int LDRValue = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("LDR ");
  Serial.println ("Temp. (°C)");
}

void loop() {
  // put your main code here, to run repeatedly:
  TValue = analogRead(pinT);
  LDRValue = analogRead(pinLDR);
  Serial.print (LDRValue);
  Serial.print (",");
  Serial.println (TValue);
}
