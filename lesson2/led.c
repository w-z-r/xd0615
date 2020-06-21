int i;
int j;
void setup()
{
  for(i=0;i<=5;i+=1)
  pinMode(i, OUTPUT);
}

void loop()
{
    for(i=0;i<=3;i+=1)
  	{
  digitalWrite(i, HIGH);
  digitalWrite(i+2, HIGH);
  delay(500); 
  digitalWrite(i, LOW);
  digitalWrite(i+2, LOW); 
  	}
  	for(i=5;i>=0;i-=1)
    {
      digitalWrite(i, HIGH);
      delay(500);
      digitalWrite(i, LOW);
    }
}