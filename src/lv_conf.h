#ifndef LV_CONF_H
#define LV_CONF_H

/*====================
   LVGL Configuration
 ====================*/

/* Display resolution for ST7796 (3.5" panel) */
#define LV_HOR_RES_MAX 480
#define LV_VER_RES_MAX 320

/* Color depth: 16-bit is best for ESP32-S3 */
#define LV_COLOR_DEPTH 16

/* Swap bytes if using RGB565 with certain drivers */
#define LV_COLOR_16_SWAP 1

/* Tick period (ms) */
#define LV_TICK_CUSTOM 1
#define LV_TICK_CUSTOM_SYS_TIME_EXPR (millis())

/* Enable commonly used widgets */
#define LV_USE_LABEL 1
#define LV_USE_BTN 1
#define LV_USE_IMG 1
#define LV_USE_SLIDER 1
#define LV_USE_SWITCH 1
#define LV_USE_ARC 1

/* Enable input devices (touch, encoder, etc.) */
#define LV_USE_INDEV 1

/* Logging (optional, can disable for performance) */
#define LV_USE_LOG 1
#define LV_LOG_LEVEL LV_LOG_LEVEL_WARN

/* Memory settings */
#define LV_MEM_SIZE (32U * 1024U) /* 32 KB for LVGL heap */
#define LV_MEM_CUSTOM 0

#endif /* LV_CONF_H */
