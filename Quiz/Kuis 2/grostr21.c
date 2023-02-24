/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal Kusi 2 Alpro 1 C1 2021 - grostr21
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

// Library :
#include <stdio.h>  // Deklarasi I/O
#include <string.h> // Operasi string

// Deklarasi Fungsi :
int main()
{
    int n, i, j, l, spasi, maks;
    /*
        (1) n = banyaknya string
        (2) i, j, l = buat indeks pada fungsi for
        (3) spasi = variabel untuk menentukan banyaknya print spasi
        (4) maks = varibel untuk menyimpain nilai panjang string terpanjang
    */
    scanf("%d", &n);
    char str[n][201]; // Array string

    // Fungsi for untuk meminta inputan string dari user sebanyak n
    for(i=0; i<n; i++)
    {
        scanf("%s", str[i]);
    }

    // Mencari nilai panjang string terpanjang
    maks=strlen(str[0]);            // Nilai maks sama dengan panjang string dengan indeks 0
    for(i=1; i<n; i++)
    {
        if(maks<strlen(str[i]))     // Fungsi if dengan kondisi ada string yang panjangan lebih panjang dari nilai maks
        {
            maks=strlen(str[i]);    // Nilai maks berganti menjadi panjang dari string yang lebih besar nilainya dari nilai maks
        }
    }

    // Memberikan keluaran
    i=1;
    for(j=0; j<n; j++)
    {
        // Fungsi if jika nilai dari i lebih besar sama dengan n,maka nilai i menjadi sama dengan j
        if(i>=n)
        {
            i=j;
        }
        // Fungsi for untuk memberikan keluaran spasi
        for(spasi=0; spasi<maks-strlen(str[j]); spasi++)
        {
            printf(" ");
        }
        // Fungsi for untuk memberikan keluaran karakter dari array string dengan indeks l string ke j
        for(l=strlen(str[j])-1; l>=0; l--)
        {
            printf("%c", str[j][l]);
        }
        // Memberiakan new line
        printf("\n");
        // Fungsi if dengan kondisi array string dengan indeks j lebih besar dari array string dengan indeks i, maka akan memberika new line
        if(strlen(str[j])>strlen(str[i]))
        {
            printf("\n");
        }
        // Iterasi dari i
        i++;
    }

    // Fungsi yang memberikan sistem operasi tanda untuk keluar dari program
    return 0;
}