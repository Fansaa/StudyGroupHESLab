const int pinLED = 8;
const int pinBuzzer = 9;
const int pinTRIG = 10;
const int pinECHO = 11;
bool buzzerCondition = false;

void setup()
{
  pinMode(pinLED, OUTPUT);       // Menyiapkan LED eksternal sebagai output
  pinMode(pinBuzzer, OUTPUT);    // Menyiapkan buzzer sebagai output
  pinMode(pinTRIG, OUTPUT);      // Menyiapkan pin TRIG sensor ultrasonic sebagai output
  pinMode(pinECHO, INPUT);       // Menyiapkan pin ECHO sensor ultrasonic sebagai input
}

long bacaJarak() {
  // Mengirimkan sinyal pulsa ke TRIG
  digitalWrite(pinTRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(pinTRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTRIG, LOW);
  
  // Mengukur durasi pulsa yang kembali ke ECHO
  long duration = pulseIn(pinECHO, HIGH);
  
  // Menghitung jarak berdasarkan durasi pulsa (dalam cm)
  long distance = (duration / 2) * 0.0346;
  return distance;  // Mengembalikan jarak yang terdeteksi
}

// Mengatur suara pada buzzer
void buzzer() {
  tone(pinBuzzer, 1500);                 		// Menghasilkan suara pada frekuensi 1500 Hz
  delay(3000);                           		// Memberikan jeda selama 3000 ms/3 detik
  noTone(pinBuzzer);                    		// Matikan suara buzzer
  delay(500);                           		// Memberikan jeda selama 500 ms/0,5 detik
}

void loop()
{
  long distance = bacaJarak();  // Membaca jarak menggunakan sensor ultrasonic
  
  // Jika jarak kurang dari 50 cm, hidupkan buzzer dan LED
  if (distance < 50) {
    digitalWrite(pinLED, HIGH);
    if (!buzzerCondition){
    	buzzer();
      	Serial.println(buzzerCondition);
      	buzzerCondition = true;
    }
  } else {
    digitalWrite(pinLED, LOW);
    buzzerCondition = false;
  }
  delay(500);
}