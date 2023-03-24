# ulangan-progdas
jawaban soal soal ulangan pemrograman dasar kelas 10 Teknik Komputer dan Jaringan

dibuat oleh [andhika pratama putra](andhika.md)

## Soal

1. Tuliskan sebuah program untuk menghitung dan menentukan Bilangan Ganjil dan Genap, untuk nilai dimasukkan melalui keyboard sedangkan besar nilai, muncul secara otomatis dihp kalian serta bangun ruang apa yang anda kerjakan yaitu ... (Tidak Boleh Sama Dengan Temannya)
2. Buatlah diagram alur (Flowchart) sesuai dengan soal diatas (no. 1)
3. Tuliskan dan jelaskan bagian bagian coding sesuai dengan soal diatas (no.1)
4. Tuliskan hasil keluarannya sesuai soal diatas (no. 1) jika coding bahasa C yang telah dicompile di Run (Dijalankan)
5. Jelaskan masing-masing fungsi operasi pemrograman yang sering digunakan yaitu : 

 - Variabel 
 - Tipe data
 - Konstanta
 - Operator
 - Ekspresi

6. Tentukan variabel-variabel yang dibutuhkan dalam pembuatan KTP (Kartu Tanda Penduduk)!
7. Tuliskan dan buatkan program C++ untuk memeriksa 3 bilangan yang diinput. output harus memunculkan bilangan yang paling besar dan bilangan kecil, lalu apakah bilangan itu positif atau negatif!
8. Tuliskan dan buatkan program mencetak yang mencetak bilangan bulat antara 10 sampai dengan 50 dan berapa jumlah bilangan yang ada ?.
9. Tuliskan dan Buatkan program untuk memasukan bilangan yang diinput, bila di input angka nol maka proses penginputan selesai, lalu bilangan yang di input dijumlahkan dan dicari nilai rata ratanya. Berikut asalah tampilan yang di inginkan

```c++


#include <stdio.h>

int main(void)
{
  printf("## Program Bahasa C Menghitung Gaji Karyawan ## \n");
  printf("================================================ \n\n");

  char nama[50];
  char golongan;
  int jam_kerja, upah_per_jam, total_upah;

  // proses input
  printf("Nama Karyawan :  ");
  gets(nama);

  printff("Golongan:  ")
  scanf("%c", &golongan);

  printff("Jumlah Jam Kerja:  ")
  scanf("%d", &jam_kerja);

  // tentukan jumlah upah per jam berdasarkan golongan
  switch (golongan){
    case 'A' :
        upah_per_jam = 5000;
        break;
    case 'B' :
        upah_per_jam = 7000;
        break;
    case 'C' :
        upah_per_jam = 8000;
        break;
    case 'D' :
        upah_per_jam = 10000;
        break;

 }
 total_upah = jam_kerja = upah_per_jam;

 // cek apakah jam kerja lebih dari 48 jam
 if ( (jam_kerja - 48) > 0 ) {
    total_upah = total_upah + ((jam_kerja - 48)*4000);
 }

 // proses output
 printf("\n");
 printf("%s menerima upah Rp. %d per minggu \n", nama, total_upah);

 return 0;
}


```

10. Tuliskan Hasil Outputnya sesuai kode program diatas!
11. Buatlah dan tuliskan kode program yang meminta data input berupa sebuah tahun (4 digit angka). Program kemudian memeriksa apakah tahun tersebut merupakan tahun kabisat atau tidak.
Tahun Kabisat adalah tahun yang bulan februari nya berjumlah 29 hari. Biasanya tahun kabisat datang setiap 4 tahun sekali, tapi ada ketentuan yang lebih khusus yaitu :
- jika angka tahun itu habis dibagi 400, maka tahun itu tahun kabisat

- jika angka tahun itu tidak habis dibagi 400 tetapi dibagi 100, maka itu bukan tahun kabisat

- jika angka tahun itu tidak habis dibagi 400, akan tetapi habis dibagi 4 maka tahun itu tahun kabisat.

- jika angka tahun tidak habis dibagi 400, tidak habis dibagi 100, dan tidak habis dibagi 4, maka bukan tahun kabisat.

12. Jelaskan yang anda ketahui mengenai Aritmatika sesuai dengan Bahasa pemrograman C
13. Jelaskan perbedaan Float dan Double menurut bahasa pemrogramam C.
14. Tuliskan sebuah program untuk menghitung luas bangun datar/luas bangun ruang, untuk nilai dimasukann melalui keyboard dan nilai luas muncul secara otomatis.
15. Sebutkan dan jelaskan Tipe data bahasa C.

## Jawaban

1. 

```c++

#include <iostream>
using namespace std;

int main() {
   int andhika;
   cout << "===[ X TKJ 1 ]===\n";
   cout << "Masukkan bilangan: ";
   cin >> andhika;
        // X TKJ 1 SMK RADEN PAKU
   if (namakalian % 2 == 0) {
      cout << andhika << " adalah bilangan genap." << endl;
   } else {
      cout << andhika << " adalah bilangan ganjil." << endl;
   }

   return 0;
}


```

2. 

```markdown


            ( Start )
   Ya                    Tidak

    -    /Jika Bilangan \  -
    |     dibagi dua dan   |
           apakah sisa
/ output / \         /  / output ganjil /
  genap
    |                      |
    - -     ( end )     -  -


```

3. Penjelasan bagian bagian koding "Program Ganjil Genap C++"

- #include : memanggil file standar c++ bernama iostream

- using namespace std : mmenyatakan perintah bahwa kita menggunakan seluruh berkas, class atau fungsi.

- int main(){ } : menjadi badan program

- int namakalian : menyatakan tipe data pada variabel namakalian berupa data integer / bilangan bulat.

- cout << "Masukan bilangan: "; : membuat teks dilayar dan sebagai input an user / pengguna bila ditambah.

- cin >> andhika ; : selain itu kode cin >> namakalian juga berfungsi untuk memasukan data input kedalam variable ``andhika`` 

```c++

if(andhika % 2 == 0)

```
berfungsi sebagai acuan bahwa jika nilainya dalam angka yang di input user bisa dibagi 2 yang mana mempengaruhi hasil ganjil/genap.

```c++

cout << andhika << " adalah bilangan genap atau ganjil ";

```
berfungsi sebagai output entah itu genap atau ganjil.

> if jika iya maka genap

> else jika tidak maka ganjil

- return 0; : program selesai.

4. 

```bash

root@localhost# /ulangan-pemrograman> ./ganjil-genap
===[ XTKJ1 ]===| andhika pratama putra |
Masukan bilangan : 1
1 adalah bilangan ganjil

atau jika :

root@localhost# /ulangan-pemrograman> ./ganjil-ge>
===[ XTKJ1 ]===| andhika pratama putra |
Masukan bilangan : 2
2 adalah bilangan genap

```

5. 

- Variabel : untuk menyimpan data / nilai yang berubah ubah

- Tipe data : klasifikasi data pada bahasa pemrograman

- Konstanta : nilai tetap atau tifsk berubah rubah.

- Operator : simbol simbol untuk melakukan operasi tertentu misalnya operator matematika.

- Ekspresi : kombinasi dari variabel, konstanta, tipe data dan operator.

6. 

- nama
- nik
- tempat tanggal lahir
- alamat
- agama
- pekerjaan
- status perkawinan

7. 

```c++


#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "===[ XTKJ 1 ]===\n";
    cout << "Masukkan tiga bilangan: ";
    cin >> a >> b >> c;

    // cari bilangan terbesar
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    // cari bilangan terkecil
    int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }

    // cek apakah bilangan positif atau negatif
    if (a > 0) {
        cout << a << " adalah bilangan positif" << endl;
    } else if (a < 0) {
        cout << a << " adalah bilangan negatif" << endl;
    } else {
        cout << a << " adalah nol" << endl;
    }

    if (b > 0) {
        cout << b << " adalah bilangan positif" << endl;
    } else if (b < 0) {
        cout << b << " adalah bilangan negatif" << endl;
    } else {
        cout << b << " adalah nol" << endl;
    }

    if (c > 0) {
        cout << c << " adalah bilangan positif" << endl;
    } else if (c < 0) {
        cout << c << " adalah bilangan negatif" << endl;
    } else {
        cout << c << " adalah nol" << endl;
    }

    cout << "Bilangan terbesar adalah " << max << endl;
    cout << "Bilangan terkecil adalah " << min << endl;

    return 0;
}

```
