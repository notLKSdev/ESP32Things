#include <Arduino.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>

#define LCD_MOSI 23     //ESP32 D23
#define LCD_SCLK 18     //ESP32 D18
#define LCD_CS 15       //ESP32 D15
#define LCD_DC 2        //ESP32 D2
#define LCD_RST 4       //ESP32 D4
#define LCD_BLK 32      //ESP32 D32
Adafruit_ST7789 lcd = Adafruit_ST7789(LCD_CS,LCD_DC,LCD_RST);

void setup() {
  pinMode(32, OUTPUT);
  digitalWrite(32, HIGH);
  lcd.init(170,320);
  lcd.setRotation(1);
  lcd.setTextSize(3);
  lcd.fillScreen(ST77XX_BLACK);
  lcd.print("Hello world!");
}

void loop() {
}