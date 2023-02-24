/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal Evaluasi Alpro 1 C1 2021 - PPHT21
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

//Library :
#include <stdio.h>

//Deklarasi Fungsi :
int main()
{

//Deklarasi Variabel :
    int m, set, ulang; // (1) m = alokasi array, (2) set = buat nyimpen nilai m/2, (3) buat pengulangan ketika m < n
    scanf("%d", &m); //-- Minta inputan alokasi dari user
    char x[m]; //-------- Array dengan alokasi m
    char huruf; //------- Variabel buat index array x
    set = m/2;

    for(huruf=0; huruf<m ; huruf++) // Fungsi pengulangan dengan indexnya m dimulai dari 0
    {
        scanf(" %c", &x[huruf]); //--- Fungsi minta elemen dari array dengan index m
    }

    int n, ayam, kucing=m; // (1) n = buat nentuin pola, (2) ayam =Nyimpen nilai dengan rumus ada di bawah, (3) kucing = nyimpen nilai m-1 kalau m nya ganjil
    scanf("%d", &n); //------ Minta inputan user buat n yang nantinya bakal nentuin pola
    
//Fungsi if untuk nyari nilai ayam
    if(m%2==1)
    {
        ayam = m-set-1;
    }
    else
    {
        ayam = m-set;
    }
    
//Fungsi if untuk nyari nilai kucing
    if(m%2==1)
    {
        kucing = m-1;
    }
    
    int baris, spasi, z=2; // (1) baris = buat nentuin barisnya, (2) spasi = buat nentuin spasi, (3) z = nilai baris atas yang setiap kelipatan 10 bakal nambah 1

    if(n>=10) // Fungsi if untuk nambahin nilai z kalau ketipatan 10 n-nya
    {
        z = z + (n/10);
    }

//Penentuan pola
    //Bagian atas
        for(baris=1; baris<=z; baris++)
        {
            for(spasi=0; spasi<z-baris; spasi++)
            {
                printf(" ");
            }
            huruf=0;
            for(ulang=1; ulang<=n-z*2+baris*2; ulang++)
            {
                printf("%c", x[huruf]);
                huruf++;
                if(huruf>=ayam)
                {
                    huruf=0;
                }
            }
            for(spasi=0; spasi<z*2-1-((baris-1)*2); spasi++)
            {
                printf(" ");
            }
            huruf=ayam;
            for(ulang=0; ulang<n-z*2+baris*2; ulang++)
            {
                printf("%c", x[huruf]);
                huruf++;
                if(huruf==m)
                {
                    huruf=ayam;
                }
            }
            printf("\n");
        }

    // Baris Tengah
        huruf=0;
        for(ulang=1; ulang<=n-1; ulang++)
        {
            printf("%c", x[huruf]);
            huruf++;
            if(huruf>=ayam)
            {
                huruf=0;
            }
        }
        printf("  ");
        huruf=ayam;
        for(ulang=0; ulang<n; ulang++)
        {
            printf("%c", x[huruf]);
            huruf++;
            if(huruf==m)
            {
                huruf=ayam;
            }
        }
        printf("\n");

        int h=n, i=n; 

    // Baris bawah
        for(baris=1; baris<=n-1; baris++)
        {
            if(baris%2==0)
            {
                h-=2;
            }
            if((baris%2!=0) && (baris!=1))
            {
                i-=2;
            }
            for(spasi=0; spasi<baris; spasi++)
            {
                printf(" ");
            }
            huruf=0;
            for(ulang=1; ulang<=h-1; ulang++)
            {
                printf("%c", x[huruf]);
                huruf++;
                if(huruf>=ayam)
                {
                    huruf=0;
                }
            }
            if(baris<=n-2)
            {
                printf("  ");
            }
            if((baris==n-1) && (n%2==1))
            {
                printf("  ");
            }
            huruf=ayam;
            for(ulang=1; ulang<=i-2; ulang++)
            {
                printf("%c", x[huruf]);
                huruf++;
                if(huruf==m)
                {
                    huruf=ayam;
                }
            }
            printf("\n");
        }
        for(spasi=0; spasi<n; spasi++)
        {
            printf(" ");
        }
        if(n%2==0)
        {
            printf("%c", x[0]);
        }
        else
        {
            printf("%c", x[ayam]);
        }
        printf("\n");
    

    return 0; // Fungsi yang memberikan sistem operasi tanda untuk keluar dari program.
}