
void setup()
{
  Serial.begin(38400);
  pinMode(13, OUTPUT); // put your setup code here, to run once:
}

void loop()
{

  if (Serial.available() > 0)
  {

    String command = Serial.readStringUntil('\r');
    Serial.print(command);

    if (command.equals("led on"))
    {
      digitalWrite(13, HIGH);
      Serial.write("\nOk");
    }
    else if (command.equals("led off"))
    {
      digitalWrite(13, LOW);
      Serial.write("\nOk");
    }
  }
}
