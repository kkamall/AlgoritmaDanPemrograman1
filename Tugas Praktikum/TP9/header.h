/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal TP9 Alpro 1 C1 2021 - SPNI21
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

// Library :
#include <stdio.h>
#include <string.h>

// Prosedur buat ngecek barang
void cek(int *nilai, int *index, int *engawal, int *cek, int n, int m, char kodecek[][51], char kode[][51], int eng[], char str[], char basiubah[][51]);

// Prosedur buat memberikan keluaran
void keluaran(int index, int m, char kode[][51], int engawal, int n, char basiubah[][51], int nilai, int cek);

// Prosedur untuk mengubah barang yang terkena sihir
void pengubahan(int n, char basi[][51], char (*basiubah)[][51]);