/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal kuis3 Alpro 1 C1 2021 - segpf21
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// Fungsi untuk menentukan sisi miring
int sisimiring(int n, segitiga (*nilai1)[])
{
    int i, max, simpan;
    /*
        (1) i = variabel buat index
        (2) max = menyimpan nilai terbesar yang nantinya jadi sisi miring segitiga
        (3) simpan = menyimpan nilai terbesar
    */

    // Menyimpan nilai max dan simpan 
    max=(*nilai1)[0].tinggi;
    simpan=(*nilai1)[0].tinggi;

    // Fungsi pengulangan untuk menentukan nilai tertinggi yang nantinya akan menjadi sisi miring seigitga
    for(i=0; i<n; i++)
    {
        if(max<(*nilai1)[i].tinggi)
        {
            max=(*nilai1)[i].tinggi;
            (*nilai1)[i-1].smiring=simpan;
            simpan=max;
            // Mengubah (*nilai1)[i].tinggi menjadi 0 sambil menggunakan pass by reference agar saat putaran for kedua di main nilai variabel max jadi nilai tertinggi keduanya
            (*nilai1)[i].tinggi=0;
        }
        if(max<(*nilai1)[i].alas)
        {
            max=(*nilai1)[i].alas;
            (*nilai1)[i].tinggi=simpan;
            simpan=max;
            // Mengubah (*nilai1)[i].tinggi menjadi 0 sambil menggunakan pass by reference agar saat putaran for kedua di main nilai variabel max jadi nilai tertinggi keduanya
            (*nilai1)[i].alas=0;
        }
        if(max<(*nilai1)[i].smiring)
        {
            max=(*nilai1)[i].smiring;
            (*nilai1)[i].alas=simpan;
            simpan=max;
            // Mengubah (*nilai1)[i].tinggi menjadi 0 sambil menggunakan pass by reference agar saat putaran for kedua di main nilai variabel max jadi nilai tertinggi keduanya
            (*nilai1)[i].smiring=0;
        }
    }

    // Mengembalikan nilai max
    return max;
}

// Fungsi untuk menghitung luas segitiga
int luas(int n, segitiga nilai2[], int nilai3[])
{
    int i, k, j, luas=0, luasterbesar=0;
    /*
        (1) i, j, k = variabel buat index array
        (2) luas = buat menyimpan nilai luas yang ada dari nilai-nilai sembarang
        (3) luasterbesar = buat nyimpen luas terbesar dari nilai-nilai luas yang didapat 
    */

    // Fungsi pengulangan untuk menentukan luas dan luas terbesar
    for(i=0; i<n; i++)
    {
        for(k=0; k<n*3; k++)
        {
            for(j=0; j<n*3; j++)
            {
                // Fungsi if dengan kondisi "nilai2[i].smiring" sebagai sisi miring segitiga dan nilai3[j] dan nilai3[k] sebagai alas/tinggi segitiga 
                if(sqrt(nilai3[k]*nilai3[k]+nilai3[j]*nilai3[j])==nilai2[i].smiring)
                {
                    // Menghitung nilai luas segitiga
                    luas=nilai3[k]*nilai3[j]/2;
                    // Fungsi if dengan kondisi nilai variabel luas lebih besar dari nilai variable luasterbesar
                    if(luasterbesar<luas)
                    {
                        // Menyimpan nilai variabel luas ke variabel luasterbesar
                        luasterbesar=luas;
                    }
                }
            }
        }
    }

    // Mengembalikan nilai luasterbesar
    return luasterbesar;
}