#include <ESP8266WiFi.h>
#include "DHT.h" //เรียกใช้งานไลบรารี่ DHT11/22

#define DHTPIN D2 //นิยามชื่อ DHTPIN ซึ่งมีค่าเป็น D2
#define DHTTYPE DHT11 //นิยามชื่อ DHTTYPE ซึ่งมีค่าเป็น DHT11

float humidity = 0;   //ประกาศตัวแปรไว้สำหรับเก็บค่าที่มีจุดทศนิยมที่ชื่อว่า humidity และกำหนดให้มีค่าเท่ากับ 0
float temperature = 0; //ประกาศตัวแปรไว้สำหรับเก็บค่าที่มีจุดทศนิยมที่ชื่อว่า temperature และกำหนดให้มีค่าเท่ากับ 0

DHT dht(DHTPIN, DHTTYPE); //ประกาศการใช้งานโมดูล DHT11 ซึ่งใช้ขา D2 ในการเชื่อมต่อ

void setup() {
  Serial.begin(115200); 
  dht.begin(); //สั่งโมดูล DHT11 เริ่มทำงาน

  delay(2000); //หน่วงเวลา 2000 มิลลิวินาที หรือ 2 วินาที
}

void loop() {

  humidity = dht.readHumidity(); //ให้นำค่าความชื้นที่อ่านได้จาก DHT11 ไปเก็บไว้ในตัวแปร humidity
  temperature = dht.readTemperature(); //ให้นำค่าอุณหภูมิที่อ่านได้จาก DHT11 ไปเก็บไว้ในตัวแปร temperature

  Serial.print("Humidity = ");
  Serial.println(humidity);

  Serial.print("Temperature = ");
  Serial.println(temperature);
  
  delay(2000); //หน่วงเวลา 2000 มิลลิวินาที หรือ 2 วินาที
  
}


