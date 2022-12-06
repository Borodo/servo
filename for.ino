#include <Servo.h>
Servo servo1;
int i;
void setup() {
  servo1.attach(5);
}

void loop() {
 for (i = 0; i < 180;i++){
  servo1.write(i);
  delay(100);
 }
 for (i = 180; i <= 180;i--){
  servo1.write(i);
  delay(100);
 }

}
