// Flag's Block 產生的草稿碼

#include <ESP8266WiFi.h>
#include <FlagURLEncode.h>
#include <FlagHTTPClient.h>

int _E6_B0_B4_E4_BD_8D;
String IFTTT_E8_AB_8B_E6_B1_82_E8_B7_AF_E5_BE_91;
FlagHTTPClient _httpClient;

int _httpGET(String url) {
  _httpClient.end();
  _httpClient.begin(url);
  _httpClient.setTimeout(30000);
  return _httpClient.GET();
}


// setup() 會先被執行且只會執行一次
void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);

  WiFi.begin(u8"316WIFI", u8"@martin688");
  if ((WiFi.status() == WL_CONNECTED)) {
    Serial.println(u8"WIFI OK");
  }
  while (!(WiFi.status() == WL_CONNECTED)) {
    delay(1000);
  }

}

// loop() 裡面的程式會不斷重複執行
void loop() {
  if (analogRead(A0) <= 820) {
    if (analogRead(A0) <= 820 && analogRead(A0) >= 780) {
      _E6_B0_B4_E4_BD_8D = 240;
      IFTTT_E8_AB_8B_E6_B1_82_E8_B7_AF_E5_BE_91 = String(u8"http://maker.ifttt.com/trigger/water/with/key/d63Xuh23TSv-Kax2HLP9AJFDtae0a7_LSZZRnSY1VDS?") + String(u8"value2=") + String(urlencode(String(_E6_B0_B4_E4_BD_8D)));
      if (_httpGET(IFTTT_E8_AB_8B_E6_B1_82_E8_B7_AF_E5_BE_91) > 0) {
        delay(10000);
      }
    }
    if (analogRead(A0) <= 750 && analogRead(A0) >= 710) {
      _E6_B0_B4_E4_BD_8D = 220;
      IFTTT_E8_AB_8B_E6_B1_82_E8_B7_AF_E5_BE_91 = String(u8"http://maker.ifttt.com/trigger/water/with/key/d63Xuh23TSv-Kax2HLP9AJFDtae0a7_LSZZRnSY1VDS?") + String(u8"value2=") + String(urlencode(String(_E6_B0_B4_E4_BD_8D)));
      if (_httpGET(IFTTT_E8_AB_8B_E6_B1_82_E8_B7_AF_E5_BE_91) > 0) {
        delay(10000);
      }
    }
    if (analogRead(A0) <= 700 && analogRead(A0) >= 650) {
      _E6_B0_B4_E4_BD_8D = 200;
      IFTTT_E8_AB_8B_E6_B1_82_E8_B7_AF_E5_BE_91 = String(u8"http://maker.ifttt.com/trigger/water/with/key/d63Xuh23TSv-Kax2HLP9AJFDtae0a7_LSZZRnSY1VDS?") + String(u8"value2=") + String(urlencode(String(_E6_B0_B4_E4_BD_8D)));
      if (_httpGET(IFTTT_E8_AB_8B_E6_B1_82_E8_B7_AF_E5_BE_91) > 0) {
        delay(30000);
      }
    }
  }

}
