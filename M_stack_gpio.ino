#include <M5Stack.h>    
int LED=26;
int state=LOW;
void setup() {
  // put your setup code here, to run once:
M5.begin();
pinMode(LED,OUTPUT);
digitalWrite(LED,state);
}

void loop() {
  // put your main code here, to run repeatedly:
/*if(M5.BtnA.wasPressed())
{
  state=!state;
  digitalWrite(LED,state);
  }*/
  digitalWrite(LED,state);
  state=!state;
  delay(1000);
  M5.update();
}
