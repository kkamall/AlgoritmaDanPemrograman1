/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal TMD Alpro 1 C1 2021 - tmdap121
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// Fungsi untuk memisahkan nilai ascii perhuruf
int pemisahan(char str[], int i)
{
    int nilai;
    /*
        (1) Nilai = Variabel untuk menyimpan nilai per ascii
    */

    nilai = str[i];

    // Mengembalikan nilai pada variabel nilai
    return nilai;
}

// Fungsi untuk memisahkan nilai ascii suatu huruf bagian depan
int pisahdepan(int nilaihuruf[], int i)
{
    int nilai;
    /*
        (1) Nilai = Variabel untuk menyimpan nilai depan ascii suatu huruf
    */

    // Fungsi if yang menunjukkan bahwa angka merupakan puluhan, maka akan dibagi 10
    if(nilaihuruf[i]/10<10)
    {
        nilai = nilaihuruf[i]/10;
    }
    // Fungsi if yang menunjukkan bahwa angka merupakan ratusan, maka akan dibagi 100
    else
    {
        nilai = nilaihuruf[i]/100;
    }

    // Mengembalikan nilai pada variabel nilai
    return nilai;
}

// Fungsi untuk memisahkan nilai ascii suatu huruf bagian tengah
int pisahtengah(int nilaihuruf[], int i)
{
    int nilai;
    /*
        (1) Nilai = Variabel untuk menyimpan nilai tengah ascii suatu huruf
    */

    nilai = nilaihuruf[i]/10%10;

    // Mengembalikan nilai pada variabel nilai
    return nilai;
}

int pisahbelakang(int nilaihuruf[], int i)
{
    int nilai;
    /*
        (1) Nilai = Variabel untuk menyimpan nilai belakang ascii suatu huruf
    */
    
    nilai = nilaihuruf[i]%10;

    // Mengembalikan nilai pada variabel nilai
    return nilai;
}

// Prosedur untuk memberikan keluaran pola pada baris 1
void pola1(int nilai[], int ketebalan, char str[], int batas)
{
    int i, j, k, l, m;
    /*
        (1) i, j, k = Variabel untuk jadi index array
        (2) l, m = Variabel buat jadi batas
    */

    // Fungsi pengulangan untuk memberikan keluaran pola
    for(k=0; k<ketebalan; k++)
    {
        m=2;
        l=0;
        // Fungsi pengulangan untuk dijadikan index array variabel nilai
        for(i=0; i<batas; i++)
        {
            // Fungsi if dengan kondisi nilai pada variabel nilai dengan index i adalah 0, 2, 5, 6, 8, 9
            if((nilai[i]==0) || (nilai[i]==2) || (nilai[i]==5) || (nilai[i]==6) || (nilai[i]==8) || (nilai[i]==9))
            {
                // Fungsi pengulangan untuk memberikan keluaran spasi
                for(j=0; j<ketebalan; j++)
                {
                    printf(" ");
                }
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
                // Fungsi if untuk menghindari adanya spasi di akhir
                if(i!=batas-1)
                {
                    // Fungsi pengulangan untuk memberikan keluaran spasi
                    for(j=0; j<ketebalan; j++)
                    {
                        printf(" ");
                    }
                }
            }
            // Fungsi if dengan kondisi nilai pada variabel nilai dengan index i adalah 1
            if(nilai[i]==1)
            {
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
            }
            // Fungsi if dengan kondisi nilai pada variabel nilai dengan index i adalah 3
            if(nilai[i]==3)
            {
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
                // Fungsi if untuk menghindari adanya spasi di akhir
                if(i!=batas-1)
                {
                    // Fungsi pengulangan untuk memberikan keluaran spasi
                    for(j=0; j<ketebalan; j++)
                    {
                        printf(" ");
                    }
                }
            }
            // Fungsi if dengan kondisi nilai pada variabel nilai dengan index i adalah 4
            if(nilai[i]==4)
            {
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
                // Fungsi pengulangan untuk memberikan keluaran spasi
                for(j=0; j<ketebalan; j++)
                {
                    printf(" ");
                }
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
            }
            // Fungsi if dengan kondisi nilai pada variabel nilai dengan index i adalah 7
            if(nilai[i]==7)
            {
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
                // Fungsi if untuk menghindari adanya spasi di akhir
                if(i!=batas-1)
                {
                    // Fungsi pengulangan untuk memberikan keluaran spasi
                    for(j=0; j<ketebalan; j++)
                    {
                        printf(" ");
                    }
                }
            }
            // Fungsi while untuk memberikan spasi per-angka dalam satu ascii
            while((l<=i) && (l<batas-1) && (nilai[i]<10))
            {
                // Fungsi pengulangan untuk memberikan keluaran spasi
                for(j=0; j<ketebalan; j++)
                {
                    printf(" ");
                }
                l++;
            }
            if(nilai[i]>10)
            {
                l++;
            }
            // Fungsi while untuk memberikan spasi tiap ascii huruf
            while((m<=i) && (m<batas-1))
            {
                // Fungsi pengulangan untuk memberikan keluaran spasi
                for(j=0; j<ketebalan; j++)
                {
                    printf(" ");
                }
                m+=3;
            }
        }
        // Memberikan baris baru
        printf("\n");
    }
}

// Prosedur untuk memberikan keluaran pola pada baris 2
void pola2(int nilai[], int ketebalan, char str[], int batas)
{
    int i, j, k, l, m;
    /*
        (1) i, j, k = Variabel untuk jadi index array
        (2) l, m = Variabel buat jadi batas
    */

    // Fungsi pengulangan untuk memberikan keluaran pola
    for(k=0; k<ketebalan; k++)
    {
        m=2;
        l=0;
        // Fungsi pengulangan untuk dijadikan index array variabel nilai
        for(i=0; i<batas; i++)
        {
            // Fungsi if dengan kondisi nilai pada variabel nilai dengan index i adalah 0, 4, 8, 9
            if((nilai[i]==0) || (nilai[i]==4) || (nilai[i]==8) || (nilai[i]==9))
            {
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
                // Fungsi pengulangan untuk memberikan keluaran spasi
                for(j=0; j<ketebalan; j++)
                {
                    printf(" ");
                }
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
            }
            // Fungsi if dengan kondisi nilai pada variabel nilai dengan index i adalah 1
            if(nilai[i]==1)
            {
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
            }
            // Fungsi if dengan kondisi nilai pada variabel nilai dengan index i adalah 2 atau 7
            if((nilai[i]==2) || (nilai[i]==7))
            {
                // Fungsi pengulangan untuk memberikan keluaran spasi
                for(j=0; j<ketebalan; j++)
                {
                    printf(" ");
                }
                // Fungsi pengulangan untuk memberikan keluaran spasi
                for(j=0; j<ketebalan; j++)
                {
                    printf(" ");
                }
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
            }
            // Fungsi if dengan kondisi nilai pada variabel nilai dengan index i adalah 3
            if(nilai[i]==3)
            {
                // Fungsi pengulangan untuk memberikan keluaran spasi
                for(j=0; j<ketebalan; j++)
                {
                    printf(" ");
                }
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
            }
            // Fungsi if dengan kondisi nilai pada variabel nilai dengan index i adalah 5 atau 6
            if((nilai[i]==5) || (nilai[i]==6))
            {
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
                // Fungsi if untuk menghindari adanya spasi di akhir
                if(i!=batas-1)
                {
                    // Fungsi pengulangan untuk memberikan keluaran spasi
                    for(j=0; j<ketebalan; j++)
                    {
                        printf(" ");
                    }
                }
                // Fungsi if untuk menghindari adanya spasi di akhir
                if(i!=batas-1)
                {
                    // Fungsi pengulangan untuk memberikan keluaran spasi
                    for(j=0; j<ketebalan; j++)
                    {
                        printf(" ");
                    }
                }
            }
            // Fungsi while untuk memberikan spasi per-angka dalam satu ascii
            while((l<=i) && (l<batas-1) && (nilai[i]<10))
            {
                // Fungsi pengulangan untuk memberikan keluaran spasi
                for(j=0; j<ketebalan; j++)
                {
                    printf(" ");
                }
                l++;
            }
            if(nilai[i]>10)
            {
                l++;
            }
            // Fungsi while untuk memberikan spasi tiap ascii huruf
            while((m<=i) && (m<batas-1))
            {
                // Fungsi pengulangan untuk memberikan keluaran spasi
                for(j=0; j<ketebalan; j++)
                {
                    printf(" ");
                }
                m+=3;
            }
        }
        // Memberikan baris baru
        printf("\n");
    }
}

// Prosedur untuk memberikan keluaran pola pada baris 3
void pola3(int nilai[], int ketebalan, char str[], int batas)
{
    int i, j, k, l, m;
    /*
        (1) i, j, k = Variabel untuk jadi index array
        (2) l, m = Variabel buat jadi batas
    */

    // Fungsi pengulangan untuk memberikan keluaran pola
    for(k=0; k<ketebalan; k++)
    {
        m=2;
        l=0;
        // Fungsi pengulangan untuk dijadikan index array variabel nilai
        for(i=0; i<batas; i++)
        {
            // Fungsi if dengan kondisi nilai pada variabel nilai dengan index i adalah 0
            if(nilai[i]==0)
            {
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
                // Fungsi pengulangan untuk memberikan keluaran spasi
                for(j=0; j<ketebalan; j++)
                {
                    printf(" ");
                }
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
            }
            // Fungsi if dengan kondisi nilai pada variabel nilai dengan index i adalah 1
            if(nilai[i]==1)
            {
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
            }
            // Fungsi if dengan kondisi nilai pada variabel nilai dengan index i adalah 2, 4, 5, 6, 8, atau 9
            if((nilai[i]==2) || (nilai[i]==4) || (nilai[i]==5) || (nilai[i]==6) || (nilai[i]==8) || (nilai[i]==9))
            {
                // Fungsi pengulangan untuk memberikan keluaran spasi
                for(j=0; j<ketebalan; j++)
                {
                    printf(" ");
                }
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
                // Fungsi if untuk menghindari adanya spasi di akhir
                if(i!=batas-1)
                {
                    // Fungsi pengulangan untuk memberikan keluaran spasi
                    for(j=0; j<ketebalan; j++)
                    {
                        printf(" ");
                    }
                }
            }
            // Fungsi if dengan kondisi nilai pada variabel nilai dengan index i adalah 3
            if(nilai[i]==3)
            {
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
                // Fungsi if untuk menghindari adanya spasi di akhir
                if(i!=batas-1)
                {
                    // Fungsi pengulangan untuk memberikan keluaran spasi
                    for(j=0; j<ketebalan; j++)
                    {
                        printf(" ");
                    }
                }
            }
            // Fungsi if dengan kondisi nilai pada variabel nilai dengan index i adalah 7
            if(nilai[i]==7)
            {
                // Fungsi pengulangan untuk memberikan keluaran spasi
                for(j=0; j<ketebalan; j++)
                {
                    printf(" ");
                }
                // Fungsi pengulangan untuk memberikan keluaran spasi
                for(j=0; j<ketebalan; j++)
                {
                    printf(" ");
                }
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
            }
            // Fungsi while untuk memberikan spasi per-angka dalam satu ascii
            while((l<=i) && (l<batas-1) && (nilai[i]<10))
            {
                // Fungsi pengulangan untuk memberikan keluaran spasi
                for(j=0; j<ketebalan; j++)
                {
                    printf(" ");
                }
                l++;
            }
            if(nilai[i]>10)
            {
                l++;
            }
            // Fungsi while untuk memberikan spasi tiap ascii huruf
            while((m<=i) && (m<batas-1))
            {
                // Fungsi pengulangan untuk memberikan keluaran spasi
                for(j=0; j<ketebalan; j++)
                {
                    printf(" ");
                }
                m+=3;
            }
        }
        // Memberikan baris baru
        printf("\n");
    }
}

// Prosedur untuk memberikan keluaran pola pada baris 4
void pola4(int nilai[], int ketebalan, char str[], int batas)
{
    int i, j, k, l, m;
    /*
        (1) i, j, k = Variabel untuk jadi index array
        (2) l, m = Variabel buat jadi batas
    */

    // Fungsi pengulangan untuk memberikan keluaran pola
    for(k=0; k<ketebalan; k++)
    {
        m=2;
        l=0;
        // Fungsi pengulangan untuk dijadikan index array variabel nilai
        for(i=0; i<batas; i++)
        {
            // Fungsi if dengan kondisi nilai pada variabel nilai dengan index i adalah 0, 6, atau 8
            if((nilai[i]==0) || (nilai[i]==6) || (nilai[i]==8))
            {
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
                // Fungsi pengulangan untuk memberikan keluaran spasi
                for(j=0; j<ketebalan; j++)
                {
                    printf(" ");
                }
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
            }
            // Fungsi if dengan kondisi nilai pada variabel nilai dengan index i adalah 1
            if(nilai[i]==1)
            {
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
            }
            // Fungsi if dengan kondisi nilai pada variabel nilai dengan index i adalah 2
            if(nilai[i]==2)
            {
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
                // Fungsi if untuk menghindari adanya spasi di akhir
                if(i!=batas-1)
                {
                    // Fungsi pengulangan untuk memberikan keluaran spasi
                    for(j=0; j<ketebalan; j++)
                    {
                        printf(" ");
                    }
                }
                // Fungsi if untuk menghindari adanya spasi di akhir
                if(i!=batas-1)
                {
                    // Fungsi pengulangan untuk memberikan keluaran spasi
                    for(j=0; j<ketebalan; j++)
                    {
                        printf(" ");
                    }
                }
            }
            // Fungsi if dengan kondisi nilai pada variabel nilai dengan index i adalah 3
            if(nilai[i]==3)
            {
                // Fungsi pengulangan untuk memberikan keluaran spasi
                for(j=0; j<ketebalan; j++)
                {
                    printf(" ");
                }
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
            }
            // Fungsi if dengan kondisi nilai pada variabel nilai dengan index i adalah 4, 5, 7, atau 9
            if((nilai[i]==4) || (nilai[i]==5) || (nilai[i]==7) || (nilai[i]==9))
            {
                // Fungsi pengulangan untuk memberikan keluaran spasi
                for(j=0; j<ketebalan; j++)
                {
                    printf(" ");
                }
                // Fungsi pengulangan untuk memberikan keluaran spasi
                for(j=0; j<ketebalan; j++)
                {
                    printf(" ");
                }
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
            }
            // Fungsi while untuk memberikan spasi per-angka dalam satu ascii
            while((l<=i) && (l<batas-1) && (nilai[i]<10))
            {
                // Fungsi pengulangan untuk memberikan keluaran spasi
                for(j=0; j<ketebalan; j++)
                {
                    printf(" ");
                }
                l++;
            }
            if(nilai[i]>10)
            {
                l++;
            }
            // Fungsi while untuk memberikan spasi tiap ascii huruf
            while((m<=i) && (m<batas-1))
            {
                // Fungsi pengulangan untuk memberikan keluaran spasi
                for(j=0; j<ketebalan; j++)
                {
                    printf(" ");
                }
                m+=3;
            }
        }
        // Memberikan baris baru
        printf("\n");
    }
}

// Prosedur untuk memberikan keluaran pola pada baris 5
void pola5(int nilai[], int ketebalan, char str[], int batas)
{
    int i, j, k, l, m;
    /*
        (1) i, j, k = Variabel untuk jadi index array
        (2) l, m = Variabel buat jadi batas
    */

    // Fungsi pengulangan untuk memberikan keluaran pola
    for(k=0; k<ketebalan; k++)
    {
        m=2;
        l=0;
        // Fungsi pengulangan untuk dijadikan index array variabel nilai
        for(i=0; i<batas; i++)
        {
            // Fungsi if dengan kondisi nilai pada variabel nilai dengan index i adalah 0, 2, 5, 6, 8, atau 9
            if((nilai[i]==0) || (nilai[i]==2) || (nilai[i]==5) || (nilai[i]==6) || (nilai[i]==8) || (nilai[i]==9))
            {
                // Fungsi pengulangan untuk memberikan keluaran spasi
                for(j=0; j<ketebalan; j++)
                {
                    printf(" ");
                }
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
                // Fungsi if untuk menghindari adanya spasi di akhir
                if(i!=batas-1)
                {
                    // Fungsi pengulangan untuk memberikan keluaran spasi
                    for(j=0; j<ketebalan; j++)
                    {
                        printf(" ");
                    }
                }
            }
            // Fungsi if dengan kondisi nilai pada variabel nilai dengan index i adalah 1
            if(nilai[i]==1)
            {
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
            }
            // Fungsi if dengan kondisi nilai pada variabel nilai dengan index i adalah 3
            if(nilai[i]==3)
            {
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
                // Fungsi if untuk menghindari adanya spasi di akhir
                if(i!=batas-1)
                {
                    // Fungsi pengulangan untuk memberikan keluaran spasi
                    for(j=0; j<ketebalan; j++)
                    {
                        printf(" ");
                    }
                }
            }
            // Fungsi if dengan kondisi nilai pada variabel nilai dengan index i adalah 4 atau 7
            if((nilai[i]==4) || (nilai[i]==7))
            {
                // Fungsi pengulangan untuk memberikan keluaran spasi
                for(j=0; j<ketebalan; j++)
                {
                    printf(" ");
                }
                // Fungsi pengulangan untuk memberikan keluaran spasi
                for(j=0; j<ketebalan; j++)
                {
                    printf(" ");
                }
                // Fungsi pengulangan untuk memberikan keluaran 'B'
                for(j=0; j<ketebalan; j++)
                {
                    printf("B");
                }
            }
            // Fungsi while untuk memberikan spasi per-angka dalam satu ascii
            while((l<=i) && (l<batas-1) && (nilai[i]<10))
            {
                // Fungsi pengulangan untuk memberikan keluaran spasi
                for(j=0; j<ketebalan; j++)
                {
                    printf(" ");
                }
                l++;
            }
            if(nilai[i]>10)
            {
                l++;
            }
            // Fungsi while untuk memberikan spasi tiap ascii huruf
            while((m<=i) && (m<batas-1))
            {
                // Fungsi pengulangan untuk memberikan keluaran spasi
                for(j=0; j<ketebalan; j++)
                {
                    printf(" ");
                }
                m+=3;
            }
        }
        // Memberikan baris baru
        printf("\n");
    }
}