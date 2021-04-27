
void setup()
{
  Serial.begin(115200);
  delay(250); // give me time to bring up serial monitor
  Serial.println("ESP32 Touch Test");
}

void loop()
{
  Serial.println(touchRead(T6));  // get value using T6
  delay(250);
}
