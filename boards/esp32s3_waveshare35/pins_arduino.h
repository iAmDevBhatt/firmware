#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include "soc/soc_caps.h"
#include <stdint.h>

#ifndef DEVICE_NAME
#define DEVICE_NAME "Waveshare ESP32-S3 Touch LCD 3.5"
#endif
#define SDA 8   // Serial data
#define SCL 5   // Serial clock
#define MISO -1 // Master In Slave Out (not used by ST7796)
#define MOSI 4  // Master Out Slave In
#define SS 12   // Chip select/Slave select
#define DC 3    // Data/Command control pin
#define RST 1   // Reset pin (could connect to RST pin)
#define SCK SCL // Serial clock

#define TOUCH_SDA SDA
#define TOUCH_SCL 7
#define TOUCH_INT 2

#define TFT_MISO MISO
#define TFT_MOSI MOSI
#define TFT_SCLK SCK // Serial clock
#define TFT_CS SS    // Chip select control pin
#define TFT_DC DC    // Data Command control pin
#define TFT_RST RST  // Reset pin (could connect to RST pin)
#define LCD_BL 6
#define GFX_BL LCD_BL
#define TFT_BACKLIGHT_ON HIGH
#define TFT_WIDTH 320
#define TFT_HEIGHT 480
#define TFT_RGB_ORDER TFT_RGB
// #define TFT_RST  -1 // Set TFT_RST to -1 if display RESET is connected to ESP32 board RST

#define SPI_SS_PIN TFT_CS
#define SPI_MOSI_PIN TFT_MOSI
#define SPI_MISO_PIN TFT_MISO
#define SPI_SCK_PIN TFT_SCLK

#define TOUCH_CS -1 // Chip select pin (T_CS) of touch screen
#define LOAD_GLCD   // Font 1. Original Adafruit 8 pixel font needs ~1820 bytes in FLASH
#define LOAD_FONT2  // Font 2. Small 16 pixel high font, needs ~3534 bytes in FLASH, 96 characters
#define LOAD_FONT4  // Font 4. Medium 26 pixel high font, needs ~5848 bytes in FLASH, 96 characters
#define LOAD_FONT6  // Font 6. Large 48 pixel font, needs ~2666 bytes in FLASH, only characters
                    // 1234567890:-.apm
#define LOAD_FONT7  // Font 7. 7 segment 48 pixel font, needs ~2438 bytes in FLASH, only characters
                    // 1234567890:.
#define LOAD_FONT8  // Font 8. Large 75 pixel font needs ~3256 bytes in FLASH, only characters 1234567890:-.
// #define LOAD_FONT8N // Font 8. Alternative to Font 8 above, slightly narrower, so 3 digits fit a 160 pixel
// TFT
#define LOAD_GFXFF // FreeFonts. Include access to the 48 Adafruit_GFX free fonts FF1 to FF48 and custom fonts

// Comment out the #define below to stop the SPIFFS filing system and smooth font code being loaded
// this will save ~20kbytes of FLASH
#define SMOOTH_FONT 1

// #define SPI_FREQUENCY  20000000
// #define SPI_FREQUENCY  40000000
#define SPI_FREQUENCY 40000000

// The XPT2046 requires a lower SPI clock rate of 2.5MHz so we define that here:
#define SPI_TOUCH_FREQUENCY 2500000

#define LCD_QSPI_CS 12
#define LCD_QSPI_CLK 5
#define LCD_QSPI_D0 1
#define LCD_QSPI_D1 2
#define LCD_QSPI_D2 3
#define LCD_QSPI_D3 4

#define ROTATION 0

#define TFT_SWRST -1
#define TFT_INIT_DELAY -1
#define TFT_CASET -1
#define TFT_WRITE_BITS -1
#define TFT_PASET -1
#define TFT_RAMWR -1
#define TFT_RAMRD -1
// #define ROTATION 1
// #define ROTATION 2
// #define ROTATION 3

#endif /* Pins_Arduino_h */
