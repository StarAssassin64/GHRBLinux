#include <stdint.h>

struct ControllerLayout
{
  uint8_t BTN_GPB0 : 1;  // a
  uint8_t BTN_GPB1 : 1;  // b
  uint8_t BTN_GPB2 : 1;  // 1
  uint8_t BTN_GPB3 : 1;  // 2
  uint8_t BTN_GPB4 : 1;  // start
  uint8_t BTN_GPB5 : 1;  // select
  uint8_t BTN_GPB6 : 1;  // home
  uint8_t BTN_GPB7 : 1;  // green
  uint8_t BTN_GPB8 : 1;  // red
  uint8_t BTN_GPB9 : 1;  // blue
  uint8_t BTN_GPB10 : 1; // orange
  uint8_t BTN_GPB11 : 1; // yellow cym
  uint8_t BTN_GPB12 : 1; // blue cym
  uint8_t BTN_GPB13 : 1; // green cym
  uint8_t DP_GPDPad : 4; // DPad
};
