# Sistem Gerbang Otomatis dengan Sensor Infrared

Link Tinkercad:
https://www.tinkercad.com/things/75QJEoKoUX7-project-2-gerbang-otomatis-dengan-sensor-infrared-ir-sensor?sharecode=undefined

## Deskripsi

Proyek ini adalah sistem gerbang otomatis menggunakan Arduino yang mengandalkan sensor infrared (IR) untuk mendeteksi objek atau pergerakan. Ketika objek terdeteksi, sistem akan membuka gerbang (servo motor bergerak ke 90 derajat). Sebaliknya, ketika tidak ada objek yang terdeteksi, gerbang akan tertutup kembali (servo motor kembali ke posisi 0 derajat).

## Komponen yang Diperlukan

1. **Arduino Uno**
2. **Sensor Infrared (IR)**
3. **Motor Servo**
4. **Breadboard dan Kabel Jumper**
5. **Kabel USB** untuk menghubungkan Arduino ke komputer

## Diagram Rangkaian

Rangkaian ini mencakup sambungan berikut:
- **Sensor Infrared** dihubungkan ke **pin digital 5** pada Arduino.
- **Motor Servo** dihubungkan ke **pin digital 3** pada Arduino.
  
Referensi diagram rangkaian dapat ditemukan pada gambar yang dilampirkan.

## Penjelasan Kode

1. **Sensor Infrared**: Sensor infrared digunakan untuk mendeteksi objek di depannya. Sensor akan memberikan sinyal **HIGH** ketika mendeteksi objek dan **LOW** ketika tidak ada objek yang terdeteksi.
   
2. **Motor Servo**: Servo digunakan untuk menggerakkan gerbang. Pada awalnya, servo berada pada posisi 0 derajat (gerbang tertutup). Ketika objek terdeteksi oleh sensor, servo akan bergerak ke posisi 90 derajat (gerbang terbuka). Jika tidak ada objek, servo akan kembali ke posisi 0 derajat.

3. **Logika Kerja**:
   - **Deteksi Objek**: Ketika sensor IR mendeteksi objek (output HIGH), motor servo akan bergerak ke posisi 90 derajat untuk membuka gerbang.
   - **Tidak Ada Objek**: Ketika tidak ada objek (output LOW), motor servo akan bergerak kembali ke posisi 0 derajat untuk menutup gerbang.

## Konfigurasi Pin

| Komponen         | Pin (Arduino Uno) |
|------------------|-------------------|
| Sensor Infrared  | 5                 |
| Motor Servo      | 3                 |

## Setup dan Instalasi

1. Hubungkan komponen pada breadboard sesuai dengan diagram rangkaian.
2. Unggah kode Arduino yang disediakan ke Arduino Uno menggunakan Arduino IDE.
3. Pastikan sensor infrared terpasang dengan benar agar dapat mendeteksi objek.
4. Motor servo akan bergerak membuka dan menutup gerbang sesuai dengan deteksi dari sensor infrared.

## Pemecahan Masalah

- **Servo tidak bergerak**: Pastikan kabel servo terhubung dengan benar dan pin yang sesuai digunakan.
- **Sensor tidak mendeteksi objek**: Periksa posisi sensor infrared dan pastikan sensor bekerja dengan baik.

## Lisensi

Proyek ini bersifat open-source. Anda dapat memodifikasi dan membagikan proyek ini sesuai kebutuhan.
