#include "project.h"

GButton btn(BUTTON_SWITCH, "ปุ่มสวิตซ์");
GLabel  lb_temp;
GLabel  lb_humid;

// ออกแบบกราฟิก
void GRAPHIC::design(){
  btn.align(ALIGN_BOTTOM_LEFT,10,-10);
  btn.onValueChanged([](GWIDGET){
    BEENEXT_HMI::send("BTN", btn.isON());
  });
  lb_temp = "อุณหภูมิ " + String(23.43);
  lb_temp.position(10,10);
  lb_humid = "ความชื้น " + String(67.35);
  lb_humid.align(lb_temp,ALIGN_BOTTOM_LEFT);
}

void GRAPHIC::temp(float temp){
  lb_temp = String(temp,2);
}

void GRAPHIC::humid(float humid){
  lb_humid = String(humid,2);  
}
