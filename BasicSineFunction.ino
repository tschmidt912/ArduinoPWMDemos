#define pwm_pin 5
#define angle_to_rad 0.01745329251

int angle;
double output;

void setup() {
  pinMode(pwm_pin, OUTPUT);  // declaring A0 as our output
  Serial.begin(9600);
  angle = 0;
}

void loop() {
  if (angle > 360)
    angle = 0;
  output = (sin(angle * angle_to_rad) + 1) / 2;
  angle++;
  analogWrite(pwm_pin, output * 255);
  delay(10);

}
