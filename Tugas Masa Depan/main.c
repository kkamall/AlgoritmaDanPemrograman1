/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal TMD Alpro 1 C1 2021 - tmdap121
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// Fungsi main :
int main()
{
    char str[100];
    int ketebalan, i, j=0, batas=0, nilaihuruf[1000], nilai[1000];
    /*
        (1) str = variabel untuk menyimpan string masukan user
        (2) ketebalan = variabel untuk menyimpan nilai ketebalan masukan user
        (3) i, j = variabel yang digunakan untuk index array
        (4) nilaihuruf = variabel untuk menyimpan nilai ascii perhuruf
        (5) nilai = variabel untuk menyimpan nilai ascii huruf yang sudah dipisahkan
    */

    // Meminta masukkan user berupa string dan nilai ketebalan
    scanf("%s %d", &str, &ketebalan);

    // Fungsi pengulangan untuk memisahkan nilai ascii perhuruf
    for(i=0; i<strlen(str); i++)
    {
        nilaihuruf[i] = pemisahan(str, i);
    }

    // Fungsi pengulangan untuk memisahkan nilai ascii huruf
    for(i=0; i<strlen(str); i++)
    {
        // Memisahkan nilai ascii huruf bagian depan
        nilai[j] = pisahdepan(nilaihuruf, i);
        j++;
        batas++;

        // Memisahkan nilai ascii huruf bagian tengah
        nilai[j] = pisahtengah(nilaihuruf, i);

        // Fungsi if untuk nilai ascii huruf yang memiliki dua angka 
        if(nilaihuruf[i]/10 == nilai[j-1])
        {
            nilai[j] = 11;
        }
        j++;
        batas++;

        // Memisahkan nilai ascii huruf bagian belakang
        nilai[j] = pisahbelakang(nilaihuruf, i);
        j++;
        batas++;
    }

    // Memberikan keluaran :
        // Baris 1
    pola1(nilai, ketebalan, str, batas);
        // Baris 2
    pola2(nilai, ketebalan, str, batas);
        // Baris 3
    pola3(nilai, ketebalan, str, batas);
        // Baris 4
    pola4(nilai, ketebalan, str, batas);
        // Baris 5
    pola5(nilai, ketebalan, str, batas);

    // Fungsi yang memberikan sistem operasi tanda untuk keluar dari program
    return 0;
}