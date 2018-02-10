#include "JoypadInput.h"
#include "Arduino.h"

#define JOY_PIN_0 0
#define JOY_PIN_1 1

#define JOY_PIN_2 2
#define JOY_PIN_3 3

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

int Control::joystick1() {
  Control::findJoystickInput(JOY_PIN_0, JOY_PIN_1);
}

int Control::joystick2() {
  Control::findJoystickInput(JOY_PIN_2, JOY_PIN_3);
}

int Control::findJoystickInput(int joyPinX, int joyPinY) {

  int joyX;
  int joyY;
  int joyPosX = analogRead(joyPinX);
  int joyPosY = analogRead(joyPinY);

  if (joyPosX > 500) {
    if (joyPosX < 600) {
      joyX = 0;
    }
    if (joyPosX > 600) {
      joyX = 1;
    }
  }
  if (joyPosX < 500) {
    joyX = 2;
  }
  if (joyPosX = 0) {
    joyX = 0;
  }

  if (joyPosY > 500) {
    if (joyPosY < 600) {
      joyY = 0;
    }
    if (joyPosY > 600) {
      joyY = 1;
    }
    if (joyPosY < 500) {
      joyY = 2;
    }
  }
  if (joyPosY = 0) {
    joyY = 0;
  }

  int output;

  if (joyX = 0) {
    if (joyY = 0) {
      output = 0;
    }
    if (joyY = 1) {
      output = 3;
    }
    if (joyY = 2) {
      output = 4;
    }
  }
  if (joyX = 1) {
    if (joyY = 0) {
      output = 1;
    }
    if (joyY = 1) {
      output = 6;
    }
    if (joyY = 2) {
      output = 5;
    }
  }
  if (joyX = 2) {
    if (joyY = 0) {
      output = 2;
    }
    if (joyY = 1) {
      output = 8;
    }
    if (joyY = 2) {
      output = 7;
    }
  }
  return output;
}

int Control::button() {
  int aButton = digitalRead(A_BUTTON);
  int bButton = digitalRead(B_BUTTON);
  int xButton = digitalRead(X_BUTTON);
  int yButton = digitalRead(Y_BUTTON);
  int dPadUp = digitalRead(D_PAD_UP);
  int dPadDown = digitalRead(D_PAD_DOWN);
  int dPadLeft = digitalRead(D_PAD_LEFT);
  int dPadRight = digitalRead(D_PAD_RIGHT);
  int startButton = digitalRead(START_BUTTON);
  int selectButton = digitalRead(SELECT_BUTTON);
  int R1Button = digitalRead(D_PAD_UP);
  int R2Button = digitalRead(D_PAD_DOWN);
  int L1Button = digitalRead(D_PAD_LEFT);
  int L2Button = digitalRead(D_PAD_RIGHT);
  if (aButton = HIGH) {
    return 1;
  }
  if (bButton = HIGH) {
    return 2;
  }
  if (xButton = HIGH) {
    return 3;
  }
  if (yButton = HIGH) {
    return 4;
  }
  if (dPadUp = HIGH) {
    return 5;
  }
  if (dPadDown = HIGH) {
    return 6;
  }
  if (dPadLeft = HIGH) {
    return 7;
  }
  if (dPadRight = HIGH) {
    return 8;
  }
  if (startButton = HIGH) {
    return 9;
  }
  if (selectButton = HIGH) {
    return 10;
  }
  if (R1Button = HIGH) {
    return 11;
  }
  if (R2Button = HIGH) {
    return 12;
  }
  if (L1Button = HIGH) {
    return 13;
  }
  if (L2Button = HIGH) {
    return 14;
  }
  return 0;
}
 