
void setup()
{
  Serial.begin(115200);
}


void loop()
{
  char customKey = customKeypad.getKey();

  if(customKey) 
    Serial.println(customKey);

}