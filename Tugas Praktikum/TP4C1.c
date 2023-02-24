/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal TP4 Alpro 1 C1 2021 - MPSI21
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

// Library :
#include <stdio.h> //Library untuk I/O

// Deklarasi Fungsi
int main(){
    
    // Deklarasi Variabel
    char c; //---------------- Variabel buat kode
    int n; //----------------- Variabel ukuran alien yang akan dibuat
    scanf("%c %d", &c, &n); // Fungsi meminta input dari user

    int nilai = 0, baris, spasi, angka, bil1 = 0, bil2 = 0;
    /* 
    Variabel nilai => Buat nentuin apakah kode termasuk huruf konsonan atau vokal
    Variabel baris => Buat nentuin barisnya ada berapa
    Variabel Spasi => Buat nentuin spasinya berapa kali diulang
    Variabel Angka => Buat nentuin angkanya berapa kali diulang
    Variabel bil1 => Buat nampung bilangan/angka
    Variabel bil2 => Buat nampung bilangan/angka
    */

    if((c == 'a') || (c == 'i') || (c == 'u') || (c == 'e') || (c == 'o')){ // Fungsi nentuin nilai
        nilai = 1; //--------------------------------------------------------- Nilai = 1, jika kodenya huruf vokal
    }
    
    if(nilai == 1){ // Jika nila = 1, maka bil1 dan bil2 nya dimulai dari 0
        bil1 = 0;
        bil2 = 0;
    }
    else{ //---------- Jika fungsi if diatas tidak terpenuhi, maka bil1 dan bil2 nya dimulai dari 1
        bil1 = 1;
        bil2 = 1;
    }

    // Fungsi untuk ngebuat tanduk (Mungkin) Alien
    for(baris = 1; baris <= n; baris ++){ //------------------- Fungsi buat nentuin berapa baris
        for(spasi = 1; spasi <= baris; spasi++){ //------------ Fungsi buat nentuin spasinya berapa kali di ulang
            printf(" "); //------------------------------------ Fungsi buat ngeluarin spasi
        }
        for(angka = 1; angka <= baris; angka++){ //------------ Fungsi buat nentuin angkanya berapa kali di ulang, buat ngebentuk tanduk kiri
            printf("%d", bil1 % 10); //------------------------ Funsgi buat ngeluarin angka
        }
        for(spasi = n * 9 - 4; spasi >= baris * 4 - 3; spasi--){ // Fungsi buat nentuin spasinya berapa kali di ulang
            printf(" ");; //----------------------------------- Fungsi buat ngeluarin spasi
        }
        for(angka = 1; angka <= baris; angka++){ //------------ Fungsi buat nentuin angkanya berapa kali di ulang, buat ngebentuk tanduk kanan
            printf("%d", bil2 % 10); //------------------------ Funsgi buat ngeluarin angka
        }
        bil1 += 2; //------------------------------------------ Saya gak tau nyebutinnya apa, cuman jika for baris 45 - 54 udah gak ada yang jalan lagi, maka bil1 bertambah 2
        bil2 += 2; //------------------------------------------ Saya gak tau nyebutinnya apa, cuman jika for baris 45 - 54 udah gak ada yang jalan lagi, maka bil2 bertambah 2
        printf("\n"); //--------------------------------------- Fungsi untuk kasih new line
    }

    // Fungsi untuk ngebuat kepala
    // Fungsi untuk ngebuat kepala bagian paling atasnya doang
    for(spasi = 1; spasi <= n - 1; spasi++){ //---------------- Fungsi untuk nentuin spasinya berapa kali di ulang
        printf(" "); //---------------------------------------- Fungsi buat ngeluarin spasi
    }
    for(angka = 1; angka <= n * 7 + 2; angka++){ //------------ Fungsi buat nentuin angkanya berapa kali di ulang
        printf("%d", bil1 % 10); //---------------------------- Fungsi buat ngeluarin angka
    }
    printf("\n"); //------------------------------------------- Fungsi untuk kasih new line
    bil1 += 2; //---------------------------------------------- Saya gak tau nyebutinnya apa, cuman jika for baris 63 & 66 udah gak ada yang jalan lagi, maka bil1 bertambah 2

    // Fungsi untuk ngebuat kepala bagian tengah
    for(baris = 1; baris <= n - 2; baris++){ //---------------- Fungsi buat nentuin berapa baris
        for(spasi = n - 2; spasi >= baris; spasi--){ //-------- Fungsi buat nentuin berapa kali spasinya di ulang
            printf(" "); //------------------------------------ Fungsi buat ngeluarin spasi
        }
        for(angka = 1; angka <= baris + 1; angka++){ //-------- Fungsi buat nentuin 
            printf("%d", bil1 % 10);
        }
        for(spasi = 1; spasi <= n; spasi++){ //---------------- Fungsi buat nentuin berapa kali spasinya di ulang
            printf(" "); //------------------------------------ Fungsi buat ngeluarin spasi
        }
        if(baris <= n - 3){ //--------------------------------- Jika n - 3, maka masuk ke fungsi dibawahnya. Ini buat ngebentuk kepala bagian tengah cuman angka yang tengah (kalau dilihat di contoh) gak ada spasinya
            for(angka=1; angka <= n*5; angka++){ //------------ Fungsi buat nentuin berapa kali angkanya diulang
                printf("%d", bil1 % 10); //-------------------- Fungsi buat ngeluarin angka
            }
        }
        else{ //----------------------------------------------- Jika kondisi 1 tidak terpenuhi, maka ngejalain fungsi dibawah else. Ini buat ngebentuk kepala bagian tengah cuman angka yang tengah (kalau dilihat di contoh) ada spasinya
            for(angka = 1; angka <= n * 2; angka++){ //-------- Fungsi buat nentuin berapa kali angkanya diulang
                printf("%d", bil1 % 10); //-------------------- Fungsi buat ngeluarin angka
            }
            for(spasi = 1; spasi <= n; spasi++){ //------------ Fungsi buat nentuin berapa kali spasinya di ulang
                printf(" "); //-------------------------------- Fungsi buat ngeluarin spasi
            }
            for(angka = 1; angka <= n * 2; angka++){ //-------- Fungsi buat nentuin berapa kali angkanya diulang
                printf("%d", bil1 % 10); //-------------------- Fungsi buat ngeluarin angka
            }
        }
        for(spasi = 1; spasi <= n; spasi++){ //---------------- Fungsi buat nentuin berapa kali spasinya diulang
            printf(" "); //------------------------------------ Fungsi buat ngeluarin spasi
        }
        for(angka = 1; angka <= baris + 1; angka++){ //-------- Fungsi buat nentuin berapa kali angkanya diulang
            printf("%d", bil1 % 10); //------------------------ Fungsi buat ngeluarin angka
        }
        bil1 += 2; //------------------------------------------ Saya gak tau nyebutinnya apa, cuman jika for baris 74 - 103 udah gak ada yang jalan lagi, maka bil1 bertambah 2
        printf("\n"); //--------------------------------------- Fungsi untuk kasih new line
    }

    // Fungsi untuk ngebuat kepala bagian bawah
    for(angka = 1; angka <= n * 9; angka++){ //---------------- Fungsi buat nentuin berapa kali angkanya diulang
        printf("%d", bil1 % 10); //---------------------------- Fungsi buat ngeluarin angka
    }
    bil1 += 2; //---------------------------------------------- Saya gak tau nyebutinnya apa, cuman jika for baris 111 udah gak ada yang jalan lagi, maka bil1 bertambah 2
    printf("\n"); //------------------------------------------- Fungsi untuk kasih new line

    // Fungsi untuk ngebuat kaki Alien
    for(baris = 1; baris <= n; baris++){ //-------------------- Fungsi buat nentuin barisnya ada berapa
        for(spasi = 1; spasi <= n; spasi++){ //---------------- Fungsi buat nentuin berapa kali spasinya diulang
            printf(" "); //------------------------------------ Fungsi buat ngeluarin spasi
        }
        for(angka = 1; angka <= n; angka++){ //---------------- Fungsi buat nentuin berapa kali angkanya diulang
            printf("%d", bil1 % 10); //------------------------ Fungsi buat ngeluarin angka
        }
        for(spasi = 1; spasi <= n; spasi++){ //---------------- Fungsi buat nentuin berapa kali spasinya diulang
            printf(" "); //------------------------------------ Fungsi buat ngeluarin spasi
        }
        for(angka = 1; angka <= n; angka++){ //---------------- Fungsi buat nentuin berapa kali angkanya diulang
            printf("%d", bil1 % 10); //------------------------ Fungsi buat ngeluarin angka
        }
        for(spasi = 1; spasi <= n; spasi++){ //---------------- Fungsi buat nentuin berapa kali spasinya diulang
            printf(" "); //------------------------------------ Fungsi buat ngeluarin spasi
        }
        for(angka = 1; angka <= n; angka++){ //---------------- Fungsi buat nentuin berapa kali angkanya diulang
            printf("%d", bil1 % 10); //------------------------ Fungsi buat ngeluarin angka
        }
        for(spasi = 1; spasi <= n; spasi++){ //---------------- Fungsi buat nentuin berapa kali spasinya diulang
            printf(" "); //------------------------------------ Fungsi buat ngeluarin spasi
        }
        for(angka = 1; angka <= n; angka++){ //---------------- Fungsi buat nentuin berapa kali angkanya diulang
            printf("%d", bil1 % 10); //------------------------ Fungsi buat ngeluarin angka
        }
        bil1 += 2; //------------------------------------------ Saya gak tau nyebutinnya apa, cuman jika for baris 119 - 140 udah gak ada yang jalan lagi, maka bil1 bertambah 2
        printf("\n"); //--------------------------------------- Fungsi untuk kasih new line
    }

    return 0; // Fungsi yang memberikan sistem operasi tanda untuk keluar dari program
}