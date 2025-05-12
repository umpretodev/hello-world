#include "LcdController.hpp"

LcdController::LcdController(LiquidCrystal_I2C *lcdRef) {
    this->lcd = lcdRef;
    this->row = 0;
    this->column = 0;
}

void LcdController::init() {
    lcd->init();
    lcd->clear();
    lcd->backlight();
}

void LcdController::_setCursorRow(int value) { 
    this->row = value; 
    lcd->setCursor(this->column, this->row);
}

void LcdController::_setCursorColumn(int value) { 
    this->column = value; 
    lcd->setCursor(this->column, this->row);
}

void LcdController::clear() { lcd->clear(); }

void LcdController::printInRow1(char* message) {
    _setCursorRow(0);
    _setCursorColumn(2);

    lcd->print(message);
}

void LcdController::printInRow2(char *message) {
    _setCursorRow(1);
    _setCursorColumn(2);

    lcd->print(message);
}
