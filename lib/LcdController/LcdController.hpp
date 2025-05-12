#ifndef LEDCONTROLLER_HPP
#define LEDCONTROLLER_HPP

#include <LiquidCrystal_I2C.h>

class LcdController {
    private: 
        LiquidCrystal_I2C *lcd;

        int row;
        int column;

        void _setCursorRow(int value);
        void _setCursorColumn(int value);
        
    public:
        LcdController(LiquidCrystal_I2C *lcdRef);
        void init();
        void clear();
        void printInRow1(char *message);
        void printInRow2(char *message);
};

#endif