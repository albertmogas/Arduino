unsigned long t=100;
const int led = 4;
const int boto = 2;
int buttonstate = 0;
int a=0;

void setup()
{
  pinMode(led,OUTPUT);
  pinMode(buttonstate, INPUT);
}

void loop()
{
  buttonstate= digitalRead(boto);
  if (buttonstate==1)
  {
    for( int a=0; a<30; a++)
    {
    digitalWrite(led,1);
    delay(t);
    digitalWrite(led,0);
    delay(t);
    }
  }
  else
  {
    a=0; 
  }
}
