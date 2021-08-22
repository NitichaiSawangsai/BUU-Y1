#include <ESP8266WiFi.h>

#define VOLUME A0 //นิยามค่าคงที่ ที่ชื่อว่า VOLUME และค่าคงที่นั้นคือ A0
int sensorValue = 0; //ประกาศตัวแปรไว้สำหรับเก็บค่าจำนวนเต็มที่ชื่อว่า sensorValue และกำหนดให้มีค่าเท่ากับ 0

void setup() {
  Serial.begin(115200); 
}

void loop() {

  sensorValue = analogRead(VOLUME); //ให้นำค่าที่อ่านได้จาก VOLUME (A0) ไปเก็บไว้ในตัวแปร sensorValue

  Serial.println(sensorValue); //ให้แสดงค่า sensorValue ออกทาง Serial Port

  delay(1); //หน่วงเวลา 1 มิลลิวินาที
  
}


