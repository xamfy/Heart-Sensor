int sensorPin = A1;

void setup()  {
  Serial.begin(115200);
 }

void loop()  {
  int heartValue = analogRead(heartPin);
  Serial.println(sensorPin);
  delay(5);
  }
