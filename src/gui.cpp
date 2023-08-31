#include "gui.h"

#if defined HANSOLOV2

void init_minerScreen(){
}

void update_hashrate(float value) {
  char tmp[20] = {0};
  sprintf(tmp, "%.2f KH/s", value);
  lv_label_set_text(ui_lblhashrate, tmp);
  lv_bar_set_value(ui_barhashrate, value * 10, LV_ANIM_ON);
}

void update_totalHashrate(unsigned long value) {
}

void update_templates(unsigned long value) {
  char tmp[10] = {0};
  sprintf(tmp, "%1d", value);
  lv_label_set_text(ui_lbltemplates, tmp);
}

void update_bestDiff(double value){
}

void update_valid(unsigned int value) {
  char tmp[10] = {0};
  sprintf(tmp, "%1d", value);
  lv_label_set_text(ui_lblvalid, tmp);
}

void update_shares(unsigned int value)  {
  char tmp[10] = {0};
  sprintf(tmp, "%1d", value);
  lv_label_set_text(ui_lblshares32, tmp);
}

void update_uptime() {
  char tmp[50] = {0};
  unsigned long secElapsed = millis() / 1000;
  int days = secElapsed / 86400; 
  int hours = (secElapsed - (days * 86400)) / 3600;                                                        //Number of seconds in an hour
  int mins = (secElapsed - (days * 86400) - (hours * 3600)) / 60;                                              //Remove the number of hours and calculate the minutes.
  int secs = secElapsed - (days * 86400) - (hours * 3600) - (mins * 60);   
  sprintf(tmp, "%01d  %02d:%02d:%02d", days, hours, mins, secs);
  lv_label_set_text(ui_lblclock, tmp);
}

void update_temp(float value){
}

void update_time(String time){
}

void push_minerScreen(){
}

#endif

#if defined NERDMINERV2

void init_minerScreen() {
  background.pushImage(0, 0, MinerWidth, MinerHeight, MinerScreen); 
}

void update_hashrate(float value) {
  char tmp[20] = {0};
  sprintf(tmp, "%.2f KH/s", value);
  render.setFontSize(35);
  render.setCursor(19, 118);
  render.setFontColor(TFT_BLACK);
  render.rdrawString(tmp, 118, 114, TFT_BLACK);
}

void update_totalHashrate(unsigned long value){
  render.setFontSize(18);
  render.rdrawString(String(value).c_str(), 268, 138, TFT_BLACK);
}

void update_templates(unsigned long value) {
  render.setFontSize(18);
  render.drawString(String(value).c_str(), 186, 20, 0xDEDB);
}

void update_bestDiff(double value){
  char best_diff_string[16] = {0};
  suffix_string(value, best_diff_string, 16, 0);
  render.setFontSize(18);
  render.drawString(String(best_diff_string).c_str(), 186, 48, 0xDEDB);
}

void update_valid(unsigned int value) {
     render.setFontSize(24);
    render.drawString(String(value).c_str(), 285, 56, 0xDEDB);
}

void update_shares(unsigned int value) {
  render.setFontSize(18);
  render.drawString(String(value).c_str(), 186, 76, 0xDEDB);
}

void update_uptime() {
  char tmp[50] = {0};
  unsigned long secElapsed = millis() / 1000;
  int days = secElapsed / 86400; 
  int hours = (secElapsed - (days * 86400)) / 3600;                                                        //Number of seconds in an hour
  int mins = (secElapsed - (days * 86400) - (hours * 3600)) / 60;                                              //Remove the number of hours and calculate the minutes.
  int secs = secElapsed - (days * 86400) - (hours * 3600) - (mins * 60);   
  sprintf(tmp, "%01d  %02d:%02d:%02d", days, hours, mins, secs);
  render.setFontSize(14);
  render.rdrawString(String(tmp).c_str(), 315, 104, 0xDEDB);
}

void update_temp(float value){
  String temp = String(value, 0);
  render.setFontSize(10);
  render.rdrawString(String(temp).c_str(), 239, 1, TFT_BLACK);

  render.setFontSize(4);
  render.rdrawString(String(0).c_str(), 244, 3, TFT_BLACK);
}

void update_time(String time){
  render.setFontSize(10);
  render.rdrawString(time.c_str(), 286, 1, TFT_BLACK);
}

void push_minerScreen(){
  background.pushSprite(0,0);
}


#endif

#if defined DEVKITV1

void init_minerScreen(){
}

void update_hashrate(float value) {
}

void update_totalHashrate(unsigned long value){
}

void update_templates(unsigned long value) {
}

void update_bestDiff(double value){
}

void update_valid(unsigned int value) {
}

void update_shares(unsigned int value)  {
}

void update_uptime() {
}

void update_temp(float value){
}

void update_time(String time){
}

void push_minerScreen(){
}

#endif