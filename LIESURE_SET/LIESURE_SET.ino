// testshapes demo for Adafruit RGBmatrixPanel library.
// Demonstrates the drawing abilities of the RGBmatrixPanel library.
// For 16x32 RGB LED matrix:
// http://www.adafruit.com/products/420

// Written by Limor Fried/Ladyada & Phil Burgess/PaintYourDragon
// for Adafruit Industries.
// BSD license, all text above must be included in any redistribution.

#include <RGBmatrixPanel.h>

// Most of the signal pins are configurable, but the CLK pin has some
// special constraints.  On 8-bit AVR boards it must be on PORTB...
// Pin 8 works on the Arduino Uno & compatibles (e.g. Adafruit Metro),
// Pin 11 works on the Arduino Mega.  On 32-bit SAMD boards it must be
// on the same PORT as the RGB data pins (D2-D7)...
// Pin 8 works on the Adafruit Metro M0 or Arduino Zero,
// Pin A4 works on the Adafruit Metro M4 (if using the Adafruit RGB
// Matrix Shield, cut trace between CLK pads and run a wire to A4).

#define CLK  8   // USE THIS ON ARDUINO UNO, ADAFRUIT METRO M0, etc.
//#define CLK A4 // USE THIS ON METRO M4 (not M0)
//#define CLK 11 // USE THIS ON ARDUINO MEGA
#define OE   9
#define LAT 10
#define A   A0
#define B   A1
#define C   A2

RGBmatrixPanel matrix(A, B, C, CLK, LAT, OE, false);

void setup() {
//IT ALL STARTS BELOW HERE VVVVVVVVVVV
  matrix.begin();

//NOTE TO SELF 
//DESPITE BEING A 16x32 MATRIX, IT COUNTS THE VERY FIRST LED AS 0,0 NOT 1,1
//MEANING THE 4 CORNERS ARE
//TOP LEFT
//matrix.drawPixel(0,0, matrix.Color333(0,0,7));
//TOP RIGHT
//matrix.drawPixel(31,0, matrix.Color333(0,0,7));
//BOTTOM LEFT
//matrix.drawPixel(0,15, matrix.Color333(0,0,7));
//BOTTOM RIGHT
//matrix.drawPixel(31,15, matrix.Color333(0,0,7));

//matrix.drawLine(13, 3, 17, 3, matrix.Color333(7, 7, 7));

//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE

//delay(500);
//matrix.fillScreen(matrix.Color333(0, 0, 0));

////Start Here
////TOP LEFT
//matrix.drawPixel(0,0, matrix.Color333(7,0,0));
////TOP RIGHT
//matrix.drawPixel(31,0, matrix.Color333(0,7,0));
////BOTTOM LEFT
//matrix.drawPixel(0,15, matrix.Color333(0,0,7));
////BOTTOM RIGHT
//matrix.drawPixel(31,15, matrix.Color333(7,7,7));

delay(750);
matrix.fillScreen(matrix.Color333(0, 0, 0));


//The way the line function works is it has 4 values. The matrix will display a line that starts at the first coordinate, (x,x) and end at the second coordinate(y,y(
//matrix.drawLine(14, 3, 14, 7, matrix.Color333(7, 7, 7));
//first value is X (Left and right)
//second value is Y (Up and down)

//THIS IS HOW YOU DRAW A SINGLE PIXEL
//matrix.drawPixel(14, 10, matrix.Color333(7, 7, 7));

//matrix.drawPixel(15, 5, matrix.Color333(7, 7, 7));

//THIS IS HOW YOU DELAY!!!!!!!!
//  delay(3000);

// fill the screen with black
// matrix.fillScreen(matrix.Color333(0, 0, 0));
 
//  // draw some text! DRAW SOME TEXT!
//  matrix.setCursor(1, 0);  // start at top left, with one pixel of spacing
//  matrix.setTextSize(1);   // size 1 == 8 pixels high
//
 
//   print each letter with a rainbow color
//  matrix.setTextColor(matrix.Color333(0,0,0));
//  matrix.print('O');

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~MESSAGE 1

  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('S');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('t');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('a');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('n');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('d');
  
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('S');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('t');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('a');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('n');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('d');

  delay(3000);
  matrix.fillScreen(matrix.Color333(0, 0, 0));
matrix.setCursor(1, 0);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~MESSAGE 2
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('S');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('t');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('a');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('n');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('d');

  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('u');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('i');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('u');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('p');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('!');
  
  matrix.setTextColor(matrix.Color333(0,7,7));
  matrix.print('*');
  matrix.setTextColor(matrix.Color333(0,4,7));
  matrix.print('R');
  matrix.setTextColor(matrix.Color333(0,0,7));
  matrix.print('G');
  matrix.setTextColor(matrix.Color333(4,0,7));
  matrix.print('B');
  matrix.setTextColor(matrix.Color333(7,0,4));
  matrix.print('*');
  
  delay(3000);
  matrix.fillScreen(matrix.Color333(0, 0, 0));
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~STRETCH ANIMATION 1
//HEAD
matrix.drawLine(13, 3, 18, 3, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 9, matrix.Color333(7, 7, 7));
matrix.drawPixel(13,10, matrix.Color333(7,7,7));
matrix.drawPixel(18,10, matrix.Color333(7,7,7));
matrix.drawLine(19, 4, 19, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 11, 17, 11, matrix.Color333(7, 7, 7));

//FACE
matrix.drawLine(14, 5, 14, 6, matrix.Color333(7, 7, 7));
matrix.drawLine(17, 5, 17, 6, matrix.Color333(7, 7, 7));
matrix.drawPixel(14,8, matrix.Color333(7,7,7));
matrix.drawPixel(17,8, matrix.Color333(7,7,7));
matrix.drawLine(15, 9, 16, 9, matrix.Color333(7, 7, 7));

//BODY
matrix.drawLine(15, 12, 15, 15, matrix.Color333(7, 7, 7));
matrix.drawLine(16, 12, 16, 15, matrix.Color333(7, 7, 7));

//ARMS
matrix.drawLine(14, 13, 12, 15, matrix.Color333(7, 7, 7));
matrix.drawLine(17, 13, 19, 15, matrix.Color333(7, 7, 7));

  delay(500);
  matrix.fillScreen(matrix.Color333(0, 0, 0));
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~STRETCH ANIMATION 2
//HEAD
matrix.drawLine(13, 3, 18, 3, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 9, matrix.Color333(7, 7, 7));
matrix.drawPixel(13,10, matrix.Color333(7,7,7));
matrix.drawPixel(18,10, matrix.Color333(7,7,7));
matrix.drawLine(19, 4, 19, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 11, 17, 11, matrix.Color333(7, 7, 7));

//FACE
matrix.drawLine(14, 5, 14, 6, matrix.Color333(7, 7, 7));
matrix.drawLine(17, 5, 17, 6, matrix.Color333(7, 7, 7));
matrix.drawPixel(14,8, matrix.Color333(7,7,7));
matrix.drawPixel(17,8, matrix.Color333(7,7,7));
matrix.drawLine(15, 9, 16, 9, matrix.Color333(7, 7, 7));

//BODY
matrix.drawLine(15, 12, 15, 15, matrix.Color333(7, 7, 7));
matrix.drawLine(16, 12, 16, 15, matrix.Color333(7, 7, 7));

//ARMS
matrix.drawLine(8, 13, 23, 13, matrix.Color333(7, 7, 7));
matrix.drawLine(9, 12, 9, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(22, 12, 22, 14, matrix.Color333(7, 7, 7));

  delay(500);
  matrix.fillScreen(matrix.Color333(0, 0, 0));

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~STRETCH ANIMATION 3 FIRST STRETCH FRAME
//HEAD
matrix.drawLine(13, 3, 18, 3, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 9, matrix.Color333(7, 7, 7));
matrix.drawPixel(13,10, matrix.Color333(7,7,7));
matrix.drawPixel(18,10, matrix.Color333(7,7,7));
matrix.drawLine(19, 4, 19, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 11, 17, 11, matrix.Color333(7, 7, 7));

//FACE
matrix.drawLine(14, 5, 14, 6, matrix.Color333(7, 7, 7));
matrix.drawLine(17, 5, 17, 6, matrix.Color333(7, 7, 7));
matrix.drawPixel(14,8, matrix.Color333(7,7,7));
matrix.drawPixel(17,8, matrix.Color333(7,7,7));
matrix.drawLine(15, 9, 16, 9, matrix.Color333(7, 7, 7));

//BODY
matrix.drawLine(15, 12, 15, 15, matrix.Color333(7, 7, 7));
matrix.drawLine(16, 12, 16, 15, matrix.Color333(7, 7, 7));

//ARMS
matrix.drawPixel(14,13, matrix.Color333(7,7,7));
matrix.drawLine(13, 13, 9, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(9, 8, 8, 9, matrix.Color333(7, 7, 7));

matrix.drawPixel(17,13, matrix.Color333(7,7,7));
matrix.drawLine(18, 13, 22, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(22, 8, 23, 9, matrix.Color333(7, 7, 7));

delay(1000);
  matrix.fillScreen(matrix.Color333(0, 0, 0));

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~STRETCH ANIMATION 4 UP
//HEAD
matrix.drawLine(13, 2, 18, 2, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 3, 12, 8, matrix.Color333(7, 7, 7));
matrix.drawPixel(13,9, matrix.Color333(7,7,7));
matrix.drawPixel(18,9, matrix.Color333(7,7,7));
matrix.drawLine(19, 3, 19, 8, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 10, 17, 10, matrix.Color333(7, 7, 7));

//FACE
matrix.drawPixel(14,4, matrix.Color333(7,7,7));
matrix.drawPixel(17,4, matrix.Color333(7,7,7));
matrix.drawPixel(14,6, matrix.Color333(7,7,7));
matrix.drawPixel(17,6, matrix.Color333(7,7,7));
matrix.drawPixel(15,7, matrix.Color333(7,7,7));
matrix.drawPixel(16,7, matrix.Color333(7,7,7));

//BODY
matrix.drawLine(15, 11, 15, 15, matrix.Color333(7, 7, 7));
matrix.drawLine(16, 11, 16, 15, matrix.Color333(7, 7, 7));

//ARMS
matrix.drawLine(14, 12, 10, 8, matrix.Color333(7, 7, 7));
matrix.drawLine(10, 7, 9, 8, matrix.Color333(7, 7, 7));

matrix.drawLine(17, 12, 21, 8, matrix.Color333(7, 7, 7));
matrix.drawLine(21, 7, 22, 8, matrix.Color333(7, 7, 7));

delay(1000);
  matrix.fillScreen(matrix.Color333(0, 0, 0));


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~STRETCH ANIMATION 5 DOWN
//HEAD
matrix.drawLine(13, 3, 18, 3, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 9, matrix.Color333(7, 7, 7));
matrix.drawPixel(13,10, matrix.Color333(7,7,7));
matrix.drawPixel(18,10, matrix.Color333(7,7,7));
matrix.drawLine(19, 4, 19, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 11, 17, 11, matrix.Color333(7, 7, 7));

//FACE
matrix.drawLine(14, 5, 14, 6, matrix.Color333(7, 7, 7));
matrix.drawLine(17, 5, 17, 6, matrix.Color333(7, 7, 7));
matrix.drawPixel(14,8, matrix.Color333(7,7,7));
matrix.drawPixel(17,8, matrix.Color333(7,7,7));
matrix.drawLine(15, 9, 16, 9, matrix.Color333(7, 7, 7));

//BODY
matrix.drawLine(15, 12, 15, 15, matrix.Color333(7, 7, 7));
matrix.drawLine(16, 12, 16, 15, matrix.Color333(7, 7, 7));

//ARMS
matrix.drawPixel(14,13, matrix.Color333(7,7,7));
matrix.drawLine(13, 13, 9, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(9, 8, 8, 9, matrix.Color333(7, 7, 7));

matrix.drawPixel(17,13, matrix.Color333(7,7,7));
matrix.drawLine(18, 13, 22, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(22, 8, 23, 9, matrix.Color333(7, 7, 7));

delay(750);
  matrix.fillScreen(matrix.Color333(0, 0, 0));

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~STRETCH ANIMATION 6 UP
//HEAD
matrix.drawLine(13, 2, 18, 2, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 3, 12, 8, matrix.Color333(7, 7, 7));
matrix.drawPixel(13,9, matrix.Color333(7,7,7));
matrix.drawPixel(18,9, matrix.Color333(7,7,7));
matrix.drawLine(19, 3, 19, 8, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 10, 17, 10, matrix.Color333(7, 7, 7));

//FACE
matrix.drawPixel(14,4, matrix.Color333(7,7,7));
matrix.drawPixel(17,4, matrix.Color333(7,7,7));
matrix.drawPixel(14,6, matrix.Color333(7,7,7));
matrix.drawPixel(17,6, matrix.Color333(7,7,7));
matrix.drawPixel(15,7, matrix.Color333(7,7,7));
matrix.drawPixel(16,7, matrix.Color333(7,7,7));

//BODY
matrix.drawLine(15, 11, 15, 15, matrix.Color333(7, 7, 7));
matrix.drawLine(16, 11, 16, 15, matrix.Color333(7, 7, 7));

//ARMS
matrix.drawLine(14, 12, 10, 8, matrix.Color333(7, 7, 7));
matrix.drawLine(10, 7, 9, 8, matrix.Color333(7, 7, 7));

matrix.drawLine(17, 12, 21, 8, matrix.Color333(7, 7, 7));
matrix.drawLine(21, 7, 22, 8, matrix.Color333(7, 7, 7));

delay(1000);
  matrix.fillScreen(matrix.Color333(0, 0, 0));


 //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~STRETCH ANIMATION 7 DOWN
//HEAD
matrix.drawLine(13, 3, 18, 3, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 9, matrix.Color333(7, 7, 7));
matrix.drawPixel(13,10, matrix.Color333(7,7,7));
matrix.drawPixel(18,10, matrix.Color333(7,7,7));
matrix.drawLine(19, 4, 19, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 11, 17, 11, matrix.Color333(7, 7, 7));

//FACE
matrix.drawLine(14, 5, 14, 6, matrix.Color333(7, 7, 7));
matrix.drawLine(17, 5, 17, 6, matrix.Color333(7, 7, 7));
matrix.drawPixel(14,8, matrix.Color333(7,7,7));
matrix.drawPixel(17,8, matrix.Color333(7,7,7));
matrix.drawLine(15, 9, 16, 9, matrix.Color333(7, 7, 7));

//BODY
matrix.drawLine(15, 12, 15, 15, matrix.Color333(7, 7, 7));
matrix.drawLine(16, 12, 16, 15, matrix.Color333(7, 7, 7));

//ARMS
matrix.drawPixel(14,13, matrix.Color333(7,7,7));
matrix.drawLine(13, 13, 9, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(9, 8, 8, 9, matrix.Color333(7, 7, 7));

matrix.drawPixel(17,13, matrix.Color333(7,7,7));
matrix.drawLine(18, 13, 22, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(22, 8, 23, 9, matrix.Color333(7, 7, 7));

delay(750);
  matrix.fillScreen(matrix.Color333(0, 0, 0));

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~STRETCH ANIMATION 8 UP
//HEAD
matrix.drawLine(13, 2, 18, 2, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 3, 12, 8, matrix.Color333(7, 7, 7));
matrix.drawPixel(13,9, matrix.Color333(7,7,7));
matrix.drawPixel(18,9, matrix.Color333(7,7,7));
matrix.drawLine(19, 3, 19, 8, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 10, 17, 10, matrix.Color333(7, 7, 7));

//FACE
matrix.drawPixel(14,4, matrix.Color333(7,7,7));
matrix.drawPixel(17,4, matrix.Color333(7,7,7));
matrix.drawPixel(14,6, matrix.Color333(7,7,7));
matrix.drawPixel(17,6, matrix.Color333(7,7,7));
matrix.drawPixel(15,7, matrix.Color333(7,7,7));
matrix.drawPixel(16,7, matrix.Color333(7,7,7));

//BODY
matrix.drawLine(15, 11, 15, 15, matrix.Color333(7, 7, 7));
matrix.drawLine(16, 11, 16, 15, matrix.Color333(7, 7, 7));

//ARMS
matrix.drawLine(14, 12, 10, 8, matrix.Color333(7, 7, 7));
matrix.drawLine(10, 7, 9, 8, matrix.Color333(7, 7, 7));

matrix.drawLine(17, 12, 21, 8, matrix.Color333(7, 7, 7));
matrix.drawLine(21, 7, 22, 8, matrix.Color333(7, 7, 7));

delay(1000);
  matrix.fillScreen(matrix.Color333(0, 0, 0));


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~STRETCH ANIMATION 9 DOWN
//HEAD
matrix.drawLine(13, 3, 18, 3, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 9, matrix.Color333(7, 7, 7));
matrix.drawPixel(13,10, matrix.Color333(7,7,7));
matrix.drawPixel(18,10, matrix.Color333(7,7,7));
matrix.drawLine(19, 4, 19, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 11, 17, 11, matrix.Color333(7, 7, 7));

//FACE
matrix.drawLine(14, 5, 14, 6, matrix.Color333(7, 7, 7));
matrix.drawLine(17, 5, 17, 6, matrix.Color333(7, 7, 7));
matrix.drawPixel(14,8, matrix.Color333(7,7,7));
matrix.drawPixel(17,8, matrix.Color333(7,7,7));
matrix.drawLine(15, 9, 16, 9, matrix.Color333(7, 7, 7));

//BODY
matrix.drawLine(15, 12, 15, 15, matrix.Color333(7, 7, 7));
matrix.drawLine(16, 12, 16, 15, matrix.Color333(7, 7, 7));

//ARMS
matrix.drawPixel(14,13, matrix.Color333(7,7,7));
matrix.drawLine(13, 13, 9, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(9, 8, 8, 9, matrix.Color333(7, 7, 7));

matrix.drawPixel(17,13, matrix.Color333(7,7,7));
matrix.drawLine(18, 13, 22, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(22, 8, 23, 9, matrix.Color333(7, 7, 7));

delay(500);
  matrix.fillScreen(matrix.Color333(0, 0, 0));

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~STRETCH ANIMATION 10
//HEAD
matrix.drawLine(13, 3, 18, 3, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 9, matrix.Color333(7, 7, 7));
matrix.drawPixel(13,10, matrix.Color333(7,7,7));
matrix.drawPixel(18,10, matrix.Color333(7,7,7));
matrix.drawLine(19, 4, 19, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 11, 17, 11, matrix.Color333(7, 7, 7));

//FACE
matrix.drawLine(14, 5, 14, 6, matrix.Color333(7, 7, 7));
matrix.drawLine(17, 5, 17, 6, matrix.Color333(7, 7, 7));
matrix.drawPixel(14,8, matrix.Color333(7,7,7));
matrix.drawPixel(17,8, matrix.Color333(7,7,7));
matrix.drawLine(15, 9, 16, 9, matrix.Color333(7, 7, 7));

//BODY
matrix.drawLine(15, 12, 15, 15, matrix.Color333(7, 7, 7));
matrix.drawLine(16, 12, 16, 15, matrix.Color333(7, 7, 7));

//ARMS
matrix.drawLine(8, 13, 23, 13, matrix.Color333(7, 7, 7));
matrix.drawLine(9, 12, 9, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(22, 12, 22, 14, matrix.Color333(7, 7, 7));

  delay(500);
  matrix.fillScreen(matrix.Color333(0, 0, 0));


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~STRETCH ANIMATION 11
//HEAD
matrix.drawLine(13, 3, 18, 3, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 9, matrix.Color333(7, 7, 7));
matrix.drawPixel(13,10, matrix.Color333(7,7,7));
matrix.drawPixel(18,10, matrix.Color333(7,7,7));
matrix.drawLine(19, 4, 19, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 11, 17, 11, matrix.Color333(7, 7, 7));

//FACE
matrix.drawLine(14, 5, 14, 6, matrix.Color333(7, 7, 7));
matrix.drawLine(17, 5, 17, 6, matrix.Color333(7, 7, 7));
matrix.drawPixel(14,8, matrix.Color333(7,7,7));
matrix.drawPixel(17,8, matrix.Color333(7,7,7));
matrix.drawLine(15, 9, 16, 9, matrix.Color333(7, 7, 7));

//BODY
matrix.drawLine(15, 12, 15, 15, matrix.Color333(7, 7, 7));
matrix.drawLine(16, 12, 16, 15, matrix.Color333(7, 7, 7));

//ARMS
matrix.drawLine(14, 13, 12, 15, matrix.Color333(7, 7, 7));
matrix.drawLine(17, 13, 19, 15, matrix.Color333(7, 7, 7));

  delay(500);
    matrix.fillScreen(matrix.Color333(0, 0, 0));
  delay(90000);
// 15 MINUTE DELAY BETWEEN REMINDERS

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~MESSAGE 1

  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('S');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('t');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('a');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('n');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('d');
  
    matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('D');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('r');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('i');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('n');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('k');

  delay(1500);
  matrix.fillScreen(matrix.Color333(0, 0, 0));
matrix.setCursor(1, 0);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~MESSAGE 2
   matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('D');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('r');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('i');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('n');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('k');

  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('S');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('o');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('m');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('e');
  
  delay(1500);
  matrix.fillScreen(matrix.Color333(0, 0, 0));
    matrix.fillScreen(matrix.Color333(0, 0, 0));
matrix.setCursor(1, 0);
  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~MESSAGE 3
    matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('S');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('o');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('m');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('e');  
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('e');

  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('W');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('a');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('t');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('e');
   matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('r');
  
  delay(1500);
  matrix.fillScreen(matrix.Color333(0, 0, 0));
  matrix.setCursor(1, 0);
  

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~MESSAGE 4
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('W');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('a');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('t');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('e');  
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('r');

  
  delay(1500);
  matrix.fillScreen(matrix.Color333(0, 0, 0));
  delay(1000);
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~GLASS ANIMATION 1
//CUP
matrix.drawLine(0, 4, 0, 12, matrix.Color333(7, 7, 7));

delay(100);
matrix.fillScreen(matrix.Color333(0, 0, 0));

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~GLASS ANIMATION 2
//CUP
matrix.drawLine(0, 4, 4, 4, matrix.Color333(7, 7, 7));
matrix.drawLine(4, 4, 4, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(3, 13, 3, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(0, 15, 2, 15, matrix.Color333(7, 7, 7));
//WATER
matrix.drawLine(0, 6, 0, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(1, 6, 1, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(2, 6, 2, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(3, 6, 3, 12, matrix.Color333(0, 7, 7));

  delay(100);
  matrix.fillScreen(matrix.Color333(0, 0, 0));


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~GLASS ANIMATION 3
//CUP
matrix.drawLine(0, 4, 8, 4, matrix.Color333(7, 7, 7));
matrix.drawLine(0, 4, 0, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(8, 4, 8, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(1, 13, 1, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(7, 13, 7, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(2, 15, 6, 15, matrix.Color333(7, 7, 7));
//WATER
matrix.drawLine(1, 6, 1, 12, matrix.Color333(0, 7, 7));

matrix.drawLine(2, 6, 2, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(3, 6, 3, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(4, 6, 4, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(5, 6, 5, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(6, 6, 6, 14, matrix.Color333(0, 7, 7));

matrix.drawLine(7, 6, 7, 12, matrix.Color333(0, 7, 7));
  delay(100);
  matrix.fillScreen(matrix.Color333(0, 0, 0));
  
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~GLASS ANIMATION 4
//CUP
matrix.drawLine(4, 4, 12, 4, matrix.Color333(7, 7, 7));
matrix.drawLine(4, 4, 4, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(5, 13, 5, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(11, 13, 11, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(6, 15, 10, 15, matrix.Color333(7, 7, 7));
//WATER
matrix.drawLine(5, 6, 5, 12, matrix.Color333(0, 7, 7));

matrix.drawLine(6, 6, 6, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(7, 6, 7, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(8, 6, 8, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(9, 6, 9, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(10, 6, 10, 14, matrix.Color333(0, 7, 7));

matrix.drawLine(11, 6, 11, 12, matrix.Color333(0, 7, 7));
  delay(100);
  matrix.fillScreen(matrix.Color333(0, 0, 0));

  
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~GLASS ANIMATION 5
//CUP
matrix.drawLine(8, 4, 16, 4, matrix.Color333(7, 7, 7));
matrix.drawLine(8, 4, 8, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(16, 4, 16, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(9, 13, 9, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(15, 13, 15, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(10, 15, 14, 15, matrix.Color333(7, 7, 7));
//WATER
matrix.drawLine(9, 6, 9, 12, matrix.Color333(0, 7, 7));

matrix.drawLine(10, 6, 10, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(11, 6, 11, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(12, 6, 12, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(13, 6, 13, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(14, 6, 14, 14, matrix.Color333(0, 7, 7));

matrix.drawLine(15, 6, 15, 12, matrix.Color333(0, 7, 7));
  delay(200);
  matrix.fillScreen(matrix.Color333(0, 0, 0));

  
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~GLASS ANIMATION 6
//CUP
matrix.drawLine(12, 4, 20, 4, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(20, 4, 20, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(13, 13, 13, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(19, 13, 19, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 15, 18, 15, matrix.Color333(7, 7, 7));
//WATER
matrix.drawLine(13, 6, 13, 12, matrix.Color333(0, 7, 7));

matrix.drawLine(14, 6, 14, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(15, 6, 15, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(16, 6, 16, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(17, 6, 17, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(18, 6, 18, 14, matrix.Color333(0, 7, 7));

matrix.drawLine(19, 6, 19, 12, matrix.Color333(0, 7, 7));
  delay(100);
  matrix.fillScreen(matrix.Color333(0, 0, 0));

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~GLASS ANIMATION 7
//CUP
//CUP FROM HERE ON SHOULD BS STATIONARY
matrix.drawLine(12, 4, 20, 4, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(20, 4, 20, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(13, 13, 13, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(19, 13, 19, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 15, 18, 15, matrix.Color333(7, 7, 7));
//WATER
matrix.drawLine(13, 7, 13, 12, matrix.Color333(0, 7, 7));

matrix.drawLine(14, 7, 14, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(15, 7, 15, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(16, 6, 16, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(17, 5, 17, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(18, 5, 18, 14, matrix.Color333(0, 7, 7));

matrix.drawLine(19, 5, 19, 12, matrix.Color333(0, 7, 7));
  delay(100);
  matrix.fillScreen(matrix.Color333(0, 0, 0));

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~GLASS ANIMATION 8
//CUP
//CUP FROM HERE ON SHOULD BS STATIONARY
matrix.drawLine(12, 4, 20, 4, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(20, 4, 20, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(13, 13, 13, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(19, 13, 19, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 15, 18, 15, matrix.Color333(7, 7, 7));
//WATER
matrix.drawLine(13, 9, 13, 12, matrix.Color333(0, 7, 7));

matrix.drawLine(14, 8, 14, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(15, 7, 15, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(16, 6, 16, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(17, 5, 17, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(18, 5, 18, 14, matrix.Color333(0, 7, 7));

matrix.drawLine(19, 5, 19, 12, matrix.Color333(0, 7, 7));

//WATER DRIP
matrix.drawLine(19, 3, 20, 3, matrix.Color333(0, 7, 7));

  delay(100);
  matrix.fillScreen(matrix.Color333(0, 0, 0));

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~GLASS ANIMATION 9
//CUP
//CUP FROM HERE ON SHOULD BS STATIONARY
matrix.drawLine(12, 4, 20, 4, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(20, 4, 20, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(13, 13, 13, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(19, 13, 19, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 15, 18, 15, matrix.Color333(7, 7, 7));
//WATER
matrix.drawLine(13, 10, 13, 12, matrix.Color333(0, 7, 7));

matrix.drawLine(14, 9, 14, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(15, 8, 15, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(16, 7, 16, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(17, 6, 17, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(18, 5, 18, 14, matrix.Color333(0, 7, 7));

matrix.drawLine(19, 5, 19, 12, matrix.Color333(0, 7, 7));

//WATER DRIP
matrix.drawLine(19, 3, 20, 3, matrix.Color333(0, 7, 7));
matrix.drawLine(20, 2, 21, 2, matrix.Color333(0, 7, 7));


  delay(100);
  matrix.fillScreen(matrix.Color333(0, 0, 0));

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~GLASS ANIMATION 10
//CUP
//CUP FROM HERE ON SHOULD BS STATIONARY
matrix.drawLine(12, 4, 20, 4, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(20, 4, 20, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(13, 13, 13, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(19, 13, 19, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 15, 18, 15, matrix.Color333(7, 7, 7));
//WATER
matrix.drawLine(13, 9, 13, 12, matrix.Color333(0, 7, 7));

matrix.drawLine(14, 8, 14, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(15, 7, 15, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(16, 6, 16, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(17, 6, 17, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(18, 5, 18, 14, matrix.Color333(0, 7, 7));

matrix.drawLine(19, 5, 19, 12, matrix.Color333(0, 7, 7));

//WATER DRIP
matrix.drawLine(19, 3, 21, 3, matrix.Color333(0, 7, 7));
matrix.drawLine(21, 3, 21, 4, matrix.Color333(0, 7, 7));


  delay(100);
  matrix.fillScreen(matrix.Color333(0, 0, 0));


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~GLASS ANIMATION 11
//CUP
//CUP FROM HERE ON SHOULD BS STATIONARY
matrix.drawLine(12, 4, 20, 4, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(20, 4, 20, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(13, 13, 13, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(19, 13, 19, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 15, 18, 15, matrix.Color333(7, 7, 7));
//WATER
matrix.drawLine(13, 8, 13, 12, matrix.Color333(0, 7, 7));

matrix.drawLine(14, 7, 14, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(15, 6, 15, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(16, 6, 16, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(17, 6, 17, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(18, 6, 18, 14, matrix.Color333(0, 7, 7));

matrix.drawLine(19, 5, 19, 12, matrix.Color333(0, 7, 7));

//WATER DRIP
matrix.drawLine(21, 4, 21, 6, matrix.Color333(0, 7, 7));


  delay(100);
  matrix.fillScreen(matrix.Color333(0, 0, 0));


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~GLASS ANIMATION 12
//CUP
//CUP FROM HERE ON SHOULD BS STATIONARY
matrix.drawLine(12, 4, 20, 4, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(20, 4, 20, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(13, 13, 13, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(19, 13, 19, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 15, 18, 15, matrix.Color333(7, 7, 7));
//WATER
matrix.drawLine(13, 6, 13, 12, matrix.Color333(0, 7, 7));

matrix.drawLine(14, 6, 14, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(15, 6, 15, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(16, 6, 16, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(17, 6, 17, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(18, 6, 18, 14, matrix.Color333(0, 7, 7));

matrix.drawLine(19, 6, 19, 12, matrix.Color333(0, 7, 7));

//WATER DRIP
matrix.drawLine(21, 6, 21, 8, matrix.Color333(0, 7, 7));


  delay(100);
  matrix.fillScreen(matrix.Color333(0, 0, 0));

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~GLASS ANIMATION 13
//CUP
//CUP FROM HERE ON SHOULD BS STATIONARY
matrix.drawLine(12, 4, 20, 4, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(20, 4, 20, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(13, 13, 13, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(19, 13, 19, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 15, 18, 15, matrix.Color333(7, 7, 7));
//WATER
matrix.drawLine(13, 5, 13, 12, matrix.Color333(0, 7, 7));

matrix.drawLine(14, 6, 14, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(15, 6, 15, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(16, 6, 16, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(17, 6, 17, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(18, 6, 18, 14, matrix.Color333(0, 7, 7));

matrix.drawLine(19, 7, 19, 12, matrix.Color333(0, 7, 7));

//WATER DRIP
matrix.drawLine(21, 8, 21, 10, matrix.Color333(0, 7, 7));


  delay(100);
  matrix.fillScreen(matrix.Color333(0, 0, 0));

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~GLASS ANIMATION 14
//CUP
//CUP FROM HERE ON SHOULD BS STATIONARY
matrix.drawLine(12, 4, 20, 4, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(20, 4, 20, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(13, 13, 13, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(19, 13, 19, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 15, 18, 15, matrix.Color333(7, 7, 7));
//WATER
matrix.drawLine(13, 5, 13, 12, matrix.Color333(0, 7, 7));

matrix.drawLine(14, 5, 14, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(15, 6, 15, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(16, 6, 16, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(17, 6, 17, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(18, 7, 18, 14, matrix.Color333(0, 7, 7));

matrix.drawLine(19, 8, 19, 12, matrix.Color333(0, 7, 7));

//WATER DRIP
matrix.drawLine(21, 10, 21, 12, matrix.Color333(0, 7, 7));


  delay(100);
  matrix.fillScreen(matrix.Color333(0, 0, 0));

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~GLASS ANIMATION 15
//CUP
//CUP FROM HERE ON SHOULD BS STATIONARY
matrix.drawLine(12, 4, 20, 4, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(20, 4, 20, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(13, 13, 13, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(19, 13, 19, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 15, 18, 15, matrix.Color333(7, 7, 7));
//WATER
matrix.drawLine(13, 5, 13, 12, matrix.Color333(0, 7, 7));

matrix.drawLine(14, 6, 14, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(15, 6, 15, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(16, 6, 16, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(17, 6, 17, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(18, 7, 18, 14, matrix.Color333(0, 7, 7));

matrix.drawLine(19, 7, 19, 12, matrix.Color333(0, 7, 7));

//WATER DRIP
matrix.drawLine(21, 12, 21, 12, matrix.Color333(0, 7, 7));
matrix.drawLine(20, 13, 20, 14, matrix.Color333(0, 7, 7));



  delay(100);
  matrix.fillScreen(matrix.Color333(0, 0, 0));

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~GLASS ANIMATION 16
//CUP
//CUP FROM HERE ON SHOULD BS STATIONARY
matrix.drawLine(12, 4, 20, 4, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(20, 4, 20, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(13, 13, 13, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(19, 13, 19, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 15, 18, 15, matrix.Color333(7, 7, 7));
//WATER
matrix.drawLine(13, 6, 13, 12, matrix.Color333(0, 7, 7));

matrix.drawLine(14, 6, 14, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(15, 6, 15, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(16, 6, 16, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(17, 6, 17, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(18, 6, 18, 14, matrix.Color333(0, 7, 7));

matrix.drawLine(19, 6, 19, 12, matrix.Color333(0, 7, 7));

//WATER DRIP
matrix.drawLine(20, 14, 20, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(19, 15, 19, 15, matrix.Color333(0, 7, 7));



  delay(100);
  matrix.fillScreen(matrix.Color333(0, 0, 0));

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~GLASS ANIMATION 17
//CUP
//CUP FROM HERE ON SHOULD BS STATIONARY
matrix.drawLine(12, 4, 20, 4, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(20, 4, 20, 12, matrix.Color333(7, 7, 7));
matrix.drawLine(13, 13, 13, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(19, 13, 19, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 15, 18, 15, matrix.Color333(7, 7, 7));
//WATER
matrix.drawLine(13, 6, 13, 12, matrix.Color333(0, 7, 7));

matrix.drawLine(14, 6, 14, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(15, 6, 15, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(16, 6, 16, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(17, 6, 17, 14, matrix.Color333(0, 7, 7));
matrix.drawLine(18, 6, 18, 14, matrix.Color333(0, 7, 7));

matrix.drawLine(19, 6, 19, 12, matrix.Color333(0, 7, 7));

  delay(3000);
  matrix.fillScreen(matrix.Color333(0, 0, 0));
  delay(90000);
// 15 MINUTE DELAY BETWEEN REMINDERS

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~MESSAGE 1

  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('Y');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('o');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('u');
   matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('o');
   matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('o');
  
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('T');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('a');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('k');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('e');

  delay(2000);
  matrix.fillScreen(matrix.Color333(0, 0, 0));
matrix.setCursor(1, 0);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~MESSAGE 2
  
   matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('T');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('a');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('k');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('e');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('e');
  
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('a');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('o');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('o');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('o');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('o');
  
   delay(2000);
  matrix.fillScreen(matrix.Color333(0, 0, 0));
  matrix.setCursor(1, 0);

 //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~MESSAGE 3
  
   matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('a');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('e');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('e');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('e');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('e');
  
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('B');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('r');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('e');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('a');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('k');
  
   delay(2000);
  matrix.fillScreen(matrix.Color333(0, 0, 0));
  matrix.setCursor(1, 0);

  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~MESSAGE 4
  
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('B');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('r');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('e');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('a');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('k');
  
   delay(2000);
  matrix.fillScreen(matrix.Color333(0, 0, 0));
  matrix.setCursor(1, 0);

 matrix.fillScreen(matrix.Color333(0, 0, 0));
  delay(90000);
// 15 MINUTE DELAY BETWEEN REMINDERS

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~MESSAGE 1

  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('S');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('t');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('a');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('n');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('d');
  
    matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('G');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('e');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('t');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('n');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('k');

  delay(1500);
  matrix.fillScreen(matrix.Color333(0, 0, 0));
matrix.setCursor(1, 0);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~MESSAGE 2
   matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('G');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('e');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('t');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('n');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('k');

  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('S');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('o');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('m');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('e');
  
  delay(1500);
  matrix.fillScreen(matrix.Color333(0, 0, 0));
    matrix.fillScreen(matrix.Color333(0, 0, 0));
matrix.setCursor(1, 0);
  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~MESSAGE 3
    matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('S');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('o');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('m');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('e');  
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('e');

  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('F');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('r');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('e');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('s');
   matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('h');
  
  delay(1500);
  matrix.fillScreen(matrix.Color333(0, 0, 0));
  matrix.setCursor(1, 0);
  

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~MESSAGE 4
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('F');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('r');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('e');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('s');  
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('h');

  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('A');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('i');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('r');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('s');
   matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('h');
  
  delay(1500);
  matrix.fillScreen(matrix.Color333(0, 0, 0));
  matrix.setCursor(1, 0);

  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~MESSAGE 5
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('A');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('i');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('r');
 
  
  delay(1500);
  matrix.fillScreen(matrix.Color333(0, 0, 0));
  delay(1000);
}
void loop() {
  // Do nothing -- image doesn't change
}
