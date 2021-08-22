#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>
#include "DHT.h" //เรียกใช้งานไลบรารี่ DHT11/22
#include <time.h> //ประกาศเพิ่มไลบรารี่ time ซึ่งทำหน้าที่จัดการเกี่ยวกับเรื่องเวลา

#define FIREBASE_HOST "XXXXXXXXX.firebaseio.com"
#define FIREBASE_AUTH "XXXXXXXXX"

#define WIFI_SSID "XXXXXXXXX" //นิยามค่าคงที่ ที่ชื่อว่า WIFI_SSID และค่าคงที่นั้นคือชื่อของ WIFI ที่เราต้องการเชื่อมต่อ
#define WIFI_PASSWORD "XXXXXXXXX" //นิยามค่าคงที่ ที่ชื่อว่า WIFI_PASSWORD และค่าคงที่นั้นคือรหัสของ WIFI ที่เราต้องการเชื่อมต่อ

#define DHTPIN D2 //นิยามชื่อ DHTPIN ซึ่งมีค่าเป็น D2
#define DHTTYPE DHT11 //นิยามชื่อ DHTTYPE ซึ่งมีค่าเป็น DHT11

float humidity = 0;   //ประกาศตัวแปรไว้สำหรับเก็บค่าที่มีจุดทศนิยมที่ชื่อว่า humidity และกำหนดให้มีค่าเท่ากับ 0
float temperature = 0; //ประกาศตัวแปรไว้สำหรับเก็บค่าที่มีจุดทศนิยมที่ชื่อว่า temperature และกำหนดให้มีค่าเท่ากับ 0
String timestamp = ""; //ประกาศตัวแปรไว้สำหรับเก็บตัวอักษรที่ชื่อว่า timestamp และกำหนดให้มีค่าเท่ากับ ""

DHT dht(DHTPIN, DHTTYPE); //ประกาศการใช้งานโมดูล DHT11 ซึ่งใช้ขา D2 ในการเชื่อมต่อ

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  // connect to wifi.
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
  
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());

  configTime(7*3600, 0, "pool.ntp.org", "time.nist.gov"); //คำสั่ง config ค่าในการเชื่อมกับ pool.ntp.org time.nist.gov 
    Serial.println("Waiting for time"); //แสดงคำว่า "Waiting for time: " ทาง Serial Port
    while (!time(nullptr)) { //ตราบใดที่ยังไม่เชื่อมต่อกับทาง pool.ntp.org time.nist.gov 
      Serial.print(".");    //แสดงคำว่า "." ทาง Serial Port
      delay(1000);          //หน่วงเวลา 1 วินาที
    }
   Serial.println("");

  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH); //เชื่อมต่อกับ Firebase ด้วย FIREBASE_HOST, FIREBASE_AUTH ที่นิยามไว้
  dht.begin(); //สั่งโมดูล DHT11 เริ่มทำงาน

  delay(2000); //หน่วงเวลา 2000 มิลลิวินาที หรือ 2 วินาที
}

void loop() {

  humidity = dht.readHumidity(); //ให้นำค่าความชื้นที่อ่านได้จาก DHT11 ไปเก็บไว้ในตัวแปร humidity
  temperature = dht.readTemperature(); //ให้นำค่าอุณหภูมิที่อ่านได้จาก DHT11 ไปเก็บไว้ในตัวแปร temperature

  time_t now = time(nullptr);
  struct tm* p_tm = localtime(&now);
  timestamp = ctime(&now); //ให้นำค่าเวลาที่อ่านได้ไปเก็บไว้ในตัวแปร timestamp
  
  StaticJsonBuffer<200> jsonBuffer;
  JsonObject& root = jsonBuffer.createObject();
  root["TEM"] = temperature;
  root["HUM"] = humidity;
  root["TIME"] = timestamp;
  
  // append a new value to /DHTmonitor
  Firebase.set("DHTmonitor", root);
  if (Firebase.failed()) {
      Serial.print("set /logDHT failed:");
      Serial.println(Firebase.error());  
      return;
  }

  delay(5000); //หน่วงเวลา 5 วินาที
}
