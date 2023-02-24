/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal TP3 Alpro 1 C1 2021 - PRB121
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

//Library :
#include <stdio.h>  //Library untuk I/O.
#include <math.h>   //Library supaya bisa pakai sqrt(...);

typedef struct{                 //Tipe data terstruktur untuk lingkaran.
    int r1, x1, y1, r2, x2, y2; //Variabel buat menampung nilai yang berhubungan dengan lingkaran.
    double luas, kel;           //Variabel buat menampung luas dan keliling lingkaran.
}lingkaran;                     //Nama bungkusannya.

typedef struct{     //Tipe data terstruktur untuk kode dari soal.
    int a, b, c;    //Variabel untuk menampung nilai kode. 
}kode;              //Nama bungkusannya.

//Deklarasi fungsi.
int main(){

    lingkaran cA, cB;   //Kotak-kotak dari lingkaran, nanti isinya variabel dari lingkarannya (r1, x1, ...).
    kode x;             //Kotak dari kode, nanti isinya variabel dari kodenya (a, b, c).
    int k, p, jtp1tp2;  //Variabel buat nampung nilai k = kode, p = persen buat dikali dengan luas, jtp1tp2 = jarak titik pusat antar lingkaran kalau x1 != x2 dan y1 != y2.
    char c;             //Variabel buat nampung huruf yang nentuin lingkarannya (Lingkaran A atau B).

    scanf("%d %d %d %d %d %d %d %c %d", &k, &cA.r1, &cA.x1, &cA.y1, &cB.r2, &cB.x2, &cB.y2, &c, &p);    //Fungsi untuk minta input dari user tersayang.

    //Rumus-rumus :
    cA.luas = cA.r1 * cA.r1 * 3.14; //Rumus buat cari luas lingkaran 1.
    cB.luas = cB.r2 * cB.r2 * 3.14; //Rumus buat cari luas lingkaran 2.
    cA.kel = 2 * 3.14 * cA.r1;      //Rumus buat cari keliling lingkaran 1.
    cB.kel = 2 * 3.14 * cB.r2;      //Rumus buat cari keliling lingkaran 2.
    x.a = k / 100;                  //Rumus buat nentuin kode digit pertama.
    x.b = k % 100 / 10;             //Rumus buat nentuin kode digit kedua.
    x.c = k % 100 % 10;             //Rumus buat nentuin kode digit ketiga.
    jtp1tp2 = sqrt((cA.x1 - cB.x2) * (cA.x1 - cB.x2) + (cA.y1 - cB.y2) * (cA.y1 - cB.y2));  //Rumus buat nentuin jarak antar titik pusat lingkaran kalau x1 != x2 dan y1 != y2.

    //Fungsi if untuk nentuin batasan dari nilai variabelnya.
    if ((k % 100 != k) && (k % 1000 == k) && (x.a != x.b) && (x.a != x.c) && (x.b != x.c) && (p >= 0) && ((((x.a > 3) || (x.a < 1)) && (x.b >= 1) && (x.b <= 3) && (x.c >= 1) && (x.c <= 3)) || ((x.a >= 1) && (x.a <= 3) && ((x.b > 3) || (x.b < 1)) && (x.c >= 1) && (x.c <= 3)) || ((x.a >= 1) && (x.a <= 3) && (x.b >= 1) && (x.b <= 3) && ((x.c > 3) || (x.c < 1))) || ((x.a >= 1) && (x.a <= 3) && (x.b >= 1) && (x.b <= 3) && (x.c >= 1) && (x.c <= 3)))){
       
        //Switch untuk kode digit pertama
        switch (x.a){
        //Kasus 1 ketika kode digit pertamanya adalah 1.
        case 1:
            printf("ELuas AB: %.2f cm2\n", cA.luas + cB.luas);  //Fungsi untuk kasih keluaran berupa jumlah luas lingkaran A dan B.
            break;                                              //Fungsi supaya berhenti kalau udah ngejalanin fungsi-fungsi sebelumnya.
        //Kasus 2 ketika kode digit pertamanya adalah 2.
        case 2:
            printf("EKeliling AB: %.2f cm\n", cA.kel + cB.kel); //Fungsi untuk kasih keluaran berupa jumlah keliling lingkaran A dan B.
            break;                                              //Fungsi supaya berhenti kalau udah ngejalanin fungsi-fungsi sebelumnya.
        //Kasus 3 ketika kode digit pertamanya adalah 3.
        case 3:
            if (cA.x1 == cB.x2){
                printf("Jarak AB: %d satuan\n", cA.y1 - cB.y2); //Fungsi untuk kasih keluaran berupa jarak titik pusat antar lingkaran.
            }
            else if (cA.y1 == cB.y2){
                printf("Jarak AB: %d satuan\n", cA.x1 - cB.x2); //Fungsi untuk kasih keluaran berupa jarak titik pusat antar lingkaran.
            }
            else{
                printf("Jarak AB: %d satuan\n", jtp1tp2);       //Fungsi untuk kasih keluaran berupa jarak titik pusat antar lingkaran.
            }
            break;                                              //Fungsi supaya berhenti kalau udah ngejalanin fungsi-fungsi sebelumnya.
        //Kasus 4 ketika tidak ada syarat kasus sebelumnya yang terpenuhi.
        default:
            //Swtich untuk nilai c, apakah nilai c itu A atau B.
            switch (c){
                case 'A':
                    printf("Luas %d%% A: %.2f cm2\n", p, cA.luas * p/100);  //Fungsi untuk kasih keluaran berupa luas lingkaran A x nilai persen dari c.
                    break;                                                  //Fungsi supaya berhenti kalau udah ngejalanin fungsi-fungsi sebelumnya.
                default:
                    printf("Luas %d%% B: %.2f cm2\n", p, cB.luas * p/100);  //Fungsi untuk kasih keluaran berupa luas lingkaran B x nilai persen dari c.
                    break;                                                  //Fungsi supaya berhenti kalau udah ngejalanin fungsi-fungsi sebelumnya.
            }
            break;  //Fungsi supaya berhenti kalau udah ngejalanin fungsi-fungsi sebelumnya.
        }
        
        //Switch untuk kode digit kedua
        switch (x.b){
        //Kasus 1 ketika kode digit pertamanya adalah 1.
        case 1:
            printf("ELuas AB: %.2f cm2\n", cA.luas + cB.luas);  //Fungsi untuk kasih keluaran berupa jumlah luas lingkaran A dan B.
            break;                                              //Fungsi supaya berhenti kalau udah ngejalanin fungsi-fungsi sebelumnya.
        //Kasus 2 ketika kode digit pertamanya adalah 2.
        case 2:
            printf("EKeliling AB: %.2f cm\n", cA.kel + cB.kel); //Fungsi untuk kasih keluaran berupa jumlah keliling lingkaran A dan B.
            break;                                              //Fungsi supaya berhenti kalau udah ngejalanin fungsi-fungsi sebelumnya.
        //Kasus 3 ketika kode digit pertamanya adalah 3.
        case 3:
            if (cA.x1 == cB.x2){
                printf("Jarak AB: %d satuan\n", cA.y1 - cB.y2); //Fungsi untuk kasih keluaran berupa jarak titik pusat antar lingkaran.
            }
            else if (cA.y1 == cB.y2){
                printf("Jarak AB: %d satuan\n", cA.x1 - cB.x2); //Fungsi untuk kasih keluaran berupa jarak titik pusat antar lingkaran.
            }
            else{
                printf("Jarak AB: %d satuan\n", jtp1tp2);       //Fungsi untuk kasih keluaran berupa jarak titik pusat antar lingkaran.
            }
            break;                                              //Fungsi supaya berhenti kalau udah ngejalanin fungsi-fungsi sebelumnya.
        //Kasus 4 ketika tidak ada syarat kasus sebelumnya yang terpenuhi.
        default:
            //Swtich untuk nilai c, apakah nilai c itu A atau B.
            switch (c){
                case 'A':
                    printf("Luas %d%% A: %.2f cm2\n", p, cA.luas * p/100);  //Fungsi untuk kasih keluaran berupa luas lingkaran A x nilai persen dari c.
                    break;                                                  //Fungsi supaya berhenti kalau udah ngejalanin fungsi-fungsi sebelumnya.
                default:
                    printf("Luas %d%% B: %.2f cm2\n", p, cB.luas * p/100);  //Fungsi untuk kasih keluaran berupa luas lingkaran B x nilai persen dari c.
                    break;                                                  //Fungsi supaya berhenti kalau udah ngejalanin fungsi-fungsi sebelumnya.
            }
            break;  //Fungsi supaya berhenti kalau udah ngejalanin fungsi-fungsi sebelumnya.
        }
        
        //Switch untuk kode digit ketiga
        switch (x.c){
        //Kasus 1 ketika kode digit pertamanya adalah 1.
        case 1:
            printf("ELuas AB: %.2f cm2\n", cA.luas + cB.luas);  //Fungsi untuk kasih keluaran berupa jumlah luas lingkaran A dan B.
            break;                                              //Fungsi supaya berhenti kalau udah ngejalanin fungsi-fungsi sebelumnya.
        //Kasus 2 ketika kode digit pertamanya adalah 2.
        case 2:
            printf("EKeliling AB: %.2f cm\n", cA.kel + cB.kel); //Fungsi untuk kasih keluaran berupa jumlah keliling lingkaran A dan B.
            break;                                              //Fungsi supaya berhenti kalau udah ngejalanin fungsi-fungsi sebelumnya.
        //Kasus 3 ketika kode digit pertamanya adalah 3.
        case 3:
            if (cA.x1 == cB.x2){
                printf("Jarak AB: %d satuan\n", cA.y1 - cB.y2); //Fungsi untuk kasih keluaran berupa jarak titik pusat antar lingkaran.
            }
            else if (cA.y1 == cB.y2){
                printf("Jarak AB: %d satuan\n", cA.x1 - cB.x2); //Fungsi untuk kasih keluaran berupa jarak titik pusat antar lingkaran.
            }
            else{
                printf("Jarak AB: %d satuan\n", jtp1tp2);       //Fungsi untuk kasih keluaran berupa jarak titik pusat antar lingkaran.
            }
            break;                                              //Fungsi supaya berhenti kalau udah ngejalanin fungsi-fungsi sebelumnya.
        //Kasus 4 ketika tidak ada syarat kasus sebelumnya yang terpenuhi.
        default:
            //Swtich untuk nilai c, apakah nilai c itu A atau B.
            switch (c){
                case 'A':
                    printf("Luas %d%% A: %.2f cm2\n", p, cA.luas * p/100);  //Fungsi untuk kasih keluaran berupa luas lingkaran A x nilai persen dari c.
                    break;                                                  //Fungsi supaya berhenti kalau udah ngejalanin fungsi-fungsi sebelumnya.
                default:
                    printf("Luas %d%% B: %.2f cm2\n", p, cB.luas * p/100);  //Fungsi untuk kasih keluaran berupa luas lingkaran B x nilai persen dari c.
                    break;                                                  //Fungsi supaya berhenti kalau udah ngejalanin fungsi-fungsi sebelumnya.
            }  
            break;  //Fungsi supaya berhenti kalau udah ngejalanin fungsi-fungsi sebelumnya.
        }
    }

    return 0;   //Fungsi yang memberikan sistem operasi tanda untuk keluar dari program.
}