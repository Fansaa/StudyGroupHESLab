# Sistem Pemantauan Kelembaban Tanah untuk Pertanian

Link Tinkercad:
https://www.tinkercad.com/things/aKOSFlJSRKd-project-2-sistem-pemantauan-kelembaban-tanah-untuk-pertanian?sharecode=undefined

## Deskripsi

Proyek ini adalah sistem pemantauan kelembaban tanah untuk pertanian yang menggunakan sensor kelembaban tanah untuk membaca tingkat kelembaban tanah dan menampilkannya pada LCD. Sistem ini memberikan peringatan jika kelembaban tanah turun di bawah ambang batas yang telah ditentukan (misalnya 30%) dengan mengaktifkan buzzer. Sistem ini berguna untuk membantu petani dalam memantau kelembaban tanah, sehingga dapat mengoptimalkan penggunaan air untuk tanaman.

## Komponen yang Diperlukan

1. **Arduino Uno**
2. **Sensor Kelembaban Tanah (Soil Moisture Sensor)**
3. **LCD I2C (16x2)**
4. **Buzzer**
5. **Resistor (220 Ohm)**
6. **Breadboard dan Kabel Jumper**
7. **Kabel USB** untuk menghubungkan Arduino ke komputer

## Diagram Rangkaian

Rangkaian ini mencakup sambungan berikut:
- **Sensor Kelembaban Tanah** dihubungkan ke **pin analog A0** pada Arduino.
- **Buzzer** dihubungkan ke **pin digital 13** pada Arduino.
- **LCD I2C** dihubungkan ke pin **SDA** dan **SCL** pada Arduino.

Referensi diagram rangkaian dapat ditemukan pada gambar yang dilampirkan.

## Penjelasan Kode

1. **Sensor Kelembaban Tanah**: Sensor ini mengukur kelembaban tanah dan menghasilkan sinyal analog. Arduino membaca nilai dari sensor ini untuk menghitung persen kelembaban tanah.

2. **Penghitungan Kelembaban**: Nilai sensor yang dibaca digunakan untuk menghitung kelembaban tanah dalam bentuk persen. Jika kelembaban tanah kurang dari 30%, sistem akan memberikan peringatan.

3. **LCD Display**: LCD menampilkan tingkat kelembaban tanah secara langsung.

4. **Buzzer**: Buzzer berbunyi jika kelembaban tanah kurang dari 30%, memberikan peringatan agar petani tahu bahwa tanah memerlukan penyiraman.

## Konfigurasi Pin

| Komponen                  | Pin (Arduino Uno) |
|---------------------------|-------------------|
| Sensor Kelembaban Tanah    | A0                |
| Buzzer                    | 13                |
| LCD (SDA)                 | A4                |
| LCD (SCL)                 | A5                |

## Setup dan Instalasi

1. Hubungkan komponen pada breadboard sesuai dengan diagram rangkaian.
2. Unggah kode Arduino yang disediakan ke Arduino Uno menggunakan Arduino IDE.
3. Setelah sistem diaktifkan, LCD akan menampilkan tingkat kelembaban tanah, dan jika kelembaban di bawah 30%, buzzer akan berbunyi sebagai peringatan.

## Pemecahan Masalah

- **LCD tidak menampilkan data**: Pastikan koneksi SDA dan SCL terhubung dengan benar ke Arduino.
- **Buzzer tidak berbunyi**: Periksa koneksi pin buzzer dan pastikan pin yang tepat digunakan.

## Lisensi

Proyek ini bersifat open-source. Anda dapat memodifikasi dan membagikan proyek ini sesuai kebutuhan.
