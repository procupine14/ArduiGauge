/*
 * Stepper motor control based on voltage input
 * for gauge cluster
 */

#include <Stepper.h>

//initialize pins for motor 1
int in1Pin1 = 12;
int in2Pin1 = 11;
int in3Pin1 = 10;
int in4Pin1 = 9;

//initialize pins for motor 2
int in1Pin2 = 8;
int in2Pin2 = 7;
int in3Pin2 = 6;
int in4Pin2 = 5;

//initialize pins for motor 3
int in1Pin3 = 4;
int in2Pin3 = 3;
int in3Pin3 = 2;
int in4Pin3 = 1;

//declaring stepper motor objects
Stepper motor1(300, in1Pin1, in2Pin1, in3Pin1, in4Pin1);
Stepper motor2(300, in1Pin2, in2Pin2, in3Pin2, in4Pin2);
Stepper motor3(300, in1Pin3, in2Pin3, in3Pin3, in4Pin3);

void setup() {

  //set pin modes for all pins
  pinMode(in1Pin1, OUTPUT);
  pinMode(in2Pin1, OUTPUT);
  pinMode(in3Pin1, OUTPUT);
  pinMode(in4Pin1, OUTPUT);
  pinMode(in1Pin2, OUTPUT);
  pinMode(in2Pin2, OUTPUT);
  pinMode(in3Pin2, OUTPUT);
  pinMode(in4Pin2, OUTPUT);
  pinMode(in1Pin3, OUTPUT);
  pinMode(in2Pin3, OUTPUT);
  pinMode(in3Pin3, OUTPUT);
  pinMode(in4Pin3, OUTPUT);


  while (!Serial);
  
  Serial.begin(9600);
  motor1.setSpeed(20);
  motor2.setSpeed(30);
  motor3.setSpeed(50);

}

void loop() {
  
  if (Serial.available())
  {
    int steps = Serial.parseInt();
    motor.step(steps);
  }

}
