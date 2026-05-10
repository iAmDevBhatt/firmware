#include "core/powerSave.h"
#include "core/utils.h"
#include <Wire.h>
#include <interface.h>

/* #include <TouchDrv.hpp>
TouchDrvFT6X36 touch; */

/***************************************************************************************
** Function name: _setup_gpio()
** Description:   initial setup for the device
***************************************************************************************/
void _setup_gpio() {

}

/***************************************************************************************
** Function name: _post_setup_gpio()
** Description:   second stage gpio setup (PWM backlight)
***************************************************************************************/
void _post_setup_gpio() {
   
}

/***************************************************************************************
** Function name: getBattery()
** Description:   No battery monitoring on Waveshare board
***************************************************************************************/
int getBattery() { return 0; }

/***************************************************************************************
** Function name: isCharging()
** Description:   No charging detection
***************************************************************************************/
bool isCharging() { return false; }

/*********************************************************************
** Function: setBrightness
** Description:   Set brightness value (0–100%)
**********************************************************************/
void _setBrightness(uint8_t brightval) {
    int dutyCycle = (brightval * 255) / 100;
    ledcWrite(0, dutyCycle);
}

bool getTouched() { return digitalRead(16) == LOW; }
struct TP {
    int16_t x[1], y[1];
};
/*********************************************************************
** Function: InputHandler
** Handles the variables PrevPress, NextPress, SelPress, AnyKeyPress and EscPress
**********************************************************************/
void InputHandler(void) {
    /*  TP t;
     static unsigned long tm = 0;
     if (millis() - tm > 200 || LongPress) {
         // I know R3CK.. I Should NOT nest if statements..
         // but it is needed to not keep SPI bus used without need, it save resources
         if (getTouched()) {
             touch.getPoint(t.x, t.y, 1);
             // Serial.printf("\nRAW: Touch Pressed on x=%d, y=%d",t.x, t.y);
             if (bruceConfigPins.rotation == 3) {
                 t.y[0] = (tftHeight + 20) - t.y[0];
                 t.x[0] = t.x[0];
             }
             if (bruceConfigPins.rotation == 0) {
                 int tmp = t.x[0];
                 t.x[0] = tftWidth - t.y[0];
                 t.y[0] = tftHeight - tmp;
             }
             if (bruceConfigPins.rotation == 2) {
                 int tmp = t.x[0];
                 t.x[0] = t.y[0];
                 t.y[0] = tmp;
             }
             if (bruceConfigPins.rotation == 1) { t.x[0] = tftWidth - t.x[0]; }
             // Serial.printf("\nROT: Touch Pressed on x=%d, y=%d\n",t.x[0], t.y[0]);

             if (!wakeUpScreen()) AnyKeyPress = true;
             else return;

             // Touch point global variable
             touchPoint.x = t.x[0];
             touchPoint.y = t.y[0];
             touchPoint.pressed = true;
             touchHeatMap(touchPoint);

             tm = millis();
         }
     } */
}
/*********************************************************************
** Function: powerOff
** Turns off the device (backlight + deep sleep)
**********************************************************************/
void powerOff() {
    digitalWrite(5, LOW); // Backlight off
    esp_deep_sleep_start();
}

/*********************************************************************
** Function: checkReboot
** Btn logic to reboot device
**********************************************************************/
void checkReboot() {
    // Optional: add button/touch long press detection
    // esp_restart();
}
