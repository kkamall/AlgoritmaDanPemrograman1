/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal kuis3 Alpro 1 C1 2021 - segpf21
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// Fungsi main :
int main()
{
    int n, i, smt=0;
    /*
        (1) n = banyaknya segitiga
        (2) i = buat index array
        (3) smt = buat nyimpen nilai sisi miring tertinggi
    */

    // Meminta inputan user berupa nilai n
    scanf("%d", &n);

    // Memanggil tipe data terstruktur
    segitiga nilai[n];

    // Fungsi pengulangan untuk meminta inputan user berupa tinggi, alas, dan sisi miring yang masih random
    for(i=0; i<n; i++)
    {
        scanf("%d", &nilai[i].tinggi);
        scanf("%d", &nilai[i].alas);
        scanf("%d", &nilai[i].smiring);
    }

    // Memberikan keluaran nilai luas segitiga tertinggi
    printf("%d", luas(n, nilai, &smt));
    // Memberikan keluaran nilai sisi miring tertinggi
    printf(" %d\n", smt);
    
    // Fungsi yang memberikan sistem operasi tanda untuk keluar dari program
    return 0;
}