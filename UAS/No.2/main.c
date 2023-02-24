/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal UAS Alpro 1 C1 2021 - tbintp21
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// Fungsi main:
int main()
{
    int n;
    /*
        (1) n = integer banyaknya elemen array of tipe terstruktur
    */
    
    // Meminta inputan user nilai n
    scanf("%d", &n);

    // Memanggil tipedata terstruktur
    angkaacak nilai[n];

    // Fungsi pengulangan untuk meminta inputan user berupa angka secara random
    for(i=0; i<n; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d", &nilai[i].angka[j]);
        }
    }

    // Pemanggilan prosedur keluaran untuk memberikan keluaran sesuai aturan yang ada
    keluaran(n, nilai);

    // Fungsi yang memberikan sistem operasi tanda untuk keluar dari program
    return 0;
}