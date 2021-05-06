#include <dht.h>
#include <LiquidCrystal.h>
 dht DHT;

int ThermistorPin = 0;
int Vo;
float R1 = 10000;
float logR2, R2, T;
float c1 = -8.856630553e-03, c2 = 17.70618115e-04, c3 = -51.78395335e-07;


const int RS = 2, EN = 3, D4 = 4, D5 = 5, D6 = 6, D7 = 7;
LiquidCrystal lcd(RS,EN,D4,D5,D6,D7);   

void setup() {
  lcd.begin(16,2);    

}

void loop() {
  float readDHT = DHT.read11(8);  
  lcd.setCursor(0,0);
 Vo = analogRead(ThermistorPin);
  R2 = R1 * (1023.0 / (float)Vo - 1.0);
  logR2 = log(R2);
  T = (1.0 / (c1 + c2*logR2 + c3*logR2*logR2*logR2));
  T = T - 273.15;
 
  
  lcd.print(T); 
  lcd.print((char)223);  
  lcd.print("C");
  lcd.setCursor(7,0);
  lcd.print(" ");
  lcd.print(DHT.temperature-3);
  lcd.print((char)223);  
  lcd.print("C");

  lcd.setCursor(0,1);
  lcd.print("Vlaga: ");
  lcd.print(DHT.humidity);
  lcd.print("%");
  
  delay(1100 );
 
}
