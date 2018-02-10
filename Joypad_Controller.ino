#include <JoypadInput.h>

Control control;

/*
   For Joystick

   int joystick1 = control.joystick1(); (or control.joystick2(); )

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

   int buttonPress = control.button();

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
  int joystick1 = control.joystick1();
  int joystick2 = control.joystick2();
  int buttonPress = control.button();
  Serial.println("Joystick 1 Input: ");
  Serial.print(joystick1);
  Serial.println("Joystick 2 Input: ");
  Serial.print(joystick2);
  Serial.println("Button Input: ");
  Serial.print(buttonPress);
  delay(100);
}









