//install servo library
// say tools -> manage libraries -> search servo
#include <Servo.h>
Servo myServo;
void setup() {
  // put your setup code here, to run once:
myServo.attach(9);//the digial pin that is connectd to the orange yellow
myServo.write(90);// set to the middle
//range is 0-180
}

void loop() {
  // put your main code here, to run repeatedly:
myServo.write(0);
delay(300);
myServo.write(60);
delay(300);
myServo.write(80);
delay(300);
myServo.write(180);
delay(300);

}
