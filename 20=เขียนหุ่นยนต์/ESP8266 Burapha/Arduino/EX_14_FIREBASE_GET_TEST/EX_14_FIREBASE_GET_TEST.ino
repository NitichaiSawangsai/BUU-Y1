#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>
#define FIREBASE_HOST "XXXXXXXXX.firebaseio.com"
#define FIREBASE_AUTH "XXXXXXXXX"

// Config connect WiFi
#define WIFI_SSID "XXXXXXXXX" //นิยามค่าคงที่ ที่ชื่อว่า WIFI_SSID และค่าคงที่นั้นคือชื่อของ WIFI ที่เราต้องการเชื่อมต่อ
#define WIFI_PASSWORD "XXXXXXXXX" //นิยามค่าคงที่ ที่ชื่อว่า WIFI_PASSWORD และค่าคงที่นั้นคือรหัสของ WIFI ที่เราต้องการเชื่อมต่อ

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

  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH); //เชื่อมต่อกับ Firebase ด้วย FIREBASE_HOST, FIREBASE_AUTH ที่นิยามไว้
}

void loop() {

  Serial.println(Firebase.getInt("GETTEST"));      //ให้คำการ GET ข้อมูลจากออปเจคชื่อ GETTEST แล้วแสดงผลผ่าน Serial Port

  delay(500);
}
