#include <ESP8266WiFi.h>
#include "DHT.h" //เรียกใช้งานไลบรารี่ DHT11/22

#define DHTPIN D2 //นิยามชื่อ DHTPIN ซึ่งมีค่าเป็น D2
#define DHTTYPE DHT11 //นิยามชื่อ DHTTYPE ซึ่งมีค่าเป็น DHT11
#define LED D5 //นิยามค่าคงที่ ที่ชื่อว่า LED และค่าคงที่นั้นคือ D5

float humidity = 0;   //ประกาศตัวแปรไว้สำหรับเก็บค่าที่มีจุดทศนิยมที่ชื่อว่า humidity และกำหนดให้มีค่าเท่ากับ 0
float temperature = 0; //ประกาศตัวแปรไว้สำหรับเก็บค่าที่มีจุดทศนิยมที่ชื่อว่า temperature และกำหนดให้มีค่าเท่ากับ 0

DHT dht(DHTPIN, DHTTYPE); //ประกาศการใช้งานโมดูล DHT11 ซึ่งใช้ขา D2 ในการเชื่อมต่อ

void setup() {
  Serial.begin(115200); 

  pinMode(LED,OUTPUT); //ประกาศใช้ DigitalIO ในโหมด OUTPUT ที่ขา LED(D5)
  digitalWrite(LED,LOW); //คำสั่งให้ค่า OUTPUT ที่ขา LED เป็น LOW
  
  dht.begin(); //สั่งโมดูล DHT11 เริ่มทำงาน

  delay(2000); //หน่วงเวลา 2000 มิลลิวินาที หรือ 2 วินาที
}

void loop() {

  humidity = dht.readHumidity(); //ให้นำค่าความชื้นที่อ่านได้จาก DHT11 ไปเก็บไว้ในตัวแปร humidity
  temperature = dht.readTemperature(); //ให้นำค่าอุณหภูมิที่อ่านได้จาก DHT11 ไปเก็บไว้ในตัวแปร temperature

  Serial.print("Humidity = "); //แสดงคำว่า "Humidity = " แบบไม่ต้องเว้นบรรทัดบน Serial Port
  Serial.println(humidity); //แสดงค่าที่อยู่ในตัวแปร humidity บน Serial Port จากนั้นเว้นบรรทัด

  Serial.print("Temperature = ");  //แสดงคำว่า "Temperature = " แบบไม่ต้องเว้นบรรทัดบน Serial Port
  Serial.println(temperature);  //แสดงค่าที่อยู่ในตัวแปร temperature บน Serial Port จากนั้นเว้นบรรทัด

  if(temperature > 30){ //ถ้าหากค่า temperature มากกว่า 30
    
    digitalWrite(LED,HIGH); //คำสั่งให้ค่า OUTPUT ที่ขา LED เป็น HIGH
    
  }else{ //ถ้าไม่

    digitalWrite(LED,LOW); //คำสั่งให้ค่า OUTPUT ที่ขา LED เป็น LOW
    
  }
  
  delay(2000); //หน่วงเวลา 2000 มิลลิวินาที หรือ 2 วินาที
  
}


