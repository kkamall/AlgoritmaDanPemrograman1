/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal kuis3 Alpro 1 C1 2021 - srklg21
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// Fungsi main :
int main()
{
    int n, i, max=0;
    /*
        (1) n = banyaknya string
        (2) i = buat index array
        (3) max = variabel untuk menyimpan nilai hasil dari fungsi maks
    */

    // Meminta inputan user berupa banyaknya string
    scanf("%d", &n);
    char str[n][100];
    /*
        (1) str[n][100] = array of string untuk menyimpan string
    */

    // Fungsi pengulangan untuk meminta inputan user berupa string sebanyak n
    for(i=0; i<n; i++)
    {
        scanf("%s", &str[i]);
    }

    // Menyimpan nilai hasil fungsi maks ke dalam variabel max
    max=maks(str, n);

    // Fungsi pengulangan untuk menjalankan prosedur sebanya n + variabel i akan dipakai sebagai index dalam prosedur ubah
    for(i=0; i<n; i++)
    {
        ubah(str, n, i, max);
    }

    // Fungsi yang memberikan sistem operasi tanda untuk keluar dari program
    return 0;
}