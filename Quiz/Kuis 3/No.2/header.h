/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal kuis3 Alpro 1 C1 2021 - segpf21
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

// Library :
#include <stdio.h>
#include <string.h>

// Tipe data terstruktur segitiga
typedef struct
{
    int tinggi;
    int alas;
    int smiring;
    int luas;
    /*
        (1) ainggi = menampung nilai tinggi segitiga
        (2) alas = menampung nilai alas segitiga
        (3) smiring = menampung nilai sisi miring segitiga
        (4) luas = menampung nilai luas segitiga
    */
}segitiga;

// Fungsi untuk menentukan luas terbesar dan sisimiring terbesar
int luas(int n, segitiga nilai[], int *smt);