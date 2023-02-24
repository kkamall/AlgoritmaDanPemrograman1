/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal TP10 Alpro 1 C1 2021 - INTS21
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

// File header
#include "header.h"

// Dekripsi fungsi hd untuk mengubah kode enkripsi
char hd(int i, char str[], int x[], char kode[])
{
    int j;
    /*
        (1) j = index array
    */

    // Fungsi if untuk membandingkan apakah string kode sama dengan kata maju
    if(strcmp(kode, "maju") == 0)
    {
        // Fungsi pengulangan untuk mengubah kode enkripsi dengan menambahkan nilai variabel str dengan index i dengan nilai variabel x dengan index i
        for(j=0; j<x[i]; j++)
        {
            str[i]++;
            if((str[i] > 'Z') && (str[i] < 'a'))
            {
                str[i] = 'A';
            }
            if((str[i] > 'z'))
            {
                str[i] = 'a';
            }
        }
    }

    // Fungsi else untuk membandingkan apakah string kode sama dengan kata mundur
    else
    {
        // Fungsi pengulangan untuk mengubah kode enkripsi dengan mengurangi nilai variabel str dengan index i dengan nilai variabel x dengan index i
        for(j=0; j<x[i]; j++)
        {
            str[i]--;
            if(str[i] < 'A')
            {
                str[i] = 'Z';
            }
            if((str[i] < 'a') && (str[i] > 'Z'))
            {
                str[i] = 'z';
            }
        }
    }

    // Mengcopy nilai variabel str dengan index i kepada variabel dekripsi 
    char dekipsi = str[i];

    // Mengembalikan nilai dekripsi
    return dekipsi;
}

// Dekripsi prosedur untuk memberikan keluaran
void keluaran(char kode[], int n, int m, char strd[])
{
    char cn[3];
    int i=0, j;
    /*
        (1) cn = codename untuk menentukan impostor
        (2) i, j = buat index array
    */

    // Fungsi if dengan kondisi string kode sama dengan kata maju, maka nilai j=0
    if(strcmp(kode, "maju") == 0)
    {
        j=0;
    }

    // Fungsi else dengan kondisi string kode sama dengan kata mundur, maka nilai j=n-1
    else
    {
        j=n-1;
    }

    // Fungsi perulangan while yang akan berhenti jika nilai variabel j<0 dan j>=n
    while((j>=0) && (j<n))
    {
        // Mengcopy nilai variabel strd dengan index j ke variabel cn dengan index i
        cn[i]=strd[j];

        // Fungsi if dengan kondisi string kode sama dengan kata maju, maka nilai j bertambah m+1
        if(strcmp(kode, "maju") == 0)
        {
            j+=m+1;
        }

        // Fungsi else dengan kondisi string kode sama dengan kata mundur, maka nilai j berkurang m+1
        else
        {
            j-=m+1;
        }
        i++;
    }
    // Penambahan '\0' pada variabel cn agar menjadi sebuah string
    cn[i]='\0';

    // Fungsi untuk memberikan keluaran
    printf("Hasil dekripsi : %s\nPenyamar       : ", strd);

    // Fungsi if dengan kondisi string cn sama dengan BOB atau bob, maka impostornya Boba dan Bobi
    if((strcmp(cn, "BOB") == 0) || (strcmp(cn, "bob") == 0))
    {
        printf("Boba dan Bobi\n");
    }

    // Fungsi if dengan kondisi string cn sama dengan PTR atau ptr, maka impostornya Peter
    if((strcmp(cn, "PTR") == 0) || (strcmp(cn, "ptr") == 0))
    {
        printf("Peter\n");
    }

    // Fungsi if dengan kondisi string cn sama dengan ITS atau its, maka impostornya Itheas
    if((strcmp(cn, "ITS") == 0) || (strcmp(cn, "its") == 0))
    {
        printf("Itheas\n");
    }
}