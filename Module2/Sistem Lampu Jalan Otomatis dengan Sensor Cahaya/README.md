# Sistem Lampu Otomatis dengan Sensor Cahaya

Link Tinkercad:
https://www.tinkercad.com/things/9SOodAlPg1L-project-2-sistem-lampu-jalan-otomatis-dengan-sensor-cahaya?sharecode=QU2ekb7JD9ulWAdjekOknBsVlPJtxhLRIIihbcnSUcw

## Deskripsi

Proyek ini adalah sistem lampu otomatis menggunakan sensor cahaya (photoresistor) yang dapat menyalakan atau mematikan lampu (LED) berdasarkan tingkat pencahayaan sekitar. Sistem ini menggunakan Arduino untuk membaca intensitas cahaya dan mengontrol LED. Jika intensitas cahaya di bawah ambang batas tertentu (misalnya kurang dari 30%), LED akan menyala, menandakan keadaan gelap, dan akan mati saat pencahayaan cukup.

## Komponen yang Diperlukan

1. **Arduino Uno**
2. **Photoresistor (LDR)**
3. **LED**
4. **Resistor (220 Ohm)**
5. **Breadboard dan Kabel Jumper**
6. **Kabel USB** untuk menghubungkan Arduino ke komputer

## Diagram Rangkaian

Rangkaian ini mencakup sambungan berikut:
- **Photoresistor (LDR)** dihubungkan ke **pin analog A0** pada Arduino.
- **LED** dihubungkan ke **pin digital 3** pada Arduino.
  
Referensi diagram rangkaian dapat ditemukan pada gambar yang dilampirkan.

## Penjelasan Kode

1. **Sensor Cahaya (Photoresistor)**: Sensor ini akan mengubah resistansinya tergantung pada intensitas cahaya yang diterimanya. Arduino membaca nilai analog dari sensor menggunakan pin A0.
   
2. **Perhitungan Tingkat Cahaya**: Nilai yang dibaca oleh sensor akan dihitung sebagai persentase dengan rentang dari 6 (pencahayaan rendah) hingga 679 (pencahayaan tinggi).

3. **Logika Kerja**:
   - **Jika intensitas cahaya kurang dari 30%**, LED akan menyala (indikasi gelap).
   - **Jika intensitas cahaya lebih dari 30%**, LED akan mati (indikasi cukup terang).

4. **Output Serial**: Kode ini juga akan menampilkan tingkat cahaya dalam persen di Serial Monitor untuk pemantauan lebih lanjut.

## Konfigurasi Pin

| Komponen         | Pin (Arduino Uno) |
|------------------|-------------------|
| Photoresistor (LDR) | A0              |
| LED              | 3                 |

## Setup dan Instalasi

1. Hubungkan komponen pada breadboard sesuai dengan diagram rangkaian.
2. Unggah kode Arduino yang disediakan ke Arduino Uno menggunakan Arduino IDE.
3. Monitor tingkat cahaya yang terbaca dari sensor pada Serial Monitor.
4. LED akan menyala saat tingkat cahaya di bawah 30% dan mati saat tingkat cahaya cukup.

## Pemecahan Masalah

- **LED tidak menyala**: Periksa koneksi LED dan pastikan resistor terhubung dengan benar.
- **Nilai yang terbaca di Serial Monitor tidak berubah**: Periksa koneksi photoresistor dan pastikan tidak ada hambatan pada sensor.

## Lisensi

Proyek ini bersifat open-source. Anda dapat memodifikasi dan membagikan proyek ini sesuai kebutuhan.
