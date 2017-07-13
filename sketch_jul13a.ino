int pos1 = 0
int pos2 = 90
int pos 3 = -90

Servo servo1;
Servo servo2;

void setup() {
  servo1.attach(5);
  servo2.attach(6);
}

void loop() {
  if (servo1.read (pos1)) {
    servo1.write(pos2);
    delay(15);
    servo1.write(pos3);
    delay(15);
    servo1.write(pos1);
    delay(15);
  }
  else {
    servo1.write(pos1);
    delay(15);
  }
  
    
  }
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
