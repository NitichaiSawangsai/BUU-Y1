#include <ESP8266WiFi.h>

#define FLAMEPIN A0 //นิยามค่าคงที่ ที่ชื่อว่า FLAMEPIN และค่าคงที่นั้นคือ A0
int flameValue = 0; //ประกาศตัวแปรไว้สำหรับเก็บค่าจำนวนเต็มที่ชื่อว่า flameValue และกำหนดให้มีค่าเท่ากับ 0

void setup() {
  Serial.begin(115200); 
}

void loop() {

  flameValue = analogRead(FLAMEPIN); //ให้นำค่าที่อ่านได้จาก FLAMEPIN (A0) ไปเก็บไว้ในตัวแปร flameValue

  Serial.println(flameValue); //ให้แสดงค่า flameValue ออกทาง Serial Port

  delay(100); //หน่วงเวลา 1 มิลลิวินาที
  
}


