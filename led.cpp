void setup()
{
 pinMode(greenPin, OUTPUT);
 pinMode(redPin, OUTPUT);   
}

void lightGreen()
{
    digitalWrite(greenPin, HIGH);
}
void lightRed()
{
    digitalWrite(redPin, HIGH);
}