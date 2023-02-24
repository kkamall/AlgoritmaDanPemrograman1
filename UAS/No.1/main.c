/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal UAS Alpro 1 C1 2021 - skktas21
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// Fungsi main :
int main()
{
    int n;
    /*
        (1) n = integer banyaknya elemen array of string
    */
    // Meminta masukan n dari user
    scanf("%d", &n);
    char arrstr[n][101];
    /*
        (1) arrstr = untuk menyimpan string inputan dari user
    */

    // Fungsi pengulangan untuk meminta masukan inputan user berupa string
    for(i=0; i<n; i++)
    {
        scanf("%s", &arrstr[i]);
    }

    char cekstr[101];
    /*
        (1) cekstr = untuk menyimpan string berupa suku kata yang nantinya akan di cek kesamaannya
    */
    // Meminta masukan string dari user
    scanf("%s", &cekstr);

    // Memberikan keluaran berupa nilai yang dikembalikan dari fungsi cek
    printf("%d\n", cek(n, cekstr, arrstr));

    // Fungsi yang memberikan sistem operasi tanda untuk keluar dari program
    return 0;
}