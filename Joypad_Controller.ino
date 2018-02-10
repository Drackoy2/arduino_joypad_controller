#include <JoypadInput.h>

/*Analog Joystick Pins*/
#define JOY_PIN_0 0 /*X Axis for Joystick 1*/
#define JOY_PIN_1 1 /*Y Axis for Joystick 1*/

#define JOY_PIN_2 2 /*X Axis for Joystick 2*/
#define JOY_PIN_3 3 /*Y Axis for Joystick 2*/

/*Button Pins*/
#define A_BUTTON 2
#define B_BUTTON 3
#define X_BUTTON 4
#define Y_BUTTON 5
#define D_PAD_UP 6
#define D_PAD_DOWN 7
#define D_PAD_LEFT 8
#define D_PAD_RIGHT 9
#define START_BUTTON 10
#define SELECT_BUTTON 11
#define R1_BUTTON 12
#define R2_BUTTON 13
#define L1_BUTTON 14
#define L2_BUTTON 15

/*
   For Joystick

   int joystick1 = findJoystick1();

   Outputs (what joystick1 will equal)

   Joystick Center 0
   Joystick Up 1
   Joystick Down 2
   Joystick Left 3
   Joystick Right 4
   Joystick Top Left 5
   Joystick Top Right 6
   Joystick Bottom Left 7
   Joystick Bottom Right 8



   For Buttons

   int buttonPress = findButtonInput();

   Outputs (what buttonPress will equal)

   A Button 1
   B Button 2
   X Button 3
   Y Button 4
   D-Pad Up 5
   D-Pad Down 6
   D-Pad Left 7
   D-Pad Right 8
   Start Button 9
   Select Button 10
   R1 Button 11
   R2 Button 12
   L1 Button 13
   L2 Button 14

*/

void setup() {
  Serial.begin(9600);
}

void loop() {
  int joystick1 = findJoystick1();
  int joystick2 = findJoystick2();
  int buttonPress = findButtonInput();
  Serial.println("Joystick 1 Input: ");
  Serial.print(joystick1);
  Serial.println("Joystick 2 Input: ");
  Serial.print(joystick2);
  Serial.println("Button Input: ");
  Serial.print(buttonPress);
  delay(100);
}









