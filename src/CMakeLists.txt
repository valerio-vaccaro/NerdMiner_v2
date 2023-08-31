SET(SOURCES screens/ui_SplashScreen.c
    screens/ui_HomeScreen.c
    ui.c
    ui_helpers.c
    images/ui_img_783383759.c
    images/ui_img_sky_png.c
    images/ui_img_93039294.c
    images/ui_img_metal2_png.c
    fonts/ui_font_calculator128.c
    fonts/ui_font_calculator16.c
    fonts/ui_font_calculator24.c
    fonts/ui_font_calculator32.c
    fonts/ui_font_calculator48.c
    fonts/ui_font_star24.c
    fonts/ui_font_star32.c
    fonts/ui_font_start16.c)

add_library(ui ${SOURCES})
