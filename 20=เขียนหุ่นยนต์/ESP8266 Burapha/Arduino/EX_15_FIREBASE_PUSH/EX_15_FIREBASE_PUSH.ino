#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>
#define FIREBASE_HOST "XXXXXXXXX.firebaseio.com"
#define FIREBASE_AUTH "XXXXXXXXX"

// Config connect WiFi
#define WIFI_SSID "XXXXXXXXX" //นิยามค่าคงที่ ที่ชื่อว่า WIFI_SSID และค่าคงที่นั้นคือชื่อของ WIFI ที่เราต้องการเชื่อมต่อ
#define WIFI_PASSWORD "XXXXXXXXX" //นิยามค่าคงที่ ที่ชื่อว่า WIFI_PASSWORD และค่าคงที่นั้นคือรหัสของ WIFI ที่เราต้องการเชื่อมต่อ

int i = 0; ////ประกาศตัวแปรไว้สำหรับเก็บค่าจำนวนเต็มที่ชื่อว่า i และกำหนดให้มีค่าเท่ากับ 0

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

  i = random(0,100); //กำหนดให้ i เป็นตัวเลขที่ถูกสุ่มโดยมีค่าระหว่าง 0  ถึง 100
  Serial.print("i = ");
  Serial.println(i);
  
  Firebase.pushInt("PushValue", i); //ให้ทำการ PUSH ข้อมูลที่ออปเจตชื่อ RandomNumber ด้วยค่า i
  if (Firebase.failed()) { //ถ้า Firebase เชื่อมต่อล้มเหลว
      Serial.print("push /PushValue failed:");
      Serial.println(Firebase.error());  
      return;
  }

  delay(500);
}
