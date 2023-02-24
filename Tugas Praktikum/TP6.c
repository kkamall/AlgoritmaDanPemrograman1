/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal TP6 Alpro 1 C1 2021 - SB21
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

// Libray :
#include <stdio.h> // Deklarasi I/O

// Tipe data terstruktur buat variabel barang
typedef struct
{
    char c, m, a; // "c" = Kode barang, "m" = Nama barang, "a" = Kode barang yang terjual
    int b, x; //---- "b" = Kode biner, "x" = Jumlah yang terjual
}barang; //--------- Nama pengikat variabel di atas

// Deklarasi fungsi :
int main()
{
    // Deklarasi Variabel
    int n, i, im = 0, ib; //-------------------- "n" = jumlah barang, "i" = iterasi, "im" = index elemen m, "ib" = index elemen b
    scanf("%d", &n); //------------------------- Fungsi minta input dari user untuk nilai variabel n
    barang x[100]; //--------------------------- Array x yang nanti variabelnya dari tipe data struktur barang

    // Fungsi pengulangan buat minta masukan user
    for(i=0; i<n; i++) //----------------------- Fungsi pengulangan buat nentuin nilai i yang akan dijadikan index
    {
        scanf(" %c", &x[i].c); //--------------- Minta masukan user buat kode barang
        scanf(" %c", &x[im].m); //-------------- Minta masukan user buat nama barang
        while(x[im].m != ';') //---------------- Fungsi while buat minta nama barang user sampai ";"
        {
            im++; //---------------------------- Nilai im ditambah 1 
            scanf(" %c", &x[im].m); //---------- Meminta input dari user untuk nama barang
        }
        if(i<n-1) //---------------------------- Fungsi if dengan kondisi nilai kurang dari nilai n dikurangi 1
        {
            im+=1; //--------------------------- Nilai im ditambah 1
        }
        for(ib=8*i; ib<8*(i+1); ib++) //-------- Fungsi pengulangan nentuin index b
        {
            scanf("%d", &x[ib].b); //----------- Minta masukan user buat kode biner
        }
    }
    
    scanf(" %c", &x[0].a); //------------------- Minta masukan user untuk elemen x.a yang pertama
    if(x[0].a != '*') //------------------------ Fungsi if dengan kondisi elemen x.a tidak sama dengan "*"
    {
        scanf(" %d", &x[0].x); //--------------- Minta masukan user elemen arr x.x yang pertama
    }
    i=0; //------------------------------------- Nilai i = 0
    while(x[i].a != '*') //--------------------- Fungsi while buat minta kode user barang yang terjual dan jumlah barang yang terjual sampai elemen arr x.a "*"
    {
        i++; //--------------------------------- Nilai i bertambah 1
        scanf(" %c", &x[i].a); //--------------- Minta masukan user buat kode barang yang terjual
        if(x[i].a != '*') //-------------------- Fungsi if dengan kondisi elemen array x.a dengan index i bukan "*"
        {
            scanf(" %d", &x[i].x); //----------- Minta masukan user untuk jumlah barang yang terjual
        }
    }
    int temp = i; //---------------------------- Variabel buat nyimpen nilai i sementara
    
    // Konversi biner ke desimal
    int desimal[100], ulang, hitung=0; //------- Arr desimal = buat nyimpen nilai desimal, ulang = buat pengulangan, hitung = variabel buat nyimen nilai desimal sementara
    for(ulang=0; ulang<n; ulang++) //----------- Fungsi pengulangan
    {
        for(ib=8*ulang; ib<8*(ulang+1); ib++) // Fungsi pengulangan buat index ib
        {
            hitung*=2; //----------------------- Nilai variabel hitung kali 2
            if(x[ib].b == 1) //----------------- Fungsi if dengan kondisi elemen array x.b dengan index ib sama dengan 1
            {
                hitung+=1; //------------------- Jika kondisi terpenuhi nilai variabel hitung ditambah 1
            }
        }
        desimal[ulang] = hitung; //------------- Nilai pada elemen hitung disimpan di array desimal dengan index nilai variabel ulang
        hitung = 0; //-------------------------- Nilai variabel hitung jadi 0 lagi
    }

    int baris; //------------------------------- Variabel buat nentuin berapa baris output
    printf("Stok Barang Awal\n"); //------------ Fungsi untuk memberikan output yang ada di dalam ""
    
    im=0; //------------------------------------ Nilai variabel im jadi 0
    for(baris=0; baris<n; baris++) //----------- Fungsi pengulangan
    {
        printf("- "); //------------------------ Fungsi untuk memberikan output yang ada di dalam ""
        printf("%c ", x[baris].c); //----------- Fungsi untuk memberikan output elemen array x.c dengan index nilai variabel baris
        while(x[im].m != ';') //---------------- Fungsi while dengan kondisi jika elemen arr x.m dengan index nilai variabel im tidak sama dengan ";"
        {
            printf("%c", x[im].m); //----------- Fungsi untuk memberikan output elemen arr x.m dengan index nilai variabel im, jiak kondisi terpenuhi
            im++; //---------------------------- Nilai variabel im ditambah 1
        }
        im+=1; //------------------------------- Nilai variabel im ditambah 1
        printf(" "); //------------------------- Fungsi untuk memberikan output yang ada di dalam "" (spasi)
        printf("%d", desimal[baris]); //-------- Fungsi untuk memberikan output elemen arr desimal dengan index nilai baris
        printf("\n"); //------------------------ Fungsi untuk memberikan new line
    }

    if(x[0].a == '*') //------------------------ Fungsi if dengan kondisi elemen array x.a dengan index 0 sama dengan "*"
    {
        printf("\n---Stok Tetap---\n"); //------ Fungsi untuk memberikan output yang ada di dalam ""
    }
    else //------------------------------------- Kondisi jika fungsi if sebelumnya tidak terpenuhi
    {
        printf("\nStok Barang Update\n"); //---- Fungsi untuk memberikan output yang ada di dalam ""
        im=0; //-------------------------------- Nilai variabel im sama dengan 0
        for(baris=0; baris<n; baris++) //------- Fungsi pengulangan 
        {
            printf("- "); //-------------------- Fungsi untuk memberikan output yang ada di dalam ""
            printf("%c ", x[baris].c); //------- Fungsi untuk memberikan output elemen array x.c dengan index nilai variabel baris
            while(x[im].m != ';') //------------ Fungsi while dengan kondisi elemen array x.m dengan index nilai variabel im tidak sama dengan ";"
            {
                printf("%c", x[im].m); //------- Fungsi untuk memberikan output elemen array x.m dengan index nilai variabel im
                im++; //------------------------ Nilai variabel im bertambah 1
            }
            im+=1; //--------------------------- Nilai variabel im bertambah 1
            printf(" "); //--------------------- Fungsi untuk memberikan spasi
            for(i=0; i<=temp; i++) //----------- Fungsi pengulangan untuk nentuin nilai i, yang nantinya akan dijadikan index
            {
                if(x[baris].c == x[i].a) //----- Fungsi if dengan kondisi elemen array x.c dengan index nilai variabel baris sama dengan elemen array x.a dengan index nilai variabel i
                {
                    desimal[baris]-=x[i].x; //-- Jika kondisi terpenuhi maka elemen array desimal dengan index nilai variabel baris akan dikurangi elemen array x.x dengan index nilai variabel i
                }
            }
            if(desimal[baris] < 0) //----------- Fungsi jika elemen array desimal dengan index nilai variabel baris kurang dari 0
            {
                printf("0"); //----------------- Jika terpenuhi makan akan memberikan output 0
            }
            else //----------------------------- Fungsi jika kondisi if sebelumnya tidak terpenuhi
            {
                printf("%d", desimal[baris]); // Fungsi memberikan output elemen array desimal dengan index nilai variabel baris
            }
            printf("\n"); //-------------------- Fungsi untuk memberikan new line
        }
    }
    
    return 0; //-------------------------------- Fungsi yang memberikan sistem operasi tanda untuk keluar dari program
}