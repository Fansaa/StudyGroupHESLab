#include <LiquidCrystal_I2C.h>

// Inisialisasi LCD I2C dengan alamat 39
LiquidCrystal_I2C lcd(39, 16, 2); 				//(Alamat LCD, Panjang baris, Panjang Kolom)

// Pin untuk sensor kelembaban dan buzzer
const int pinSensorKelembaban = A0;
const int pinBuzzer = 13;

void setup() {
  pinMode(pinSensorKelembaban, INPUT); 			// Menetapkan pin sensor kelembaban sebagai input
  pinMode(pinBuzzer, OUTPUT);           		// Menetapkan pin buzzer sebagai output
  lcd.init();                           		// Inisialisasi LCD
  lcd.backlight();                      
  lcd.setCursor(5, 0);                  		// Menyetel posisi kursor pada baris pertama, kolom ke-6
  lcd.print("Sensor");
  lcd.setCursor(0, 1);                  		// Menyetel posisi kursor pada baris kedua, kolom pertama
  lcd.print("Kelembaban Tanah");
  delay(3000);
  Serial.begin(9600);                   		// Memulai komunikasi serial
  lcd.clear();                          		// Membersihkan layar LCD sebelum menampilkan data baru
  lcd.setCursor(0, 0);                  		
  lcd.print("Kelembaban Tanah:");
}

// Membaca Kelembaban Tanah
float bacaKelembabanTanah() {
  int nilaiSensor;                      		// Variabel untuk menyimpan nilai dari sensor
  float kelembaban;                     		// Variabel untuk menyimpan nilai kelembaban tanah dalam bentuk persen
  nilaiSensor = analogRead(pinSensorKelembaban);    // Membaca nilai dari sensor kelembaban tanah
  kelembaban = ((nilaiSensor / 876.0) * 100);  	// Menghitung persen kelembaban tanah
  return kelembaban;                    		// Mengembalikan nilai kelembaban
}

// Menampilkan hasil pada LCD
void tampilkanHasilKeLcd(float kelembabanTanah) {
  lcd.setCursor(0, 1);                  		// Menyetel posisi kursor pada baris kedua
  lcd.print("Tingkat: ");
  lcd.print(kelembabanTanah);           		// Menampilkan persen kelembaban tanah
  lcd.print("%");
}

// Mengatur suara pada buzzer
void buzzer() {
  tone(pinBuzzer, 1500);                 		// Menghasilkan suara pada frekuensi 1500 Hz
  delay(1000);                           		// Memberikan jeda selama 1000 ms/1 detik
  noTone(pinBuzzer);                    		// Matikan suara buzzer
  delay(500);                           		// Memberikan jeda selama 500 ms/0,5 detik
}

void loop() {
  float kelembabanTanah = bacaKelembabanTanah();
  tampilkanHasilKeLcd(kelembabanTanah);			// Menampilkan kelembaban tanah di LCD

  if (kelembabanTanah < 30) {                   // Jika kelembaban kurang dari 30%
    buzzer();                            		// Menghidupkan buzzer sebagai peringatan
  }
  delay(500);                                  	// Jeda 0,5 detik
}
