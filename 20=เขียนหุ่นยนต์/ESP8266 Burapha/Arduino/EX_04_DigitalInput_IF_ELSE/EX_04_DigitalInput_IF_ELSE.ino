#include <ESP8266WiFi.h>

#define BUTTON D6 //นิยามค่าคงที่ ที่ชื่อว่า BUTTON และค่าคงที่นั้นคือ D5

void setup() {
  
  Serial.begin(115200); //เปิดใช้งาน Serial Port ที่ Baud Rate 115200
  pinMode(BUTTON,INPUT); //ประกาศใช้ DigitalIO ในโหมด INPUT ที่ขา BUTTON(D6)

}

void loop() {

  if(digitalRead(BUTTON) == 1){ //ถ้าหากค่าที่ขา BUTTON เท่ากับ 1
    
    Serial.println("Active"); //แสดงคำว่า Active ผ่าน Serial Port
    
  }else{ //ถ้าไม่

    Serial.println("No Active"); //แสดงคำว่า No Active ผ่าน Serial Port
    
  }
  
  delay(100); //หน่วงเวลา 100 มิลลิวินาที
  
}


