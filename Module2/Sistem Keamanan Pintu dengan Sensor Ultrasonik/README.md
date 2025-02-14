# Sistem Keamanan Pintu dengan Sensor Ultrasonik

Link Tinkercad:
https://www.tinkercad.com/things/lJDpLCXDp08-project-2-sistem-keamanan-pintu-dengan-sensor-ultrasonik-?sharecode=pVQTZSJuoElPjnLRW5l58HnK7_Xqk3kHgwTdVbi6GJk

## Deskripsi

Proyek ini adalah sistem keamanan pintu menggunakan sensor ultrasonik untuk mendeteksi jarak antara sensor dengan objek di depannya. Jika objek mendekat dan jaraknya kurang dari 50 cm, sistem akan mengaktifkan LED dan buzzer untuk memberi peringatan. Sistem ini cocok digunakan sebagai alarm keamanan pintu untuk mendeteksi objek yang mendekat.

## Komponen yang Diperlukan

1. **Arduino Uno**
2. **Sensor Ultrasonik HC-SR04**
3. **LED**
4. **Buzzer**
5. **Breadboard dan Kabel Jumper**
6. **Kabel USB** untuk menghubungkan Arduino ke komputer

## Diagram Rangkaian

Rangkaian ini mencakup sambungan berikut:
- **Sensor Ultrasonik**:
  - Pin **TRIG** dihubungkan ke **pin digital 10** pada Arduino.
  - Pin **ECHO** dihubungkan ke **pin digital 11** pada Arduino.
- **LED** dihubungkan ke **pin digital 8** pada Arduino.
- **Buzzer** dihubungkan ke **pin digital 9** pada Arduino.
  
Referensi diagram rangkaian dapat ditemukan pada gambar yang dilampirkan.

## Penjelasan Kode

1. **Sensor Ultrasonik**: Sensor ini digunakan untuk mengukur jarak objek di depannya. Sensor mengirimkan sinyal suara, yang kemudian dipantulkan oleh objek dan diterima kembali oleh sensor. Durasi pulsa yang kembali dihitung dan digunakan untuk menghitung jarak.

2. **LED dan Buzzer**:
   - Jika sensor mendeteksi jarak kurang dari 50 cm, LED akan menyala dan buzzer akan berbunyi untuk memberi peringatan.
   - Buzzer berbunyi pada frekuensi 1500 Hz selama 3 detik, lalu mati, dan ada jeda 500 ms sebelum pengecekan jarak berikutnya.

3. **Logika Kerja**:
   - **Jarak Kurang dari 50 cm**: LED menyala dan buzzer berbunyi.
   - **Jarak Lebih dari 50 cm**: LED mati dan buzzer tidak berbunyi.

## Konfigurasi Pin

| Komponen              | Pin (Arduino Uno) |
|-----------------------|-------------------|
| Sensor Ultrasonik TRIG | 10                |
| Sensor Ultrasonik ECHO | 11                |
| LED                   | 8                 |
| Buzzer                | 9                 |

## Setup dan Instalasi

1. Hubungkan komponen pada breadboard sesuai dengan diagram rangkaian.
2. Unggah kode Arduino yang disediakan ke Arduino Uno menggunakan Arduino IDE.
3. Sensor Ultrasonik akan mulai mengukur jarak objek yang ada di depannya.
4. Jika objek terdeteksi dalam jarak kurang dari 50 cm, LED akan menyala dan buzzer akan berbunyi sebagai peringatan.

## Pemecahan Masalah

- **LED dan Buzzer tidak menyala**: Pastikan sensor ultrasonik terhubung dengan benar, terutama pin TRIG dan ECHO.
- **Peringatan tidak terpicu**: Pastikan objek berada dalam jarak 50 cm dari sensor dan sensor tidak terhalang oleh benda lain.

## Lisensi

Proyek ini bersifat open-source. Anda dapat memodifikasi dan membagikan proyek ini sesuai kebutuhan.
