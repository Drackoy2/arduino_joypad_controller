{\rtf1\ansi\deff0\nouicompat{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Riched20 10.0.16299}\viewkind4\uc1 
\pard\sa200\sl276\slmult1\f0\fs22\lang9\par
\par
int findJoystick1() \{\par
  findJoystickInput(JOY_PIN_0, JOY_PIN_1);\par
\}\par
\par
int findJoystick2() \{\par
  findJoystickInput(JOY_PIN_2, JOY_PIN_3);\par
\}\par
\par
int findJoystickInput(int joyPinX, int joyPinY) \{\par
\par
  int joyX;\par
  int joyY;\par
  int joyPosX = analogRead(joyPinX);\par
  int joyPosY = analogRead(joyPinY);\par
\par
  if (joyPosX > 500) \{\par
    if (joyPosX < 600) \{\par
      joyX = 0;\par
    \}\par
    if (joyPosX > 600) \{\par
      joyX = 1;\par
    \}\par
  \}\par
  if (joyPosX < 500) \{\par
    joyX = 2;\par
  \}\par
  if (joyPosX = 0) \{\par
    joyX = 0;\par
  \}\par
\par
  if (joyPosY > 500) \{\par
    if (joyPosY < 600) \{\par
      joyY = 0;\par
    \}\par
    if (joyPosY > 600) \{\par
      joyY = 1;\par
    \}\par
    if (joyPosY < 500) \{\par
      joyY = 2;\par
    \}\par
  \}\par
  if (joyPosY = 0) \{\par
    joyY = 0;\par
  \}\par
\par
  int output;\par
\par
  if (joyX = 0) \{\par
    if (joyY = 0) \{\par
      output = 0;\par
    \}\par
    if (joyY = 1) \{\par
      output = 3;\par
    \}\par
    if (joyY = 2) \{\par
      output = 4;\par
    \}\par
  \}\par
  if (joyX = 1) \{\par
    if (joyY = 0) \{\par
      output = 1;\par
    \}\par
    if (joyY = 1) \{\par
      output = 6;\par
    \}\par
    if (joyY = 2) \{\par
      output = 5;\par
    \}\par
  \}\par
  if (joyX = 2) \{\par
    if (joyY = 0) \{\par
      output = 2;\par
    \}\par
    if (joyY = 1) \{\par
      output = 8;\par
    \}\par
    if (joyY = 2) \{\par
      output = 7;\par
    \}\par
  \}\par
  return output;\par
\}\par
\par
int findButtonInput() \{\par
  int aButton = digitalRead(A_BUTTON);\par
  int bButton = digitalRead(B_BUTTON);\par
  int xButton = digitalRead(X_BUTTON);\par
  int yButton = digitalRead(Y_BUTTON);\par
  int dPadUp = digitalRead(D_PAD_UP);\par
  int dPadDown = digitalRead(D_PAD_DOWN);\par
  int dPadLeft = digitalRead(D_PAD_LEFT);\par
  int dPadRight = digitalRead(D_PAD_RIGHT);\par
  int startButton = digitalRead(START_BUTTON);\par
  int selectButton = digitalRead(SELECT_BUTTON);\par
  int R1Button = digitalRead(D_PAD_UP);\par
  int R2Button = digitalRead(D_PAD_DOWN);\par
  int L1Button = digitalRead(D_PAD_LEFT);\par
  int L2Button = digitalRead(D_PAD_RIGHT);\par
  if (aButton = HIGH) \{\par
    return 1;\par
  \}\par
  if (bButton = HIGH) \{\par
    return 2;\par
  \}\par
  if (xButton = HIGH) \{\par
    return 3;\par
  \}\par
  if (yButton = HIGH) \{\par
    return 4;\par
  \}\par
  if (dPadUp = HIGH) \{\par
    return 5;\par
  \}\par
  if (dPadDown = HIGH) \{\par
    return 6;\par
  \}\par
  if (dPadLeft = HIGH) \{\par
    return 7;\par
  \}\par
  if (dPadRight = HIGH) \{\par
    return 8;\par
  \}\par
  if (startButton = HIGH) \{\par
    return 9;\par
  \}\par
  if (selectButton = HIGH) \{\par
    return 10;\par
  \}\par
  if (R1Button = HIGH) \{\par
    return 11;\par
  \}\par
  if (R2Button = HIGH) \{\par
    return 12;\par
  \}\par
  if (L1Button = HIGH) \{\par
    return 13;\par
  \}\par
  if (L2Button = HIGH) \{\par
    return 14;\par
  \}\par
  return 0;\par
\}\par
}
 