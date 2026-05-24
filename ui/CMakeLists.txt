SET(SOURCES screens/ui_BootScreen.c
    screens/ui_WifiScreen.c
    screens/ui_BluScreen.c
    ui_theme_manager.c
    ui_themes.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    images/ui_img_bruce_hdc_png.c
    images/ui_img_battery_png.c
    images/ui_img_wifi_png.c
    images/ui_img_blu_png.c
    fonts/ui_font_UbuntuMedium.c)

add_library(ui ${SOURCES})
