/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal Evaluasi 2 Alpro 1 C1 2022 - PMTB22
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// Prosedur untuk memisahkan kalimat tim pencatat dan tim pembuat
void pisahdialog(char dialog[][201], int n, char (*pencatat)[][201], char (*pembuat)[][201])
{
    for(i=0; i<n; i++)
    {
        j=0, k=0; // Variabel untuk index array
        // Fungsi pengulangan untuk memisahkan kalimat buatan tim pencatat
        while(dialog[i][j]!='?')
        {
            // Fungsi if untuk mengcopy elemen variabel dialog dengan index i,j ke variabel pencatat dengan index i, k
            if(dialog[i][j]!='_')
            {
                (*pencatat)[i][k] = dialog[i][j];
                k++;
            }
            j++;
        }
        // Penambahan '\0' pada akhir variabel pencatat agar menjadi string
        (*pencatat)[i][k] = '\0';

        k=0; // Variabel untuk index array
        // Fungsi pengulangan untuk memisahkan kalimat buatan tim pencatat
        for(j=j+1; j<strlen(dialog[i]); j++)
        {
            // Fungsi if untuk mengcopy elemen variabel dialog dengan index i,j ke variabel pembuat dengan index i, k
            if(dialog[i][j]!='_')
            {
                (*pembuat)[i][k] = dialog[i][j];
                k++;
            }
        }
        // Penambahan '\0' pada akhir variabel pembuat agar menjadi string
        (*pembuat)[i][k] = '\0';
    }
}

// Fungsi untuk menentukan apakah kalimat tim pembuat termasuk anagram atau bukan
int penentu(char pencatat[][201], char pembuat[][201], int n)
{
    int flag=0, cek, stop;
    /*
        (1) flag = penentu termasuk anagram atau bukan
        (2) cek = untuk mengecek apakah semua huruf pada kalimat tim pembuat ada pada tim pencatat
    */

    // Fungsi if dengan kondisi panjang string pencatat dengan index i sama dengan panjang string pembuat dengan index i
    if(strlen(pencatat[i]) == strlen(pembuat[i]))
    {
        cek=0;
        // Fungsi pengulangan yang nantinya j akan dijadikan index variabel pembuat
        for(j=0; j<strlen(pencatat[i]); j++)
        {
            k=0;
            stop=0;
            // Fungsi pengulangan yang nantinya k akan dijadikan index variabel pencatat
            while((stop!=1) && (k<strlen(pembuat[i])))
            {
                // Fungsi if dengan kondisi kata pada variabel pembuat dengan index i,j sama dengan kata pada variabel pencatat dengan index i,k
                if((pembuat[i][j]==pencatat[i][k]) || (pembuat[i][j]==pencatat[i][k]+32) || (pembuat[i][j]==pencatat[i][k]-32))
                {
                    cek++;
                    // Pengubahan agar tidak dicek kembali
                    pencatat[i][k]='#';
                    // Tanda agar fungsi while stop (menemukan huruf yang sama)
                    stop=1;
                }
                k++;
            }
        }
        // Fungsi if dengan kondisi semua huruf pada variabe pembuat dan pencatat dengan index i sama
        if(cek==strlen(pembuat[i]))
        {
            flag=1;
        }
    }

    // Mengembalikan nilai pada variabel flag
    return flag;
}

// Fungsi untuk mengkonversikan durasi ke detik
int waktu(char durasi[], int anagram)
{
    int detik=0, cekmenit=0, cekdetik=0;
    /*
        (1) detik = untuk menyimpan konversi durasi menjadi detik
        (2) cekmenit = untuk menit yang puluhan, nanti dikali 10
        (3) cekdetik = untuk detik yang puluhan, nanti dikali 10
    */

    // Penambahan & pengkonversian jam ke detik
    detik+=((int)durasi[0]-48)*3600;

    // Penambahan & pengkonversian menit ke detik
    if(durasi[2]!='0')
    {
        cekmenit+=((int)durasi[2]-48)*10;
    }
    detik+=(cekmenit+((int)durasi[3]-48))*60;

    // Penambahan detik
    if(durasi[5]!='0')
    {
        cekdetik+=((int)durasi[5]-48)*10;
    }
    detik+=(cekdetik+((int)durasi[6]-48));

    // Penambahan banyaknya anagram
    detik+=anagram;

    // Mengembalikan nilai variabel detik
    return detik;
}

// Fungsi untuk menentukan apakah keadaan selanjutnya harus tidur atau nonton
int keadaan(int detik)
{
    int flag=0, penentu=0;
    /*
        (1) flag = buat tanda kesamaan angka (polindrom) yang nantinya akan mempengaruhi nilai penentu
        (2) penentu = penentu apakah angka termasuk polindrom (1) atau bukan (0)
    */

    // Kondisi dimana detik lebih besar sama dengan 10k
    if(detik>=10000)
    {
        // Pengecekan kesamaan nilai puluhan ribuan dengan satuan
        if((detik/10000)==(detik%10))
        {
            flag++;
        }
        // Pengecekan kesamaan nilai ribuan dengan puluhan
        if((detik%10000/1000)==(detik%100/10))
        {
            flag++;
        }
        if(flag==2)
        {
            penentu=1;
        }
    }
    // Kondisi lain dimana detik lebih besar sama dengan 1k
    else if(detik>=1000)
    {
        // Pengecekan kesamaan nilai ribuan dengan satuan
        if((detik/1000)==(detik%10))
        {
            flag++;
        }
        // Pengecekan kesamaan nilai ratusan dengan puluhan
        if((detik%1000/100)==(detik%100/10))
        {
            flag++;
        }
        if(flag==2)
        {
            penentu=1;
        }
    }
    // Kondisi lain dimana detik lebih besar sama dengan 100
    else if(detik>=100)
    {
        // Pengecekan kesamaan nilai ratusan dengan satuan
        if((detik/100)==(detik%10))
        {
            penentu=1;
        }
    }
    // Kondisi lain dimana detik lebih besar sama dengan 10
    else if(detik>=10)
    {
        // Pengecekan kesamaan nilai puluhan dengan satuan
        if((detik/10)==(detik%10))
        {
            penentu=1;
        }
    }
    // Kondisi lain dimana detik lebih besar sama dengan 1
    else
    {
        penentu=1;
    }

    // Mengembalikan nilai penentu
    return penentu;
}