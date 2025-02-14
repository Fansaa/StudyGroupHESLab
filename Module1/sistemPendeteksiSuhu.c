#include <LiquidCrystal.h>

// Inisialisasi pin LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int sensorPin = 0; // Pin sensor suhu
int redLedPin = 8; // LED merah
int blueLedPin = 7; // LED biru
int greenLedPin = 9; // LED hijau

void setup()
{
  Serial.begin(9600);
  
  // Inisialisasi LCD
  lcd.begin(16, 2); // LCD 16x2
  lcd.setCursor(0, 0);
  lcd.print("Temp Monitor");
  
  // Konfigurasi pin LED sebagai output
  pinMode(redLedPin, OUTPUT);
  pinMode(blueLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
}

void loop()
{
  int reading = analogRead(sensorPin); // Membaca data dari sensor suhu

  // Menghitung tegangan berdasarkan pembacaan analog
  float voltage = reading * 4.68 / 1024.0;

  // Menghitung suhu dalam Celcius
  float temperatureC = (voltage - 0.5) * 100;

  // Menampilkan suhu ke Serial Monitor
  Serial.print(temperatureC);
  Serial.println(" degrees C");

  // Menampilkan suhu pada LCD
  lcd.setCursor(0, 1); // Baris kedua
  lcd.print("Temp: ");
  lcd.print(temperatureC);
  lcd.print(" C  "); // Spasi untuk membersihkan karakter lama

  // Logika untuk menyalakan LED berdasarkan suhu
  if (temperatureC < 20) {
    digitalWrite(blueLedPin, HIGH); // LED biru menyala
    digitalWrite(redLedPin, LOW);  // LED merah mati
    digitalWrite(greenLedPin, LOW);  // LED hijau mati
  } 
  else if (temperatureC > 40) {
    digitalWrite(redLedPin, HIGH); // LED merah menyala
    digitalWrite(blueLedPin, LOW);  // LED biru mati
    digitalWrite(greenLedPin, LOW);  // LED hijau mati
  } 
  else {
    digitalWrite(blueLedPin, LOW); // LED merah mati
    digitalWrite(redLedPin, LOW); // LED biru mati
    digitalWrite(greenLedPin, HIGH);  // LED hijau menyala
  }

  delay(1); // Delay 1 milidetik untuk memperbarui
}
