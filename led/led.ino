  int led = 2;
  int botao1 = 3;
  int botao2 = 4; 
  int b1,b2;
  int buzzer = 1;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode (botao1, INPUT_PULLUP);
  pinMode (botao2, INPUT_PULLUP);
  pinMode (buzzer, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  b1 = digitalRead(botao1);
  b2 = digitalRead(botao2);
  if (b1 == LOW and b2 == LOW){
  digitalWrite (led,HIGH); 
  digitalWrite (buzzer,HIGH); 

}
else{
  digitalWrite (led,LOW);
  digitalWrite (buzzer,LOW); 

}

}

