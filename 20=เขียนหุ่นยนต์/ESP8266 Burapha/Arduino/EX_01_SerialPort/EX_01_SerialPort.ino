#include <ESP8266WiFi.h>

void setup() {

  Serial.begin(115200); //เปิดใช้งาน Serial Port ที่ Baud Rate 115200

}

void loop() {
  Serial.println("Hello Burapha!"); //คำสั่งงานให้แสดงคำว่า Hello Burapha! ออกทาง Serial Port
  delay(100); //คำสั่งหน่วงเวลา 100 มิลลิวินาที
}


