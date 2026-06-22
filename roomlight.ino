#define LED 13
#define PIR 2

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(PIR, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int l = digitalRead(PIR);

  if(l > 0)
  {
    Serial.println("Motion Detected");
    digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite(LED, LOW);
  }

  delay(1000);
}
