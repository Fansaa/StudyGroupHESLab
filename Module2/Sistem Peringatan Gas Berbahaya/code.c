const int pinSensorGas = A0;  					// Pin untuk sensor gas (MQ-2)
const int pinBuzzer = 11;   					// Pin untuk buzzer
const int pinLED = 3;      						// Pin untuk LED Merah
const float batas = 50.0;						// Ambang batas persentase gas

void setup() {
  // Menyiapkan pin untuk sensor, buzzer, dan LED
  pinMode(pinSensorGas, INPUT);
  pinMode(pinBuzzer, OUTPUT);
  pinMode(pinLED, OUTPUT);
  
  // Memulai komunikasi serial
  Serial.begin(9600);
}

// Fungsi untuk mengaktifkan buzzer
void buzzer() {
  tone(pinBuzzer, 1500);                 		// Menghasilkan suara pada frekuensi 1500 Hz
  delay(1000);                           		// Memberikan jeda selama 1000 ms/1 detik
  noTone(pinBuzzer);                    		// Matikan suara buzzer
  delay(500);                           		// Memberikan jeda selama 500 ms/0,5 detik
}

void loop() {
  // Membaca nilai dari sensor gas
  int kadarGas = analogRead(pinSensorGas);
  
  // Menghitung persentase gas
  float persentaseGas = ((kadarGas - 85.0) / (369.0 - 85.0)) * 100;
  
  // Jika persentase gas lebih dari batas, aktifkan LED dan buzzer
  if (persentaseGas > batas) {
    digitalWrite(pinLED, HIGH);  				// Menyalakan LED Merah
    buzzer();            						// Mengaktifkan buzzer
  } else {
    digitalWrite(pinLED, LOW);   				// Mematikan LED Merah
  }

  // Menampilkan persentase gas ke Serial Monitor
  Serial.print("Gas Percentage: ");
  Serial.println(persentaseGas);

  delay(500); 
}
