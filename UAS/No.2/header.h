/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal UAS Alpro 1 C1 2021 - tbintp21
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

// Library :
#include <stdio.h>

// Variabel global
int i, j, k;
/*
    (1) i, j, k = buat index array
*/

// Tipe data terstruktur buat array 2 dimensi integer
typedef struct
{
    int angka[4];
}angkaacak;

// Prosedur untuk menguruti angka dan memberikan keluaran
void keluaran(int n, angkaacak nilai[]);