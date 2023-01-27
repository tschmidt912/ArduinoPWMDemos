#define pwm_pin 5
int input; // store a variable to hold our input

void setup() {
  input = 0;
  pinMode(pwm_pin, OUTPUT);  // declaring A0 as our output
  Serial.begin(9600);   // begins the serial output at 9600 baud
}

void loop() {
  input = Serial.parseInt();    // read the input and look for an integer
  if (input != 0)
    analogWrite(pwm_pin, input);  // send our current input to the analog
  delay(100);                   // wait a little bit

}
