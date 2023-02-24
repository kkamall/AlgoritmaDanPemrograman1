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
    int n, i, j=0, nilai3[100];
    /*
        (1) n = integer banyaknya elemen array of tipe bentukan
        (2) i, j = variabel buat index
        (3) nilai3[100] = ngecopy nilai array oftipedata terstruktur nilai1, untuk digunain dalam fungsi luas
    */

    // Meminta inputan user nilai n
    scanf("%d", &n);

    // Memanggil tipedata terstruktur:
    segitiga nilai1[n];
    segitiga nilai2[n];
    /*
        (1) segitiga nilai1[n] = buat nampung nilai segitiga yang masih random
        (2) segitiga nilai2[n] = buat nampung nilai sisi miring segitiga
    */

    // Fungsi pengulangan untuk minta inputan user berupa nilai-nilai segitiga yang masih random
    for(i=0; i<n; i++)
    {
        scanf("%d", &nilai1[i].tinggi);
        nilai3[j]=nilai1[i].tinggi;
        j++;
        scanf("%d", &nilai1[i].alas);
        nilai3[j]=nilai1[i].alas;
        j++;
        scanf("%d", &nilai1[i].smiring);
        nilai3[j]=nilai1[i].smiring;
        j++;
    }

    // Fungsi pengulangan untuk menentukan sisi miring segitiga
    for(i=0; i<n; i++)
    {
        nilai2[i].smiring = sisimiring(n, &nilai1);
    }

    // Memberikan keluaran berupa luas dan sisi miring tertinggi
    printf("%d %d\n", luas(n, nilai2, nilai3), nilai2[0].smiring);

    return 0;
}