#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>

#define FIREBASE_HOST "XXXXXXXXX.firebaseio.com"
#define FIREBASE_AUTH "XXXXXXXXX"

#define WIFI_SSID "XXXXXXXXX" //นิยามค่าคงที่ ที่ชื่อว่า WIFI_SSID และค่าคงที่นั้นคือชื่อของ WIFI ที่เราต้องการเชื่อมต่อ
#define WIFI_PASSWORD "XXXXXXXXX" //นิยามค่าคงที่ ที่ชื่อว่า WIFI_PASSWORD และค่าคงที่นั้นคือรหัสของ WIFI ที่เราต้องการเชื่อมต่อ

#define D5_SINGNAL D5 //นิยามค่าคงที่ ที่ชื่อว่า D5_SINGNAL

int LedStatus = 0; //ประกาศตัวแปรไว้สำหรับเก็บค่าจำนวนเต็มที่ชื่อว่า LedStatus และกำหนดให้มีค่าเท่ากับ 0

void setup() {
  Serial.begin(115200);
  pinMode(D5_SINGNAL,OUTPUT);
  digitalWrite(D5_SINGNAL,HIGH); //เพรา Relay ตัวนี้ทำงานที่ Active LOW
  
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

  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH); //เชื่อมต่อกับ Firebase ด้วย FIREBASE_HOST, FIREBASE_AUTH ที่นิยามไว้
}

void loop() {

  LedStatus = Firebase.getInt("SmartPlug"); //ให้คำการ GET ข้อมูลจากออปเจคชื่อ SmartPlug แล้วเก็บไว้ในตัวแปรชื่อ LedStatus
  Serial.println(LedStatus); //แสดงว่าที่อยู่ในตัวแปร LedStatus ผ่านทาง Serial Port
  if(LedStatus == 1){
    digitalWrite(D5_SINGNAL,LOW);
  }else{
    digitalWrite(D5_SINGNAL,HIGH);
  }

  delay(500); //หน่วงเวลา 500 มิลลิวินาที
}
