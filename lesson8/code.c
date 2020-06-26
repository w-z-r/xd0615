#include <LiquidCrystal.h> //将LiquidCrystal.h头文件包含进来，使用液晶库。 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //声明一个LiquidCrystal类型的变量，名为lcd。且参数表示12、11、5、4、3、2分别连接lcd的rs、enable、d4、d5、d6、d7引脚。

void setup() {
  //这个函数中的代码只执行一次。
  lcd.begin(16, 2); //设置lcd显示器的列数和行数。
  lcd.print("hello, world!"); //向lcd显示器中打印输出“hello, world!”（默认初始位置为0列，0行）。
}

void loop() {
  //这个函数中的代码反复循环执行。
  lcd.setCursor(0, 1); //设置光标（打印坐标）为0列，1行。
  lcd.print(millis() / 1000); //millis()函数的返回值为程序自执行开始的毫秒数，millis()/1000即为秒数。这句话让程序在lcd上打印出从开始执行到现在的秒数。
}
 