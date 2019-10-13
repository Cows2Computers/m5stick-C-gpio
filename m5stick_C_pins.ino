#include <M5StickC.h>    
int LED=26;
int state=LOW;
void setup() {
  // put your setup code here, to run once:
M5.begin();
pinMode(37, INPUT);
pinMode(LED,OUTPUT);
digitalWrite(LED,state);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(37) == LOW)
{
  state=!state;
  digitalWrite(LED,state);
  }
  M5.update();
}
