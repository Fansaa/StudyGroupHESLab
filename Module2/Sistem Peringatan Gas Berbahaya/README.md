# Sistem Peringatan Gas Berbahaya

Link Tinkercad:
https://www.tinkercad.com/things/aGuMGsxcG1H-project-2-sistem-peringatan-gas-berbahaya-di-dapur-?sharecode=Mw9dt-zH_vzrigIvpK3tyU473PgukwG_cVnjFfqQSNs

## Deskripsi

Proyek ini adalah sistem peringatan gas berbahaya menggunakan sensor gas MQ-2, yang dapat mendeteksi konsentrasi gas di udara. Sistem ini akan memberikan peringatan dengan mengaktifkan LED merah dan buzzer jika tingkat gas yang terdeteksi melebihi ambang batas yang telah ditentukan. Sistem ini berguna untuk deteksi dini adanya kebocoran gas atau gas berbahaya lainnya di sekitar lingkungan.

## Komponen yang Diperlukan

1. **Arduino Uno**
2. **Sensor Gas MQ-2**
3. **LED Merah**
4. **Buzzer**
5. **Resistor (220 Ohm untuk LED)**
6. **Breadboard dan Kabel Jumper**
7. **Kabel USB** untuk menghubungkan Arduino ke komputer

## Diagram Rangkaian

Rangkaian ini mencakup sambungan berikut:
- **Sensor Gas MQ-2** dihubungkan ke **pin analog A0** pada Arduino.
- **LED Merah** dihubungkan ke **pin digital 3** pada Arduino.
- **Buzzer** dihubungkan ke **pin digital 11** pada Arduino.

Referensi diagram rangkaian dapat ditemukan pada gambar yang dilampirkan.

## Penjelasan Kode

1. **Sensor Gas MQ-2**: Sensor ini digunakan untuk mendeteksi konsentrasi gas seperti asap, LPG, metana, dan karbon monoksida. Arduino membaca nilai analog dari sensor untuk menghitung persentase gas di udara.

2. **Perhitungan Persentase Gas**: Sensor menghasilkan nilai analog yang digunakan untuk menghitung persentase konsentrasi gas berdasarkan rentang pembacaan sensor.

3. **Peringatan dengan LED dan Buzzer**:
   - **Jika persentase gas lebih dari 50%**, LED merah akan menyala dan buzzer akan berbunyi untuk memberi peringatan adanya gas berbahaya.
   - **Jika persentase gas kurang dari 50%**, LED merah akan dimatikan dan buzzer akan mati.

4. **Output Serial**: Kode ini juga menampilkan persentase gas yang terdeteksi di Serial Monitor untuk pemantauan lebih lanjut.

## Konfigurasi Pin

| Komponen         | Pin (Arduino Uno) |
|------------------|-------------------|
| Sensor Gas MQ-2  | A0                |
| LED Merah        | 3                 |
| Buzzer           | 11                |

## Setup dan Instalasi

1. Hubungkan komponen pada breadboard sesuai dengan diagram rangkaian.
2. Unggah kode Arduino yang disediakan ke Arduino Uno menggunakan Arduino IDE.
3. Setelah sistem diaktifkan, jika konsentrasi gas melebihi ambang batas, LED merah akan menyala dan buzzer akan berbunyi sebagai peringatan.

## Pemecahan Masalah

- **LED dan buzzer tidak menyala**: Periksa koneksi pada sensor gas, LED, dan buzzer. Pastikan pin yang digunakan sudah benar.
- **Pembacaan gas tidak akurat**: Sensor gas membutuhkan waktu untuk pemanasan (biasanya beberapa menit). Pastikan sensor diletakkan di area yang tepat dan tunggu beberapa waktu untuk mendapatkan pembacaan yang akurat.

## Lisensi

Proyek ini bersifat open-source. Anda dapat memodifikasi dan membagikan proyek ini sesuai kebutuhan.
