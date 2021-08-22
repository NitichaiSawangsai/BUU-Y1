#include <ESP8266WiFi.h>
#include <time.h> //ประกาศเพิ่มไลบรารี่ time ซึ่งทำหน้าที่จัดการเกี่ยวกับเรื่องเวลา
#include "DHT.h" //เรียกใช้งานไลบรารี่ DHT11/22

#define DHTPIN D2 //นิยามชื่อ DHTPIN ซึ่งมีค่าเป็น D2
#define DHTTYPE DHT11 //นิยามชื่อ DHTTYPE ซึ่งมีค่าเป็น DHT11

#define WIFI_SSID "Ptave" //นิยามค่าคงที่ ที่ชื่อว่า WIFI_SSID และค่าคงที่นั้นคือชื่อของ WIFI ที่เราต้องการเชื่อมต่อ
#define WIFI_PASSWORD "39030822" //นิยามค่าคงที่ ที่ชื่อว่า WIFI_PASSWORD และค่าคงที่นั้นคือรหัสของ WIFI ที่เราต้องการเชื่อมต่อ

float temperature = 0; //ประกาศตัวแปรไว้สำหรับเก็บค่าที่มีจุดทศนิยมที่ชื่อว่า temperature และกำหนดให้มีค่าเท่ากับ 0

DHT dht(DHTPIN, DHTTYPE); //ประกาศการใช้งานโมดูล DHT11 ซึ่งใช้ขา D2 ในการเชื่อมต่อ

void setup() {
  Serial.begin(115200);

  WiFi.mode(WIFI_STA);
  // connect to wifi.
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD); //ทำการเชื่อต่อ WIFI ด้วยชื่อและรหัสที่เรานิยามไว้
  Serial.print("connecting"); //แสดงคำว่า "connecting" ทาง Serial Port
  
  while (WiFi.status() != WL_CONNECTED) { //ตราบใดที่ WIFI ยังไม่เชื่อมต่อ
    Serial.print("."); //แสดงคำว่า "." ทาง Serial Port
    delay(500);        //หน่วงเวลา 0.5 วินาที
  }
  Serial.println();    //เว้นบรรทัด
  Serial.print("connected: ");  //แสดงคำว่า "connected: " ทาง Serial Port
  Serial.println(WiFi.localIP()); //แสดงค่า IP ที่ได้รับมา

  configTime(7*3600, 0, "pool.ntp.org", "time.nist.gov"); //คำสั่ง config ค่าในการเชื่อมกับ pool.ntp.org time.nist.gov 
    Serial.println("Waiting for time"); //แสดงคำว่า "Waiting for time: " ทาง Serial Port
    while (!time(nullptr)) { //ตราบใดที่ยังไม่เชื่อมต่อกับทาง pool.ntp.org time.nist.gov 
      Serial.print(".");    //แสดงคำว่า "." ทาง Serial Port
      delay(1000);          //หน่วงเวลา 1 วินาที
    }
   Serial.println("");

   dht.begin(); //สั่งโมดูล DHT11 เริ่มทำงาน

   delay(2000); //หน่วงเวลา 2000 มิลลิวินาที หรือ 2 วินาที
}

void loop() {

  time_t now = time(nullptr);
  struct tm* p_tm = localtime(&now);

  temperature = dht.readTemperature(); //ให้นำค่าอุณหภูมิที่อ่านได้จาก DHT11 ไปเก็บไว้ในตัวแปร temperature

  Serial.print("Temperature = ");
  Serial.print(temperature);
  Serial.print(" : ");
  Serial.println(ctime(&now));
  
  delay(2000); //หน่วงเวลา 2000 มิลลิวินาที หรือ 2 วินาที
  
}


