#include <ESP8266WiFi.h>

#define BUTTON D6 //นิยามค่าคงที่ ที่ชื่อว่า BUTTON และค่าคงที่นั้นคือ D5

void setup() {
  
  Serial.begin(115200); //เปิดใช้งาน Serial Port ที่ Baud Rate 115200
  pinMode(BUTTON,INPUT); //ประกาศใช้ DigitalIO ในโหมด INPUT ที่ขา BUTTON(D6)

}

void loop() {

  Serial.println(digitalRead(BUTTON)); //อ่านค่าที่ขา BUTTON แล้วแสดงผลผ่าน Serial Port
  delay(100);
  
}


