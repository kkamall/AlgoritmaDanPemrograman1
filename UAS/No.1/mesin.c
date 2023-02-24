/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal UAS Alpro 1 C1 2021 - skktas21
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// Fungsi untuk melakukan pengecekan dan mengembalikan banyaknya suku kata yang sama
int cek(int n, char cekstr[], char arrstr[][101])
{
    int penentu, tambah=0, sukukata=0;
    /*
        (1) penentu = buat menentukan kesamaan suku kata dengan string dari user
        (2) tambah = buat index di array
        (3) sukukata = berupa nilai banyaknya suku kata yang sama dari semua string masukan user
    */

    // Fungsi pengulangan untuk mengecek kesamaan sukukata dengan semua string user
    for(i=0; i<n; i++)
    {
        for(j=0; j<strlen(arrstr[i]); j++)
        {   
            // Fungsi if dengan kondisi penentu sama dengan banyaknya string sukukata "sama" (karena saya mainin index jadi pake variabel penentu), maka nilai variabel sukukata akan bertambah 1
            if(penentu==strlen(cekstr))
            {
                sukukata++;
            }
            penentu=0;
            tambah=0;

            // Fungsi pengulagan buat melakukan pengecekan kesamaan sukukata pada semua string
            for(k=0; k<strlen(cekstr); k++)
            {
                if(cekstr[k]==arrstr[i][j+tambah])
                {
                    penentu++;
                }
                tambah++;
            }
        }
    }
    
    // Mengembalikan nilai sukukatan
    return sukukata;
}