/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal TP9 Alpro 1 C1 2021 - SPNI21
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

// File header :
#include "header.h"

// Definlisi prosedur buat ngecek barang :
void cek(int *nilai, int *index, int *engawal, int *cek, int n, int m, char kodecek[][51], char kode[][51], int eng[], char str[], char basiubah[][51])
{
    // Deklarasi variabel
    int i, j=0;
    /*
        (1) i, j = variabel buat index array
    */

   // Fungsi while untuk melakukan pencarian barang
    while((j<m) && (*nilai!=1))
    {
        *index=-1;
        i=0;
        // Fungsi while untuk mencari index n kode barang
        while((i<n) && (*index==-1))
        {
            if(strcmp(kodecek[j], kode[i]) == 0)
            {
                *index = i;
            }
            i++;
        }

        // Pengurangan energi awal (100)
        *engawal-=eng[*index];

        // Fungsi if untuk melakukan pembandingan string barang sihir yang sudah diubah dengan barang yang dicari, jika energinya masih ada 
        if(*engawal>=0)
        {
            // Fungsi if untuk mengubah nilai menjadi 1 jika barang sihir yang sudah diubah identik dengan barang yang dicari
            if(strcmp(basiubah[*index], str) == 0)
            {
                *nilai=1;
            }
            *cek+=1;
        }
        j++;
    }
}

// Definisi prosedur buat ngecek 
void keluaran(int index, int m, char kode[][51], int engawal, int n, char basiubah[][51], int nilai, int cek)
{
    int penentu=m, i;
    /*
        (1) penentu = variabel buat jadi kondisi di fungsi if apakah barang tidak ditemukan karena energi habis atau tidak ada barang untuk dicek lagi
        (2) i = variabel untuk index array
    */

    // Fungsi if untuk menambah 1 nilai penentu, jika nilainya 0 (barang tidak ditemukan) dan cek=m (tidak ada barang yang bisa dicek lagi)
    if((nilai==0) && (cek==m))
    {
        penentu++;
    }

    // Fungsi if dengan kondisi barang ditemukan (nilai=1)
    if(nilai==1)
    {
        printf("Barang ditemukan di %s\n", kode[index]);
    }
    
    // Fungsi if dengan kondisi energinya sudah habis
    if((engawal<=0) && (penentu==m))
    {
        printf("Barang tidak ditemukan energi habis\n");
    }
    
    // Fungsi if dengan kondisi tidak ada barang yang bisa dicek lagi
    if(penentu==m+1)
    {
        printf("Barang tidak ditemukan\n");
    }
    printf("=================\nnama asli barang\n=================\n");
    
    // Fungsi for untuk mengeluarkan kode dan barang sihir yang sudah diubah
    for(i=0; i<n; i++)
    {
        printf("%s %s\n", kode[i], basiubah[i]);
    }
    printf("=================\n");
}

// Definisi prosedur untuk menetralisir barang yang terkena sihir
void pengubahan(int n, char basi[][51], char (*basiubah)[][51])
{
    int i, j, k;
    /*
        (1) i, j, k = variabel untuk index array
    */

    // Fungsi for untuk menetralisir sihir dan menyimpannya ke array string basiubah
    for(i=0; i<n; i++)
    {
        for(j=0; j<strlen(basi[i]); j++)
        {
            for(k=0;k<strlen(basi[i]); k++)
            {
                basi[i][j]-=1;
                if(basi[i][j]<'a')
                {
                    basi[i][j]='z';
                }
            }
            (*basiubah)[i][j]=basi[i][j];
        }
        // Pemberian null agar menjadi sebuah string
        (*basiubah)[i][j]='\0';
    }
}