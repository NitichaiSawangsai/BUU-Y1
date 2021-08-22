#include <ESP8266WiFi.h>

#define BUTTON D6 //นิยามค่าคงที่ ที่ชื่อว่า BUTTON และค่าคงที่นั้นคือ D5
#define LED D5 //นิยามค่าคงที่ ที่ชื่อว่า LED และค่าคงที่นั้นคือ D5

void setup() {
  
  pinMode(BUTTON,INPUT); //ประกาศใช้ DigitalIO ในโหมด INPUT ที่ขา BUTTON(D6)
  pinMode(LED,OUTPUT); //ประกาศใช้ DigitalIO ในโหมด OUTPUT ที่ขา LED(D5)
  digitalWrite(LED,LOW); //คำสั่งให้ค่า OUTPUT ที่ขา LED เป็น LOW

}

void loop() {

  if(digitalRead(BUTTON) == 1){ //ถ้าหากค่าที่ขา BUTTON เท่ากับ 1
    
    digitalWrite(LED,HIGH); //คำสั่งให้ค่า OUTPUT ที่ขา LED เป็น HIGH
    
  }else{ //ถ้าไม่

    digitalWrite(LED,LOW); //คำสั่งให้ค่า OUTPUT ที่ขา LED เป็น LOW
    
  }
  
  delay(100); //หน่วงเวลา 100 มิลลิวินาที
  
}


