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
  int frequency = 100;
  for(int i=0;i<101;i++)
    dimmer(frequency,i);
  for(int i=100;i>-1;i--)
    dimmer(frequency,i);
}

void dimmer(int freq, int duty)
{
  int period, onTime, offTime;
  period = 1000/freq;
  onTime = period * duty / 100;
  offTime = period - onTime;
  digitalWrite(LED_PIN, HIGH);
  delay(onTime);
  digitalWrite(LED_PIN, LOW);
  delay(offTime);
}
