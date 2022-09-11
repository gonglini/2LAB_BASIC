#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);  // I2C LCD 객체 선언

void setup()
{
  // initialize the LCD
  lcd.begin(); // lcd를 사용을 시작합니다.
  lcd.backlight(); // backlight를 On 시킵니다.
  lcd.print("Hello, world!"); // 화면에 Hello, world!를 출력합니다.
}

void loop(){
}
