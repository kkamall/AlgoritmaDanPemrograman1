/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal kuis3 Alpro 1 C1 2021 - segpf21
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// Fungsi untuk menentukan string terpanjang
int maks(char str[][100], int n)
{
    int m=strlen(str[0]), i;
    /*
        (1) m = variabel untuk menyimpan string terpanjang
        (2) i = buat index
    */
   
    // Fungsi pengulangan untuk menentukan string terpanjang
    for(i=1; i<n; i++)
    {
        // Fungsi if dengan kondisi nilai m lebih kecil dari panjang string dengan index i
        if(m<strlen(str[i]))
        {
            // Nilai variabel m menjadi panjang string dengna index i
            m=strlen(str[i]);
        }
    }

    // Mengembalikan nilai m
    return m;
}

// Prosedur untuk menyesuaikan string sesuai syarat
void ubah(char str[][100], int n, int i, int max)
{
    int j, k;
    /*
        (1) j, k = buat index array
    */

    // Fungsi pengulangan buat memberikan keluaran beruap spasi
    for(j=strlen(str[i]); j<max; j++)
    {
        printf(" ");
    }

    // Fungsi if dengan kondisi strin berjumlah ganjil;
    if(strlen(str[i])%2!=0)
    {
        // Fungsi pengulangan untuk memberikan keluaran berupa char dari string dengan index i, k yang sudah disesuaikan dengan syarat
        for(k=strlen(str[i])-1; k>=0; k--)
        {
            printf("%c", str[i][k]);
        }
    }
    // Fungsi if dengan kondisi strin berjumlah genap;
    if(strlen(str[i])%2==0)
    {
        // Fungsi pengulangan untuk memberikan keluaran berupa char dari string dengan index i, k yang sudah disesuaikan dengan syarat
        for(k=strlen(str[i])/2; k<strlen(str[i]); k++)
        {
            printf("%c", str[i][k]);
        }
        // Fungsi pengulangan untuk memberikan keluaran berupa char dari string dengan index i, k yang sudah disesuaikan dengan syarat
        for(k=0; k<strlen(str[i])/2; k++)
        {
            printf("%c", str[i][k]);
        }
    }
    // Memberikan new line
    printf("\n");
}