/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal TP5 Alpro 1 C1 2021 - KTDC21
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

//Library :
#include <stdio.h> //Deklarasi I/O

//Deklarasi fungsi :
int main(){
    
    //Deklarasi Variabel Techi
    int techi; //--------------------------------------- jumlah box array
    scanf("%d", &techi); //----------------------------- Fugnsi meminta input dari user
    char x[techi], //----------------------------------- Variabel array buat Techi
         n; //------------------------------------------ Variabel buat nyimpen elemen array Techi

    for(n=0; n<techi; n++) //--------------------------- Fungsi buat pengulangan dan nentuin index array
    {
        scanf(" %c", &x[n]); //------------------------- Fungsi meminta input dari user elemen array techi
    }

    //Deklarasi Variabel Carla
    int carla; //--------------------------------------- "m" => jumlah box array
    scanf("%d", &carla); //----------------------------- Fungsi minta masukan user berapa total box dari suatu array
    char y[carla], //----------------------------------- Variabel array buat Carla
         m; //------------------------------------------ Variabel buat nyimpen elemen array Carla

    for(m=0; m<carla; m++) //--------------------------- Fungsi buat pengulangan dan nentuin index array
    {
        scanf(" %c", &y[m]); //------------------------- Fungsi meminta input dari user elemen array Carla
    }
    
    //Deklarasi Variabel
    int kecocokan = 0, ulang, spasi; //----------------- "Kecocokan" => Nilai kecocokan kartu Techi dan Carla, "Ulang" => Variabel buat pengulangan, "Spasi" => Buat nentuin berapa kali spasi diprint
    
    // Fungsi buat ngeluarin kartu Techi dan Carla selang seling
    if(techi == carla)
    {
        for(ulang=0; ulang<techi; ulang++) //--------- Fungsi buat ngeluarin input user elemen array Techi dan Carla
            {
            for(n=ulang; n<=ulang; n++) //------------ Fungsi perluangan untuk ngeluarin isi array techi
            {
                printf("%c ", x[n]); //--------------- Fungsi ngeluarin elemen array Techi 
            }
            for(m=ulang; m<=ulang; m++) //------------ Fungsi perluangan untuk ngeluarin isi array Carla
            {
                printf("%c", y[m]); //---------------- Fungsi ngeluarin elemen array Carla
            }
            for(spasi=ulang; spasi<=ulang; spasi++) // Fungsi perulangan untuk ngeluarin spasi
            {
                if(spasi<carla-1) //------------------ Kondisi agar spasinya gak diprint setelah elemen terakhir
                {
                    printf(" ");; //------------------ Fungsi ngasih spasi
                }
            }
        }
        printf("\n"); //------------------------------ Fungsi ngasih newline
    }

    for(n=0; n<1; n++) //------------------------------- Fungsi buat ngasih tau elemen index pertama dari array Techi
    {
        for(m=0; m<1; m++) //--------------------------- Fungsi buat ngasih tau elemen index pertama dari array Carla
        {
            //Fungsi if dengan kondisi array Techi dan Carla sejenis kartunya
            if((((x[n] >= 'A') && (x[n] <= 'I')) && ((y[m] >= 'A') && (y[m] <= 'I'))) || (((x[n] >= '1') && (x[n] <= '9')) && ((y[m] >= '1') && (y[m] <= '9'))))
            {
                printf("Kartu mereka sejenis,\nternyata mereka bersaudara!\n"); //Keluaran jika kondisi if diata terpenuhi
            }
            else 
            {
                for(n=0; n<techi; n++) //------------------------- Fungsi perulangan buat ngecek array techi
                {
                    if((x[n] >= 'A') && (x[n] <= 'I')) //--------- Kondisi dimana elemen array Techi huruf
                    {
                        x[n] = x[n] - 64; //----------------- Rumus buat ngubah char ke integer
                    }
                    else //--------------------------------------- Kondisi dimana elemen array Techi bukan huruf (angka)
                    {
                        x[n] = x[n] - 48; //---------------------- Rumus buat ngubah char ke integer
                    }
                    for(m=0; m<carla; m++) //--------------------- Fungsi perulangan buat ngecek array Carla
                    {
                        if((y[m] >= 'A') && (y[m] <= 'I'))//------ Kondisi dimana elemen array Carla huruf
                        {
                            y[m] = (int)y[m] - 64; //------------- Rumus buat ngubah char ke integer
                        }
                        else //----------------------------------- Kondisi dimana elemen array Carla bukan huruf (angka)
                        {
                            y[m] = y[m] - 48; //------------------ Rumus buat ngubah char ke integer
                        }
                        if(x[n] == y[m]) //----------------------- Kondisi dimana nilai elemen array techi dan Carla sama
                        {
                            kecocokan++; //----------------------- Nilai kecocokan bertama kalau kondisinya terpenuhi
                        }
                        if((y[m] >= 'A') && (y[m] <= 'I')) //----- Fungsi buat ngembaliin nilai elemen si Carla, kalau gak pake ini nanti jadi "-" nilainya gak tau kenapa, dimana kondisinya elemen Carla ada huruf
                        {
                            y[m] = y[m] + 64; //------------------ Fungsi buat ngembaliin nilai elemen si Carla, jika elemen Carla merupakan huruf
                        }
                        else //----------------------------------- Fungsi buat ngembaliin nilai elemen si Carla, kalau gak pake ini nanti jadi "-" nilainya gak tau kenapa, dimana kondisinya elemen Carla ada angka
                        {
                            y[m] = y[m] + 48; //------------------ Fungsi buat ngembaliin nilai elemen si Carla, jika elemen Carla merupakan angka
                        }
                    }
                }
                if((techi == carla) && (kecocokan == techi)) //------- Kondisi dimana total elemen array Carla dan Techi sama dan juga cocok
                {
                    printf("Nilai kartu mereka cocok,\nCarla menyukai balik Techi.\n"); //------ Keluaran kalau kondisinya terpenuhi
                }
                else if((techi != carla) || ((kecocokan != techi) || (kecocokan != carla))) //-- Kondisi dimana hanya salah satu dari dua konidisi di atas yang terpenuhi
                {
                    printf("Nilai kartu mereka tidak cocok,\nCarla tidak menyukai Techi.\n"); // Keluaran kalau kondisinya gak terpenuhi
                }
            }
        }
    }

    return 0; // Fungsi yang memberikan sistem operasi tanda untuk keluar dari program
}