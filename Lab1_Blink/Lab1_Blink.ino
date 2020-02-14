#define LED_PIN 2
int interval = 250;

void setup() {
  // put your setup code here, to run once:
  // initialize digital pin LED_PIN as an output.
  pinMode(LED_PIN, OUTPUT);
}

void timedBlink(int temp)
{
  digitalWrite(LED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(temp);                       // wait for a second
  digitalWrite(LED_PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(temp);                       // wait for a second
}

void loop() {
  // put your main code here, to run repeatedly:
  timedBlink(interval);
  
  if(interval == 250)
  {
    interval = 500;
  }
  else if(interval == 500)
  {
    interval = 1000;
  }
  else if(interval == 1000)
  {
    interval = 250;
  }
}
