#include <Servo.h>
Servo servo1;
Servo servo2;
int i;
void setup() {
  servo1.attach(5);
  servo2.attach(3);
}

void loop() {
 for (i = 5; i < 175;i++){
  servo1.write(i);
  servo2.write(i);
  
  delay(50);
 }
 for (i = 175; i <= 175;i--){
  servo1.write(i);
  servo2.write(i);
  delay(50);
 }

}
