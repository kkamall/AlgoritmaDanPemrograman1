/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal Evaluasi 2 Alpro 1 C1 2022 - PMTB22
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

// Library:
#include <stdio.h>
#include <string.h>

// Deklarasi Variabel Global:
int i, j, k, l;
/*
    (1) i, j, k, l = variabel untuk indeks array
*/

// Deklarasi Prosedur dan Fungsi:
    // Prosedur untuk memisahkan kalimat tim pencatat dan tim pembuat
void pisahdialog(char dialog[][201], int n, char (*pencatat)[][201], char (*pembuat)[][201]);
    // Fungsi untuk menentukan apakah kalimat tim pembuat termasuk anagram atau bukan
int penentu(char pencatat[][201], char pembuat[][201], int n);
    // Fungsi untuk mengkonversikan durasi ke detik 
int waktu(char durasi[], int anagram);
    // Fungsi untuk menentukan apakah keadaan selanjutnya harus tidur atau nonton
int keadaan(int detik);