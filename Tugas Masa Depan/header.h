/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal TMD Alpro 1 C1 2021 - tmdap121
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

// Library :
#include <stdio.h>
#include <string.h>

// Fungsi dan Prosedur :

// Fungsi untuk memisahkan nilai ascii perhuruf
int pemisahan(char str[], int i);

// Fungsi untuk memsiahkan nilai ascii suatu huruf
    // Fungsi untuk memisahkan nilai ascii suatu huruf bagian depan
int pisahdepan(int nilaihuruf[], int i);
    // Fungsi untuk memisahkan nilai ascii suatu huruf bagian tengah
int pisahtengah(int nilaihuruf[], int i);
    // Fungsi untuk memisahkan nilai ascii suatu huruf bagian belakang
int pisahbelakang(int nilaihuruf[], int i);

// Fungsi untuk memberikan keluaran (pola)
    // Baris 1
void pola1(int nilai[], int ketebalan, char str[], int batas);
    // Baris 2
void pola2(int nilai[], int ketebalan, char str[], int batas);
    // Baris 3
void pola3(int nilai[], int ketebalan, char str[], int batas);
    // Baris 4
void pola4(int nilai[], int ketebalan, char str[], int batas);
    // Baris 5
void pola5(int nilai[], int ketebalan, char str[], int batas);