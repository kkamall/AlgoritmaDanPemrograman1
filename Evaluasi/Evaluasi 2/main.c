/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal Evaluasi 2 Alpro 1 C1 2022 - PMTB22
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// Fungsi Main:
int main()
{
    int n, anagram=0, detik=0;
    /*
        (1) n = Jumlah penggalan dialog
        (2) anagram = Variabel berisi jumlah kalimat anagram yang nantinya akan dijumlahkan dengan detik
        (3) detik = berisi durasi film dalam detik 
    */

    // Meminta masukkan berupa jumlah penggalan dialog dari user
    scanf("%d", &n);


    char dialog[n][201], durasi[8], pencatat[n][201], pembuat[n][201];
    /*
        (1) dialog = variabel untuk menyimpan string dialog
        (2) durasi = variabel untuk menyimpan durasi film
        (3) Pencatat = variabel yang berisi kalimat yang dibuat oleh tim pencatat
        (4) pembuat = variabel yang berisi kalimat yang dibuat oleh tim pembuat
    */

    // Fungsi pengulangan untuk meminta masukan user berupa dialog sebanyak n
    for(i=0; i<n; i++)
    {
        scanf("%s", &dialog[i]);
    }

    // Fungsi untuk meminta masukan user berupa duarasi film
    scanf("%s", &durasi);

    // Pemanggilan prosedur untuk memisahkan dialog
    pisahdialog(dialog, n, &pencatat, &pembuat);

    // Fungsi pengulangan untuk index array
    for(i=0; i<n; i++)
    {
        // Fungsi if dengan kondisi nilai dari fungsi penentu=1 yang berarti merupakan anagram
        if(penentu(pencatat, pembuat, n)==1)
        {
            printf("Anagram!\n");
            anagram++;
        }
        // Fungsi if dengan kondisi nilai dari fungsi penentu=0 yang berarti merupakan bukan anagram
        else
        {
            printf("Bukan Anagram!\n");
        }
    }
    printf("\n");

    // Memasukkan nilai hasil fungsi wakatu ke variabel detik
    detik=waktu(durasi, anagram);

    // Fungsi if dengan kondisi hasil dari fungsi keadaan sama dengan 1 (merupakan polindrom)
    if(keadaan(detik)==1)
    {
        printf("Lanjut Nonton\n");
    }
    // Fungsi if dengan kondisi hasil dari fungsi keadaan sama dengan 0 (bukan merupakan polindrom)
    else
    {
        printf("Tidur\n");
    }

    // Fungsi yang menandakan bahwa program telah berakhir
    return 0;
}