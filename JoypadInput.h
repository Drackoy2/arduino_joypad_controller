#ifndef JoypadInput_h
#define JoypadInput_h

class Control {
  public:
    int joystick1();
    int joystick2();
    int button();
  private:
    int findJoystickInput(int joyPinX, int joyPinY);
    int output;
    int aButton;
    int bButton;
    int xButton;
    int yButton;
    int dPadUp;
    int dPadDown;
    int dPadLeft;
    int dPadRight;
    int startButton;
    int selectButton;
    int R1Button;
    int R2Button;
    int L1Button;
    int L2Button;
    int joyY;
    int joyX;
    int joyPosY;
    int joyPosX;
    int joyPinY;
    int joyPinX;
};

#endif