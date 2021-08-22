#include <ESP8266WiFi.h>

#define LED D5 //นิยามค่าคงที่ ที่ชื่อว่า LED และค่าคงที่นั้นคือ D5

void setup() {
  
  pinMode(LED,OUTPUT); //ประกาศใช้ DigitalIO ในโหมด OUTPUT ที่ขา LED(D5)
  digitalWrite(LED,LOW); //คำสั่งให้ค่า OUTPUT ที่ขา LED เป็น LOW

}

void loop() {

  digitalWrite(LED,HIGH); //คำสั่งให้ค่า OUTPUT ที่ขา LED เป็น HIGH
  
}


