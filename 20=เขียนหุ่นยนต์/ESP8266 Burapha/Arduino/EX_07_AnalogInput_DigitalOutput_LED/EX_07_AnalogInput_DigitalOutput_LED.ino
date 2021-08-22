#include <ESP8266WiFi.h>

#define VOLUME A0 //นิยามค่าคงที่ ที่ชื่อว่า VOLUME และค่าคงที่นั้นคือ A0
#define LED D5 //นิยามค่าคงที่ ที่ชื่อว่า LED และค่าคงที่นั้นคือ D5
int sensorValue = 0; //ประกาศตัวแปรไว้สำหรับเก็บค่าจำนวนเต็มที่ชื่อว่า sensorValue และกำหนดให้มีค่าเท่ากับ 0

void setup() {
  Serial.begin(115200); 
  pinMode(LED,OUTPUT); //ประกาศใช้ DigitalIO ในโหมด OUTPUT ที่ขา LED(D5)
  digitalWrite(LED,LOW); //คำสั่งให้ค่า OUTPUT ที่ขา LED เป็น LOW
}

void loop() {

  sensorValue = analogRead(VOLUME); //ให้นำค่าที่อ่านได้จาก VOLUME (A0) ไปเก็บไว้ในตัวแปร sensorValue

  Serial.println(sensorValue); //ให้แสดงค่า sensorValue ออกทาง Serial Port

  if(sensorValue >= 500){ //ถ้าหากค่าที่ sensorValue มากกว่าหรือเท่ากับ 500
    
    digitalWrite(LED,HIGH); //คำสั่งให้ค่า OUTPUT ที่ขา LED เป็น HIGH
    
  }else{ //ถ้าไม่

    digitalWrite(LED,LOW); //คำสั่งให้ค่า OUTPUT ที่ขา LED เป็น LOW
    
  }
  
  delay(1); //หน่วงเวลา 1 มิลลิวินาที
  
}


