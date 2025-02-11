#include <Arduino.h>

int ledpinMerah = 8;
int ledpinKuning = 9;
int ledpinIjo = 10;
void setup() {
  pinMode(ledpinMerah, OUTPUT);
pinMode(ledpinKuning, OUTPUT);
pinMode(ledpinIjo, OUTPUT);
}

void loop() {
  digitalWrite(ledpinMerah, HIGH);
delay(2000);
digitalWrite(ledpinMerah, LOW);
 
digitalWrite(ledpinKuning, HIGH);
delay(2000);
digitalWrite(ledpinKuning, LOW);

digitalWrite(ledpinIjo, HIGH);
delay(2000);
digitalWrite(ledpinIjo, LOW);

}
