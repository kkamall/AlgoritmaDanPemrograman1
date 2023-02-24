/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal TP9 Alpro 1 C1 2021 - SPNI21
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

// File header
#include "header.h"

// Fungsi main :
int main()
{
    char str[51];
    int n, i, nilai=0, index, engawal=100, tes=0, m;
    // Meminta inputan dari user berupa barang yang ingin dicari dan banyaknya barang yang terkena sihir
    scanf("%s %d", &str, &n);
    char kode[n][51], basi[n][51], basiubah[n][51];
    int eng[n];
    /*
        (1) str = barang yang dicari
        (2) n = banyaknya barang yang terkena sihir
        (3) i = variabel buat index array
        (4) nilai = variabel buat tanda apakah barang ada (bernilai 1) atau tidak (bernilai 0)
        (5) index = index kode barang yang dicek
        (6) engawal = energi awal (100)
        (7) tes = variabel buat tanda apakah barang sudah dicek sampai akhir atau belum
        (8) m = banyaknya langkah pencarian
        (8) kode = variabel buat nyimpen string berupa kode barang
        (9) basi (barang sihir) = variabel buat nyimpen string berupa barang yang terkena sihir
        (10) basiubah (barang sihir ubah) = variabel buat nyimpen string berupa barang yang sihirnya sudah dinetralisir
        (11) eng = energi yang dipakai saat pengecekan barang
    */

    // Fungsi for untuk meminta inputan user berupa kode barang, energi yang dibutuhkan, dan barang yang terkena sihir sebanyak n
    for(i=0; i<n; i++)
    {
        scanf("%s %d %s", &kode[i], &eng[i], basi[i]);
    }

    // Meminta inputan dari user berupa banyaknya langkah pencarian
    scanf("%d", &m);
    char kodecek[m][51];
    /*
        (1) kodecek = kode barang yang akan dicek
    */

    // Fungsi for untuk meminta inputan user berupa kode barang yang akan dicek sebanyak m
    for(i=0; i<m; i++)
    {
        scanf("%s", &kodecek[i]);
    }

    // Pemanggilan prosedur "pengubahan" untuk menetralisir barang yang terkena sihir
    pengubahan(n, basi, &basiubah);

    // Pemanggilan prosedur "cek" untuk melakukan pengecekan barang
    cek(&nilai, &index, &engawal, &tes, n, m, kodecek, kode, eng, str, basiubah);
    
    // Pemanggilan prosedur "keluaran" untuk memberikan keluaran
    keluaran(index, m, kode, engawal, n, basiubah, nilai, tes);

    // Fungsi yang menandakan bahwa program telah berakhir
    return 0;
}