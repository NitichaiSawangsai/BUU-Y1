#include <ESP8266WiFi.h>
#include <time.h> //ประกาศเพิ่มไลบรารี่ time ซึ่งทำหน้าที่จัดการเกี่ยวกับเรื่องเวลา

#define WIFI_SSID "Ptave" //นิยามค่าคงที่ ที่ชื่อว่า WIFI_SSID และค่าคงที่นั้นคือชื่อของ WIFI ที่เราต้องการเชื่อมต่อ
#define WIFI_PASSWORD "39030822" //นิยามค่าคงที่ ที่ชื่อว่า WIFI_PASSWORD และค่าคงที่นั้นคือรหัสของ WIFI ที่เราต้องการเชื่อมต่อ

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
}

void loop() {

  time_t now = time(nullptr);
  struct tm* p_tm = localtime(&now);

  Serial.print("Min = ");
  Serial.print(p_tm->tm_min);
  Serial.print(" : ");

  Serial.print("Sec = ");
  Serial.print(p_tm->tm_sec);
  Serial.println("");
  

  delay(1000); //หน่วงเวลา 1 วินาที
  
}


