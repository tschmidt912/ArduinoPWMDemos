#define pwm_pin 5

void setup() {
  pinMode(pwm_pin, OUTPUT);  // declaring A0 as our output
}

void loop() {

  // Count up
  for(int i = 0; i < 255; i++){      // increase the percentage
    analogWrite(pwm_pin, i);          // send out the current value
    delay(50);                        // delay for half a second each iteration
  }

  // Count down
  for(int i = 255; i > 0; i--){      // decrease the percentage
    analogWrite(pwm_pin, i);          // send out the current value
    delay(50);                        // delay for half a second each iteration
  }

}
