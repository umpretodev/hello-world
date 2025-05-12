#include <Arduino.h>
#include "LcdController.hpp"

LiquidCrystal_I2C lcd(0x27, 16, 2);
LcdController lcdController(&lcd);

void setup() {
    lcdController.init();
}

void loop() {
    lcdController.printInRow1("Hello, World!");
    
    delay(1000);
    lcdController.clear();
    
    lcdController.printInRow2("Hello, World!");
   
    delay(1000);
    lcdController.clear();
} 