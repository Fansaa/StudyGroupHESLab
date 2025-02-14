const int pinPhotoresistor = A0;  
const int pinLED = 3;             

void setup() {
  pinMode(pinLED, OUTPUT);        			 // Menetapkan pin LED sebagai output
  pinMode(pinPhotoresistor, INPUT); 		 // Menetapkan pin Photoresistor sebagai input
  Serial.begin(9600);  						 // Memulai komunikasi serial
}

void loop() {
  double lightLevel = analogRead(pinPhotoresistor);  // Membaca nilai dari Photoresistor
  
  // Menghitung persentase cahaya berdasarkan rentang 6 hingga 679
  double lightPercentage = ((lightLevel - 6.00) / (679.00 - 6.00)) * 100;  // Kalkulasi persentase
  
  // Menampilkan nilai persentase di Serial Monitor
  Serial.print("Tingkat Cahaya: ");
  Serial.print(lightPercentage);
  Serial.println("%");

  // Jika persentase cahaya di bawah 30%, nyalakan LED
  if (lightPercentage < 30) {
    digitalWrite(pinLED, HIGH);  // Menyalakan LED jika gelap
  } else {
    digitalWrite(pinLED, LOW);   // Mematikan LED jika cukup terang
  }

  delay(100); 
}
