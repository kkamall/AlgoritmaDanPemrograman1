/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal UTS Alpro 1 C1 2021 - plprbt21
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

//Library :
#include <stdio.h>

//Deklarasi fungsi :
int main()
{
    //Deklarasi variabel
    int pola; //----------- Variabel buat nyimpen nilai yang nanti jadi pola
    scanf("%d", &pola);//-- Fungsi untuk meminta input dari user

    //Pesawatnya saya bakal bagi menjadi 5 bagian dimulai dari yang atas
    int baris, spasi, bintang; //------------------- Variabel baris = buat baris, spasi = buat spasi, bintang = buat bintang
    
    // Fungsi pengulangan, untuk nentuin bagian pertama
    for(baris=1; baris<=pola; baris++)
    {
        for(spasi=0; spasi<pola*6-baris; spasi++) // Fungsi pengulangan spasi 
        {
            printf(" "); //------------------------- Fungsi buat ngeluarin spasi
        }
        for(bintang=0; bintang<baris; bintang++) //- Fungsi pengulangan bintang
        {
            printf("*"); //------------------------- Fungsi buat ngeluarin bintang
        }
        printf("\n"); //---------------------------- Fungsi buat ngasih baris baru
    }

    // Fungsi pengulangan untuk nentuin kapal bagian kedua
    for(baris=1; baris<=pola; baris++)
    {
        for(spasi=pola*2-1; spasi>=baris; spasi--)// Fungsi pengulangan spasi
        {
            printf(" "); //------------------------- Fungsi buat ngeluarin spasi
        }
        for(bintang=0; bintang<baris; bintang++) //- Fungsi pengulangan bintang
        {
            printf("*"); //------------------------- Fungsi buat ngeluarin bintang
        }
        for(spasi=0; spasi<pola*2; spasi++) //------ Fungsi pengulangan spasi
        {
            printf(" "); //------------------------- Fungsi buat ngeluarin spasi
        }
        for(bintang=0; bintang<pola; bintang++) //-- Fungsi pengulangan bintang
        {
            printf("*"); //------------------------- Fungsi buat ngeluarin bintang
        }
        for(spasi=0; spasi<pola*4-baris; spasi++) // Fungsi pengulangan spasi
        {
            printf(" "); //------------------------- Fungsi buat ngeluarin spasi
        }
        for(bintang=0; bintang<baris; bintang++)//-- Fungsi pengulangan bintang
        {
            printf("*"); //------------------------- Fungsi buat ngeluarin bintang
        }
        for(spasi=0; spasi<pola*2+1-baris; spasi++)// Fungsi pengulangan spasi
        {
            printf(" "); //------------------------- Fungsi buat ngeluarin spasi
        }
        for(bintang=0; bintang<baris; bintang++) //- Fungsi pengulangan bintang
        {
            printf("*"); //------------------------- Fungsi buat ngeluarin bintang
        }
        for(bintang=1; bintang<baris; bintang++) //- Fungsi pengulangan bintang
        {
            printf("*"); //------------------------- Fungsi buat ngeluarin bintang
        }
        printf("\n"); //---------------------------- Fungsi buat ngasih baris baru
    }

    // Fungsi pengulangan untuk nentuin kapal bagian 3 (tengah)
    for(baris=1; baris<=pola; baris++)
    {
        for(bintang=0; bintang<pola; bintang++) //-- Fungsi pengulangan bintang
        {
            printf("*"); //------------------------- Fungsi buat ngeluarin bintang
        }
        for(spasi=0; spasi<pola*2; spasi++) //------ Fungsi pengulangan spasi
        {
            printf(" "); //------------------------- Fungsi buat ngeluarin spasi
        }
        for(bintang=0; bintang<pola*3; bintang++) // Fungsi pengulangan bintang
        {
            printf("*"); //------------------------- Fungsi buat ngeluarin bintang
        }
        for(spasi=0; spasi<pola; spasi++) //-------- Fungsi pengulangan spasi
        {
            printf(" "); //------------------------- Fungsi buat ngeluarin spasi
        }
        for(bintang=0; bintang<pola; bintang++) //-- Fungsi pengulangan bintang
        {
            printf("*"); //------------------------- Fungsi buat ngeluarin bintang
        }
        for(spasi=0; spasi<pola*2; spasi++) //------ Fungsi pengulangan spasi
        {
            printf(" "); //------------------------- Fungsi buat ngeluarin spasi
        }
        for(bintang=0; bintang<pola*2+1; bintang++)// Fungsi pengulangan bintang
        {
            printf("*"); //------------------------- Fungsi buat ngeluarin bintang
        }
        printf("\n"); //---------------------------- Fungsi buat ngasih baris baru
    }

    // Fungsi pengulangan untuk nentuin kapal bagian 4
    for(baris=1; baris<=pola; baris++)
    {
        for(spasi=0; spasi<pola-1+baris; spasi++)
        {
            printf(" "); //------------------------- Fungsi buat ngeluarin spasi
        }
        for(bintang=0; bintang<pola+1-baris; bintang++) // Fungsi pengulangan bintang
        {
            printf("*"); //------------------------- Fungsi buat ngeluarin bintang
        }
        for(spasi=0; spasi<pola*2; spasi++) //------ Fungsi pengulangan spasi
        {
            printf(" "); //------------------------- Fungsi buat ngeluarin spasi
        }
        for(bintang=0; bintang<pola; bintang++) //-- Fungsi pengulangan bintang
        {
            printf("*"); //------------------------- Fungsi buat ngeluarin bintang
        }
        for(spasi=0; spasi<pola*3-1+baris; spasi++) // Fungsi pengulangan spasi
        {
            printf(" "); //------------------------- Fungsi buat ngeluarin spasi
        }
        for(bintang=0; bintang<pola+1-baris; bintang++) // Fungsi pengulangan bintang
        {
            printf("*"); //------------------------- Fungsi buat ngeluarin bintang
        }
        for(spasi=0; spasi<pola+baris; spasi++) //-- Fungsi pengulangan spasi
        {
            printf(" "); //------------------------- Fungsi buat ngeluarin spasi
        }
        for(bintang=0; bintang<pola+1-baris; bintang++) // Fungsi pengulangan bintang
        {
            printf("*"); //------------------------- Fungsi buat ngeluarin bintang
        }
        for(bintang=pola-1; bintang>=baris; bintang--) // Fungsi pengulangan bintang
        {
            printf("*"); //------------------------- Fungsi buat ngeluarin bintang
        }
        printf("\n"); //---------------------------- Fungsi buat ngasih baris baru
    }

    // Fungsi pengulangan untuk nentuin kapal bagian 5
    for(baris=1; baris<=pola; baris++)
    {
        for(spasi=0; spasi<pola*5-1+baris; spasi++) // Fungsi pengulangan spasi
        {
            printf(" "); //------------------------- Fungsi buat ngeluarin spasi
        }
        for(bintang=pola; bintang>=baris; bintang--) // Fungsi pengulangan bintang
        {
            printf("*"); //------------------------- Fungsi buat ngeluarin bintang
        }
        printf("\n"); //---------------------------- Fungsi buat ngasih baris baru
    }

    return 0; //------------------------------------ Fungsi yang memberikan sistem operasi tanda untuk keluar dari program
}