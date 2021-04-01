//HINUBYA NGA ALCOHOL PATCH UPDATE
#include <Servo.h>
Servo servo;
const int trigger = 12;
const int echo = 13;
int angle = 0;
long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  servo.attach(11);
  servo.write(0);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);

  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);

  duration = pulseIn(echo, HIGH);
  distance = duration * 0.034/2;
  
  if (distance <= 7) {
    Serial.println("LOL");
    servo.write(180);
    delay(500);
    servo.write(0);
    delay(500);
  }
}
