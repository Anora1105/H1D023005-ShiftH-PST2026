#include <Arduino.h>

const int pinbutton = 3;
const int pinservo = 4;
const int pinled = 5;

void setup(){
  pinMode(pinled, INPUT_PULLUP);
   myservo.attach(servoPin);
  Serial.begin(9600);
}

void loop(){
   bool upState = !digitalRead(buttonUp);
   if (buttonUp = map(val,
            0,    
            90)); 
  digitalWrite(pinled, HIGH);
  delay(timer);
  digitalWrite(pinled, LOW);


}