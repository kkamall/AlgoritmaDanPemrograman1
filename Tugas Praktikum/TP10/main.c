/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal TP10 Alpro 1 C1 2021 - INTS21
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

// File header
#include "header.h"

// Fungsi main :
int main()
{
    int n, m, i;
    /*
        (1) n = banyaknya bilangan untuk dekripsi
        (2) m = banyaknya karakter yang harus dilompati
        (3) i = buat index array
    */

    // Meminta inputan dari user variabel n & m
    scanf("%d %d", &n, &m);

    char str[n], kode[100], strd[n];
    int x[n];
    /*
        (1) str[n] = kode enkripsi
        (2) kode[100] = kode yang berisi perintah maju atau mundur
        (3) strd[n] = kode enkripsi yang telah diuba (Hasil dekripsi)
        (4) x[n] = Kumpulan bilangan untuk dekripsi kode
    */

    // Meminta inputan dari user variabel str
    scanf("%s", &str);

    // Fungsi pengulagan untuk meminta inputan user variabel x
    for(i=0; i<n; i++)
    {
        scanf("%d", &x[i]);
    }

    // Meminta inputan user variabel kode
    scanf("%s", &kode);

    // Fungsi pengulangan untuk memasukkan nilai variabel hasil dari fungsi hd ke variabel strd
    for(i=0; i<n; i++)
    {
        strd[i] = hd(i, str, x, kode);
    }
    // Penambahan '\0' pada nilai variabel strd agar menjadi string
    strd[i]='\0';

    // Pemanggilan prosedur untuk memberikan keluaran berupa hasil dekripsi & impostor
    keluaran(kode, n, m, strd);

    // Fungsi yang memberikan sistem operasi tanda untuk keluar dari program
    return 0;
}