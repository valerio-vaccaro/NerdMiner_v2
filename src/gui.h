#ifndef _GUI_H
#define _GUI_H

#include <Arduino.h>
#include "utils.h"

#if defined NERDMINERV2
#include <TFT_eSPI.h> // Graphics and font library for ILI9341 driver chip
#include "media/Free_Fonts.h"
#include "media/images.h"
#include "OpenFontRender.h"
#endif

#if defined HANSOLOV2
#include "ui.h"
#endif

#if defined NERDMINERV2
extern OpenFontRender render;
extern TFT_eSprite background;
#endif

void init_minerScreen();
void update_hashrate(float value);
void update_totalHashrate(unsigned long value);
void update_templates(unsigned long value);
void update_bestDiff(double value);
void update_valid(unsigned int value);
void update_shares(unsigned int value);
void update_uptime();
void update_temp(float value);
void update_time(String time);
void push_minerScreen();

#endif