/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal kuis3 Alpro 1 C1 2021 - segpf21
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// Fungsi untuk menentukan nilai luas dan sisi miring tertinggi
int luas(int n, segitiga nilai[], int *smt)
{
    int i, sisimiring[n], alas[n], tinggi[n], luas, luast=0;
    /*
        (1) i = buat index array
        (2) sisimiring[n] = buat nyimpen sisimiring tertinggi tiap segitiga
        (3) alas[n]/tinggi[n] = buat nyimpen nilai alas/tinggi tiap segitiga
        (4) luas = buat nyimpen luas segitiga namun belum dibangdingkan mana yang tertinggi
        (5) luast = buat nyimpen luas segitiga terbesar
    */

    // Fungsi pengulangan untuk menentukan sisi miring dan luas terbesar
    for(i=0; i<n; i++)
    {
        // Menentukan sisi miring tiap segitiga
        sisimiring[i]=0;
        if(sisimiring[i]<nilai[i].tinggi)
        {
            sisimiring[i]=nilai[i].tinggi;
        }
        if(sisimiring[i]<nilai[i].alas)
        {
            sisimiring[i]=nilai[i].alas;
        }
        if(sisimiring[i]<nilai[i].smiring)
        {
            sisimiring[i]=nilai[i].smiring;
        }
        // Fungsi if untuk menentukan sisi miring terbesar
        if(*smt<sisimiring[i])
        {
            *smt=sisimiring[i];
        }

        // Menentukan alas tiap seigitiga
        alas[i]=0;
        if(nilai[i].tinggi<sisimiring[i])
        {
            alas[i]=nilai[i].tinggi;
        }
        if(nilai[i].alas<sisimiring[i])
        {
            alas[i]=nilai[i].alas;
        }
        if(nilai[i].smiring<sisimiring[i])
        {
            alas[i]=nilai[i].smiring;
        }

        // Menentukan tinggi tiap segitiga
        tinggi[i]=0;
        if((nilai[i].tinggi!=alas[i]) && (nilai[i].tinggi<sisimiring[i]))
        {
            tinggi[i]=nilai[i].tinggi;
        }
        if((nilai[i].alas!=alas[i]) && (nilai[i].alas<sisimiring[i]))
        {
            tinggi[i]=nilai[i].alas;
        }
        if((nilai[i].smiring!=alas[i]) && (nilai[i].smiring<sisimiring[i]))
        {
            tinggi[i]=nilai[i].smiring;
        }
        
        // Menentukan luas tiap segitiga
        luas=alas[i]*tinggi[i]/2;
        // Fungsi if untuk menentukan luas segitiga terbesar
        if(luast<luas)
        {
            luast=luas;
        }
    }

    // Mengembalikan nilai luast
    return luast;
}