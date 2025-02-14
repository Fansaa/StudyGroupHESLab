# Sistem Deteksi Suhu dengan Arduino

Link Tinkercad:
https://www.tinkercad.com/things/7x98dTwOBTx-project-1-study-group-hes-lab?sharecode=undefined

## Deskripsi

Proyek ini adalah sistem pemantauan suhu sederhana menggunakan papan Arduino Uno, sensor suhu, dan tampilan LCD. Sistem ini membaca data suhu dari sensor dan menampilkannya di LCD. Selain itu, sistem ini menggunakan LED untuk menunjukkan berbagai rentang suhu:

- **LED Biru**: Suhu di bawah 20°C (Dingin).
- **LED Hijau**: Suhu antara 20°C dan 40°C (Sedang).
- **LED Merah**: Suhu di atas 40°C (Panas).

## Komponen yang Diperlukan

1. **Arduino Uno**
2. **Sensor Suhu** (misalnya TMP36 atau LM35)
3. **Tampilan LCD (16x2)**
4. **3 LED** (Merah, Hijau, Biru)
5. **Resistor** (nilai yang sesuai untuk LED)
6. **Breadboard dan Kabel Jumper**
7. **Potensiometer** (untuk pengaturan kontras LCD)
8. **Kabel USB** untuk menghubungkan Arduino ke komputer Anda

## Diagram Rangkaian

Rangkaian ini mencakup sambungan berikut:
- **Sensor suhu** dihubungkan ke **pin analog A0** pada Arduino.
- **LCD** dihubungkan ke pin **2, 3, 4, 5, 11, dan 12** pada Arduino.
- **LED Merah, Biru, dan Hijau** dihubungkan ke pin **8, 7, dan 9** pada Arduino, masing-masing.
  
Silakan lihat gambar yang dilampirkan untuk informasi lebih lanjut mengenai kabel.

## Penjelasan Kode

1. **Pembacaan Sensor**: Sensor suhu terhubung ke pin analog A0, di mana nilai analog dibaca dan dikonversi menjadi tegangan. Suhu dalam derajat Celsius dihitung menggunakan rumus:
   
   ```
   Suhu (C) = (Tegangan - 0.5) * 100
   ```

2. **Tampilan LCD**: LCD akan menampilkan suhu saat ini dalam derajat Celsius.

3. **Indikator LED**: Sistem ini menggunakan tiga LED:
   - **LED Biru**: Menunjukkan suhu di bawah 20°C.
   - **LED Hijau**: Menunjukkan suhu antara 20°C dan 40°C.
   - **LED Merah**: Menunjukkan suhu di atas 40°C.

## Konfigurasi Pin

| Komponen         | Pin (Arduino Uno) |
|------------------|-------------------|
| Sensor Suhu (Analog) | A0              |
| LED Merah        | 8                 |
| LED Hijau        | 9                 |
| LED Biru         | 7                 |
| LCD (RS)         | 12                |
| LCD (E)          | 11                |
| LCD (D4)         | 5                 |
| LCD (D5)         | 4                 |
| LCD (D6)         | 3                 |
| LCD (D7)         | 2                 |

## Setup dan Instalasi

1. Hubungkan komponen pada breadboard sesuai dengan diagram rangkaian.
2. Unggah kode Arduino yang disediakan ke Arduino Uno menggunakan Arduino IDE.
3. Buka Serial Monitor pada Arduino IDE untuk melihat pembacaan suhu.
4. LCD akan menampilkan suhu saat ini dalam derajat Celsius, dan LED yang sesuai akan menyala berdasarkan rentang suhu.

## Pemecahan Masalah

- **LCD tidak menampilkan apa-apa**: Pastikan bahwa kontras LCD disesuaikan dengan potensiometer.
- **Pembacaan suhu tidak akurat**: Periksa koneksi sensor dan pastikan terhubung dengan benar ke pin input analog.

## Lisensi

Proyek ini bersifat open-source. Silakan modifikasi dan bagikan sesuai kebutuhan.
