/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal UTS Alpro 1 C1 2021 - brarhr21
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

// Library :
#include <stdio.h>

// Deklarasi fungsi:
int main()
{
    //Deklarasi Varibel
    int n; //--------- Variabel untuk menampung nilai akomodasi array x
    scanf("%d", &n);// Meminta input dari user
    char x[n]; //----- Array untuk menampung karakter 
    char index; //---- Variabel untuk index array x

    // Menentukan karakter-karakter
    for(index=0; index<n; index++) // Fungsi pengulangan untuk nentuin index index
    {
        scanf(" %c", &x[index]); //-- Fungsi minta input dari user untuk elemen dengan index = index
    }

    int bindex1, bindex2; //-------------- Variabel (1) Bindex1 = index awal karakter yang akan dicek, (2) Bindex2 = index akhir karakter yang akan dicek kesamaannya
    scanf("%d %d", &bindex1, &bindex2); // Minta input dari user untuk index awal dan akhir elemen array yang bakal dicek kesamaan.

    int m; //---------- Variabel buat menampung nilai akomodasi array y
    scanf("%d", &m); // Fungsi untuk minta input dari user
    char y[m]; //------ Array buat menampung karakter yang akan dicek
    char huruf; //----- Variabel untuk index array y

    // Menentukan karakter yang akan dicek ada berapa dalam array x
    for(huruf=0; huruf<m; huruf++) // Fungsi pengulangan untuk nentuin index huruf
    {
        scanf(" %c", &y[huruf]); //-- Fungsi meminta input elemen dari user dengan index = huruf
    }

    int nilai=0; //----- Variabel untuk nyimpen nilai jumlah perhitungan karakter yang sama sementara
    int z[m]; //-------- Array buat nyimpen nilai pada variabel nilai
    int hasil, spasi; // Variabel (1) untuk index array z, (2) untuk ngasih spasi

    //Perhitungan ada berapa huruf dalam array x
    for(huruf=0; huruf<m; huruf++) //----------------- Fungsi pengulangan untuk nentuin index huruf
    {
        for(index=bindex1; index<=bindex2; index++) // Fungsi pengulangan untuk nentuin index index
        {
            if(x[index]%y[huruf]==0) //--------------- Kondisi dimana elemen array dengan index x modulus elemen array dengan index y = 0
            nilai++; //------------------------------- Nilai akan bertambah 1, jika kondisi terpenuhi
        }
        for(hasil=0; hasil<1; hasil++) //------------- Fungsi pengulangan untuk nentuin index hasil
        {
            z[hasil] = nilai; //---------------------- Nyimpen nilai pada variabel nilai ke array z
            printf("%d", z[hasil]); //---------------- Fungsi ngeluarin elemen dari array z dengan index hasil
        }
        if(huruf<m-1) //------------------------------ Kondisi dimana nilai huruf harus lebih kecil dari nilai m
        {
            printf(" "); //--------------------------- Jika kondisi terpenuhi maka akan ngeprint spasi
        }
        nilai = 0; //--------------------------------- Nilai akan kembali menjadi 0, jika fungsi-fungsi di atasnya sudah tidak ada yang dijalankan lagi
    }
    printf("\n"); //---------------------------------- Fungsi untuk ngasih new line
    
    return 0; //-------------------------------------- Fungsi yang memberikan sistem operasi tanda untuk keluar dari program.
}