#include <BlynkGOv3.h>
#include "project.h"

void setup() {
  Serial.begin(9600); Serial.println();
  BlynkGO.begin();
  //BeeNeXT.enable(true);

  GRAPHIC::design();
}

void loop() {
  BlynkGO.update();
}

// เปิด BeeNeXT.enable(true) ด้วย เพื่อรับข้อมูลจาก MCU
MCU_DATA(){
  String key = MCU.key();
  if(key == "TEMP")   {
    float temp = MCU.toFloat();
    GRAPHIC ::temp(temp);     // แสดง temp ไปที่กราฟิก
    IOT     ::temp(temp);     // ส่งค่า temp ไปทาง IOT
    // SD_LOG  ::log("/data_log_temp.txt", String(temp,2) );      // ตัวอย่างทำ data log ลง SD
  } else 
  if(key == "HUMID")  {
    float humid = MCU.toFloat();
    GRAPHIC ::humid(humid);   // แสดง humid ไปที่กราฟิก
    IOT     ::humid(humid);   // แสดง humid ไปทาง IOT
    // SD_LOG  ::log("/data_log_humid.txt", String(humid,2) );    // ตัวอย่างทำ data log ลง SD
  } 
}
