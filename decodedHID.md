
//--------------------------------------------------------------------------------
// Decoded Application Collection
//--------------------------------------------------------------------------------

/*
05 01        (GLOBAL) USAGE_PAGE         0x0001 Generic Desktop Page 
09 05        (LOCAL)  USAGE              0x00010005 Game Pad (Application Collection)  
A1 01        (MAIN)   COLLECTION         0x01 Application (Usage=0x00010005: Page=Generic Desktop Page, Usage=Game Pad, Type=Application Collection)
15 00          (GLOBAL) LOGICAL_MINIMUM    0x00 (0)  <-- Info: Consider replacing 15 00 with 14
25 01          (GLOBAL) LOGICAL_MAXIMUM    0x01 (1)  
35 00          (GLOBAL) PHYSICAL_MINIMUM   0x00 (0)  <-- Info: Consider replacing 35 00 with 34
45 01          (GLOBAL) PHYSICAL_MAXIMUM   0x01 (1)  
75 01          (GLOBAL) REPORT_SIZE        0x01 (1) Number of bits per field  
95 0D          (GLOBAL) REPORT_COUNT       0x0D (13) Number of fields  
05 09          (GLOBAL) USAGE_PAGE         0x0009 Button Page 
19 01          (LOCAL)  USAGE_MINIMUM      0x00090001 Button 1 Primary/trigger (Selector, On/Off Control, Momentary Control, or One Shot Control)  
29 0D          (LOCAL)  USAGE_MAXIMUM      0x0009000D Button 13 (Selector, On/Off Control, Momentary Control, or One Shot Control)  
81 02          (MAIN)   INPUT              0x00000002 (13 fields x 1 bit) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
95 03          (GLOBAL) REPORT_COUNT       0x03 (3) Number of fields  
81 01          (MAIN)   INPUT              0x00000001 (3 fields x 1 bit) 1=Constant 0=Array 0=Absolute 
05 01          (GLOBAL) USAGE_PAGE         0x0001 Generic Desktop Page 
25 07          (GLOBAL) LOGICAL_MAXIMUM    0x07 (7)  
46 3B01        (GLOBAL) PHYSICAL_MAXIMUM   0x013B (315)  
75 04          (GLOBAL) REPORT_SIZE        0x04 (4) Number of bits per field  
95 01          (GLOBAL) REPORT_COUNT       0x01 (1) Number of fields  
65 14          (GLOBAL) UNIT               0x14 Rotation in degrees [1° units] (4=System=English Rotation, 1=Rotation=Degrees)  
09 39          (LOCAL)  USAGE              0x00010039 Hat switch (Dynamic Value)  
81 42          (MAIN)   INPUT              0x00000042 (1 field x 4 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 1=Null 0=NonVolatile 0=Bitmap 
65 00          (GLOBAL) UNIT               0x00 No unit (0=None)  <-- Info: Consider replacing 65 00 with 64
95 01          (GLOBAL) REPORT_COUNT       0x01 (1) Number of fields <-- Redundant: REPORT_COUNT is already 1 
81 01          (MAIN)   INPUT              0x00000001 (1 field x 4 bits) 1=Constant 0=Array 0=Absolute 
26 FF00        (GLOBAL) LOGICAL_MAXIMUM    0x00FF (255)  
46 FF00        (GLOBAL) PHYSICAL_MAXIMUM   0x00FF (255)  
09 30          (LOCAL)  USAGE              0x00010030 X (Dynamic Value)  
09 31          (LOCAL)  USAGE              0x00010031 Y (Dynamic Value)  
09 32          (LOCAL)  USAGE              0x00010032 Z (Dynamic Value)  
09 35          (LOCAL)  USAGE              0x00010035 Rz (Dynamic Value)  
75 08          (GLOBAL) REPORT_SIZE        0x08 (8) Number of bits per field  
95 04          (GLOBAL) REPORT_COUNT       0x04 (4) Number of fields  
81 02          (MAIN)   INPUT              0x00000002 (4 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
06 00FF        (GLOBAL) USAGE_PAGE         0xFF00 Vendor-defined 
09 20          (LOCAL)  USAGE              0xFF000020 <-- Warning: Undocumented usage (document it by inserting 0020 into file FF00.conf)
09 21          (LOCAL)  USAGE              0xFF000021 <-- Warning: Undocumented usage (document it by inserting 0021 into file FF00.conf)
09 22          (LOCAL)  USAGE              0xFF000022 <-- Warning: Undocumented usage (document it by inserting 0022 into file FF00.conf)
09 23          (LOCAL)  USAGE              0xFF000023 <-- Warning: Undocumented usage (document it by inserting 0023 into file FF00.conf)
09 24          (LOCAL)  USAGE              0xFF000024 <-- Warning: Undocumented usage (document it by inserting 0024 into file FF00.conf)
09 25          (LOCAL)  USAGE              0xFF000025 <-- Warning: Undocumented usage (document it by inserting 0025 into file FF00.conf)
09 26          (LOCAL)  USAGE              0xFF000026 <-- Warning: Undocumented usage (document it by inserting 0026 into file FF00.conf)
09 27          (LOCAL)  USAGE              0xFF000027 <-- Warning: Undocumented usage (document it by inserting 0027 into file FF00.conf)
09 28          (LOCAL)  USAGE              0xFF000028 <-- Warning: Undocumented usage (document it by inserting 0028 into file FF00.conf)
09 29          (LOCAL)  USAGE              0xFF000029 <-- Warning: Undocumented usage (document it by inserting 0029 into file FF00.conf)
09 2A          (LOCAL)  USAGE              0xFF00002A <-- Warning: Undocumented usage (document it by inserting 002A into file FF00.conf)
09 2B          (LOCAL)  USAGE              0xFF00002B <-- Warning: Undocumented usage (document it by inserting 002B into file FF00.conf)
95 0C          (GLOBAL) REPORT_COUNT       0x0C (12) Number of fields  
81 02          (MAIN)   INPUT              0x00000002 (12 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
0A 2126        (LOCAL)  USAGE              0xFF002621 <-- Warning: Undocumented usage (document it by inserting 2621 into file FF00.conf)
95 08          (GLOBAL) REPORT_COUNT       0x08 (8) Number of fields  
B1 02          (MAIN)   FEATURE            0x00000002 (8 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
0A 2126        (LOCAL)  USAGE              0xFF002621 <-- Warning: Undocumented usage (document it by inserting 2621 into file FF00.conf)
91 02          (MAIN)   OUTPUT             0x00000002 (8 fields x 8 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
26 FF03        (GLOBAL) LOGICAL_MAXIMUM    0x03FF (1023)  
46 FF03        (GLOBAL) PHYSICAL_MAXIMUM   0x03FF (1023)  
09 2C          (LOCAL)  USAGE              0xFF00002C <-- Warning: Undocumented usage (document it by inserting 002C into file FF00.conf)
09 2D          (LOCAL)  USAGE              0xFF00002D <-- Warning: Undocumented usage (document it by inserting 002D into file FF00.conf)
09 2E          (LOCAL)  USAGE              0xFF00002E <-- Warning: Undocumented usage (document it by inserting 002E into file FF00.conf)
09 2F          (LOCAL)  USAGE              0xFF00002F <-- Warning: Undocumented usage (document it by inserting 002F into file FF00.conf)
75 10          (GLOBAL) REPORT_SIZE        0x10 (16) Number of bits per field  
95 04          (GLOBAL) REPORT_COUNT       0x04 (4) Number of fields  
81 02          (MAIN)   INPUT              0x00000002 (4 fields x 16 bits) 0=Data 1=Variable 0=Absolute 0=NoWrap 0=Linear 0=PrefState 0=NoNull 0=NonVolatile 0=Bitmap 
C0           (MAIN)   END_COLLECTION     Application  <-- Warning: Physical units are still in effect PHYSICAL(MIN=0,MAX=1023) UNIT(0x00000000,EXP=0)
*/

//--------------------------------------------------------------------------------
// Vendor-defined featureReport (Device <-> Host)
//--------------------------------------------------------------------------------

typedef struct
{
                                                     // No REPORT ID byte
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad2621[8];                       // Usage 0xFF002621: , Value = 0 to 255, Physical = Value
} featureReport_t;


//--------------------------------------------------------------------------------
// Button Page inputReport (Device --> Host)
//--------------------------------------------------------------------------------

typedef struct
{
                                                     // No REPORT ID byte
                                                     // Collection: CA:GamePad
  uint8_t  BTN_GamePadButton1 : 1;                   // Usage 0x00090001: Button 1 Primary/trigger, Value = 0 to 1, Physical = Value
  uint8_t  BTN_GamePadButton2 : 1;                   // Usage 0x00090002: Button 2 Secondary, Value = 0 to 1, Physical = Value
  uint8_t  BTN_GamePadButton3 : 1;                   // Usage 0x00090003: Button 3 Tertiary, Value = 0 to 1, Physical = Value
  uint8_t  BTN_GamePadButton4 : 1;                   // Usage 0x00090004: Button 4, Value = 0 to 1, Physical = Value
  uint8_t  BTN_GamePadButton5 : 1;                   // Usage 0x00090005: Button 5, Value = 0 to 1, Physical = Value
  uint8_t  BTN_GamePadButton6 : 1;                   // Usage 0x00090006: Button 6, Value = 0 to 1, Physical = Value
  uint8_t  BTN_GamePadButton7 : 1;                   // Usage 0x00090007: Button 7, Value = 0 to 1, Physical = Value
  uint8_t  BTN_GamePadButton8 : 1;                   // Usage 0x00090008: Button 8, Value = 0 to 1, Physical = Value
  uint8_t  BTN_GamePadButton9 : 1;                   // Usage 0x00090009: Button 9, Value = 0 to 1, Physical = Value
  uint8_t  BTN_GamePadButton10 : 1;                  // Usage 0x0009000A: Button 10, Value = 0 to 1, Physical = Value
  uint8_t  BTN_GamePadButton11 : 1;                  // Usage 0x0009000B: Button 11, Value = 0 to 1, Physical = Value
  uint8_t  BTN_GamePadButton12 : 1;                  // Usage 0x0009000C: Button 12, Value = 0 to 1, Physical = Value
  uint8_t  BTN_GamePadButton13 : 1;                  // Usage 0x0009000D: Button 13, Value = 0 to 1, Physical = Value
  uint8_t  : 1;                                      // Pad
  uint8_t  : 1;                                      // Pad
  uint8_t  : 1;                                      // Pad
  uint8_t  GD_GamePadHatSwitch : 4;                  // Usage 0x00010039: Hat switch, Value = 0 to 7, Physical = Value x 45 in degrees
  uint8_t  : 4;                                      // Pad
  uint8_t  GD_GamePadX;                              // Usage 0x00010030: X, Value = 0 to 255, Physical = Value
  uint8_t  GD_GamePadY;                              // Usage 0x00010031: Y, Value = 0 to 255, Physical = Value
  uint8_t  GD_GamePadZ;                              // Usage 0x00010032: Z, Value = 0 to 255, Physical = Value
  uint8_t  GD_GamePadRz;                             // Usage 0x00010035: Rz, Value = 0 to 255, Physical = Value
  uint8_t  VEN_GamePad0020;                          // Usage 0xFF000020: , Value = 0 to 255, Physical = Value
  uint8_t  VEN_GamePad0021;                          // Usage 0xFF000021: , Value = 0 to 255, Physical = Value
  uint8_t  VEN_GamePad0022;                          // Usage 0xFF000022: , Value = 0 to 255, Physical = Value
  uint8_t  VEN_GamePad0023;                          // Usage 0xFF000023: , Value = 0 to 255, Physical = Value
  uint8_t  VEN_GamePad0024;                          // Usage 0xFF000024: , Value = 0 to 255, Physical = Value
  uint8_t  VEN_GamePad0025;                          // Usage 0xFF000025: , Value = 0 to 255, Physical = Value
  uint8_t  VEN_GamePad0026;                          // Usage 0xFF000026: , Value = 0 to 255, Physical = Value
  uint8_t  VEN_GamePad0027;                          // Usage 0xFF000027: , Value = 0 to 255, Physical = Value
  uint8_t  VEN_GamePad0028;                          // Usage 0xFF000028: , Value = 0 to 255, Physical = Value
  uint8_t  VEN_GamePad0029;                          // Usage 0xFF000029: , Value = 0 to 255, Physical = Value
  uint8_t  VEN_GamePad002A;                          // Usage 0xFF00002A: , Value = 0 to 255, Physical = Value
  uint8_t  VEN_GamePad002B;                          // Usage 0xFF00002B: , Value = 0 to 255, Physical = Value
  uint16_t VEN_GamePad002C;                          // Usage 0xFF00002C: , Value = 0 to 1023, Physical = Value
  uint16_t VEN_GamePad002D;                          // Usage 0xFF00002D: , Value = 0 to 1023, Physical = Value
  uint16_t VEN_GamePad002E;                          // Usage 0xFF00002E: , Value = 0 to 1023, Physical = Value
  uint16_t VEN_GamePad002F;                          // Usage 0xFF00002F: , Value = 0 to 1023, Physical = Value
} inputReport_t;


//--------------------------------------------------------------------------------
// Vendor-defined outputReport (Device <-- Host)
//--------------------------------------------------------------------------------

typedef struct
{
                                                     // No REPORT ID byte
                                                     // Collection: CA:GamePad
  uint8_t  VEN_GamePad2621[8];                       // Usage 0xFF002621: , Value = 0 to 255, Physical = Value
} outputReport_t;
