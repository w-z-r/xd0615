#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5
#define S1 8
#define S2 9
#define S3 10
#define S4 11
#define LT 6
#define BT 7
byte income;
int i,j;
void setup()
{
  pinMode(IN1, OUTPUT);//输入1
  pinMode(IN2, OUTPUT);//输入2
  pinMode(IN3, OUTPUT);//输入3
  pinMode(IN4, OUTPUT);//输入4
  pinMode(S1, OUTPUT);//锁1
  pinMode(S2, OUTPUT);//锁2
  pinMode(S3, OUTPUT);//锁3
  pinMode(S4, OUTPUT);//锁4
  pinMode(LT,OUTPUT);//测试
  pinMode(BT,OUTPUT);//消隐
  
  digitalWrite(LT,1);
  digitalWrite(BT,1);
  digitalWrite(S1,1);
  digitalWrite(S2,1);
  digitalWrite(S3,1);
  digitalWrite(S4,1);//全都锁上0
  
  Serial.begin(9600);//串口初始化
}

void loop()
{
  if(Serial.available())
  {
    income=Serial.read();
    digitalWrite(S4,0);
    //income=income-'0';这一行没必要
    for(i=2,j=1;i<=5;i+=1,j*=2)
    {
      digitalWrite(i,income&j);
    }
    //digitalWrite(2,income&B00000001);
    //digitalWrite(3,income&B00000010);
    //digitalWrite(4,income&B00000100);
    //digitalWrite(5,income&B00001000);//将二进制ASCII码的低四位转化为BCD码
    digitalWrite(S4,1);
  }
  
}