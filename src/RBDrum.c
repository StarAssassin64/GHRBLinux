#include <stdint.h>

struct ControllerLayout
{
    uint8_t BTN_GPB0 :  1;  // a            0x00090001: Primary, Value = 0 to 1, Physical = Value
    uint8_t BTN_GPB1 :  1;  // b            0x00090002: Secondary, Value = 0 to 1, Physical = Value
    uint8_t BTN_GPB2 :  1;  // 1            0x00090003: Tertiary, Value 0 to 1, Physical = Value
    uint8_t BTN_GPB3 :  1;  // 2            0x00090004: Value = 0 to 1, Physical = Value
    uint8_t BTN_GPB4 :  1;  // start        0x00090005: Value = 0 to 1, Physical = Value
    uint8_t BTN_GPB5 :  1;  // select       0x00090006: Value = 0 to 1, Physical = Value
    uint8_t BTN_GPB6 :  1;  // home         0x00090007: Value = 0 to 1, Physical = Value
    uint8_t BTN_GPB7 :  1;  // green        0x00090008: Value = 0 to 1, Physical = Value
    uint8_t BTN_GPB8 :  1;  // yellow       0x00090009: Value = 0 to 1, Physical = Value
    uint8_t BTN_GPB9 :  1;  // red          0x00090009: Value = 0 to 1, Physical = Value
    uint8_t BTN_GPB10 : 1;  // blue         0x0009000a: Value = 0 to 1, Physical = Value
    uint8_t BTN_GPB11 : 1; // orange        0x0009000b: Value = 0 to 1, Physical = Value
    uint8_t BTN_GPB12 : 1; // yellow cym    0x0009000c: Value = 0 to 1, Physical = Value
    uint8_t BTN_GPB13 : 1; // blue cym      0x0009000d: Value = 0 to 1, Physical = Value
    uint8_t BTN_GPB14 : 1; // green cym     0x0009000e: Value = 0 to 1, Physical = Value
    uint8_t DP_GPDPad : 4; // DPad          0x00010030: Value = 0 to 7, Physical = Value x 45 in deg
};

enum LEDs
{
    LED1 = 0x10,
    LED2 = 0x20,
    LED3 = 0x40,
    LED4 = 0x80,
};
