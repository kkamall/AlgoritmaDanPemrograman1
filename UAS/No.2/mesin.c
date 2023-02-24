/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal UAS Alpro 1 C1 2021 - tbintp21
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// Prosedur untuk memberikan keluaran sesuai dengan aturan yang ada
void keluaran(int n, angkaacak nilai[])
{
    int urutan, copy, spasi=0;
    /*
        (1) urutan = urutan angka dari kecil ke besar
        (2) copy = buat sorting
        (3) spasi = buat spasi tambahan jika nilainya lebih besar dari 9
    */

    // Fungsi pengulangan untuk nge print sesuai dengan aturan
    for(i=0; i<n; i++)
    {
        for(j=0; j<4; j++)
        {
            // Menyimpan nilai awal para variabel urutan dan copy
            urutan=nilai[i].angka[j];
            copy=nilai[i].angka[j];

            // Mengubah angka menjadi 10000 agar tidak terpilih lagi
            nilai[i].angka[j]=10000;

            // Fungsi for untuk memasukkan angka yang disesuaikan dengan aturan
            for(k=0; k<4; k++)
            {
                // Fungsi if yang jika memenuhi kondisi maka nilai urutan akan bertukar
                if(urutan>nilai[i].angka[k])
                {
                    urutan=nilai[i].angka[k];
                    nilai[i].angka[k]=copy;
                    copy=urutan;
                }
            }

            // Fungsi for untuk memberikan keluaran spasi
            for(k=0; k<i+spasi; k++)
            {
                printf(" ");
            }

            // Fungsi if untuk menambah spasi jika angka lebih dari satu digit
            if((j==3))
            {
                if(urutan>=10)
                {
                    spasi++;
                }
                if(urutan>=100)
                {
                    spasi++;
                }
                if(urutan>=1000)
                {
                    spasi++;
                }
            }

            // Memberikan keluaran nilai urutan
            printf("%d\n", urutan);
        }
    }
}