#include <Servo.h>

Servo myservo;  // Membuat objek servo untuk mengontrol motor servo
const int pinIRSensor = 5;  // Pin sensor IR terhubung ke pin 5
const int pinServo = 3;    // Pin motor servo terhubung ke pin 3

void setup() {
  pinMode(pinIRSensor, INPUT);  
  myservo.attach(pinServo);  // Menyambungkan motor servo ke pin yang telah ditentukan
  myservo.write(0);         // Menentukan posisi awal servo pada 0 derajat (pintu tertutup)
}

void loop() {
  int deteksi;  
  deteksi = digitalRead(pinIRSensor);  // Membaca nilai dari sensor IR

  // Jika sensor mendeteksi objek (HIGH berarti objek terdeteksi)
  if (deteksi == HIGH) {
    myservo.write(90);  // Membuka pintu (servo bergerak ke 90 derajat)
  } else {
    myservo.write(0);   // Menutup pintu (servo kembali ke 0 derajat)
  }

  delay(500);  // Delay selama 500ms/0,5 detik
}
