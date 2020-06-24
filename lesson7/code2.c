#include<MsTimer2.h>
int num=1,i,j;
void onchange()
{
  num=0;
}

void count()
{
  digitalWrite(8,0);
  
  if(num==10) num=0;
  for(i=4,j=1;i<=7;i+=1,j*=2)
  {
   digitalWrite(i,num&j);
  }
  digitalWrite(8,1);
  num+=1;
}

void setup()
{
  pinMode(2,INPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  digitalWrite(8,0);
  digitalWrite(9,1);
  digitalWrite(10,1);
  
  attachInterrupt(digitalPinToInterrupt(2),onchange,HIGH);
  MsTimer2::set(1000, count); 
  MsTimer2::start();
}
void loop()
{
  
}