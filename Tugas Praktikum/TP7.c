/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal TP7 Alpro 1 C1 2021 - DPCA21
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

// Library :
#include <stdio.h>  //Library untuk I/O
#include <string.h> //Library untuk operasi string

// Deklarasi Fungsi :
int main()
{
    char str[100], tk[100], cpy[100];                   // (1) str = string buat kata awal, (2) tk = string tanpa kunci, (3) cpy = string dekripsi 3
    scanf("%s", &str);                                  // Minta inputan string dari user.
    int i, j, panjang, x, y, z, nilai=0, batas=0, a, b; // (1) i, j, a, b = Buat index, (2) panjang = panjang string tanpa kunci dibagi/2, (3) x = index '!', (4) y = index huruf setelah '!', (5) z = banyak character setelah '!', (6) nilai = variabel penentu character yang dihilangkan atau tidak, (7) batas = panjang string tanpa kunci
    
    // Nentuin index character '!'
    i=0;
    while(i < strlen(str))
    {
        if(str[i] == '!')
        {
            x = i;
        }
        i++;
    }
    
    // Nentuin string tanpa kunci
    z=strlen(str)-x-1;
    j=0;
    i=0;
    while(i<x)
    {
        y=x+1;
        nilai=0;
        a=i;
        // Fungsi while untuk menentukan huruf yang dihilangkan
        while(y<strlen(str))
        {
            if(str[a]==str[y])
            {
                nilai++;
            }
            y++;
            a++;
        }
        // Fungsi if dengan kondisi huruf tidak sama dengan huruf yang ingin dihilangkan
        if(nilai!=z)
        {
            tk[j]=str[i];
            j++;
            batas++;
            i++;
        }
        // Fungsi if dengan kondisi huruf sama dengan huruf yang ingin dihilangkan
        if(nilai==z)
        {
            i+=z;
        }
    }

    tk[batas]='!';       // Untuk dijadikan apakah string tanpa kunci memiliki character atau tidak
    panjang = batas / 2;
    
    // Fungsi if dengan kondisi string tanpa kunci dengan index 0 tidak sama dengan '!'
    if(tk[0]!='!')
    {
        // Ngeprint string tanpa kunci
        printf("Tanpa kunci: ");
        // Fungsi while untuk ngeprint string tanpa kunci
        i=0;
        while(i<batas)
        {
            printf("%c", tk[i]);
            i++;
        }
        printf("\n\n");
        
        // Ngeprint string Dekripsi 1
        printf("Dekripsi 1: ");
        // Fungsi while untuk ngeprint string tanpa kunci selang seling
        i=0;
        j=batas-1;
        b=j;
        a=0;
        while(i<panjang)
        {
            printf("%c", tk[i]);
            // Fungsi while untuk nyimpen string Dekripsi 1 ke string cpy
            cpy[a] = tk[i];
            a++;
            while((j>=panjang) && (j>=b))
            {
                printf("%c", tk[j]);
                cpy[a] = tk[j];
                a++;
                j--;
            }
            b--;
            i++;
        }
        //Fungsi if bilai nilai variabel batas ganjil, untuk ngeprint nilai tengah dan menyimpan nilai tengah ke string cpy
        if(batas%2!=0)
        {
            printf("%c", tk[batas/2]);
            cpy[batas-1]=tk[batas/2];
        }
        printf("\n\n");

        // Ngeprint string Dekripsi 2
        printf("Dekripsi 2: ");
        // Fungsi do while untuk ngeprint character bagian depan yang dibalik
        i=panjang-1;
        do{
            printf("%c", cpy[i]);
            i--;
        }while(i>-1);
        // Fungsi if dengan kondisi nilai variabel batas ganjil, untuk nge print nilai tengah
        if(batas%2!=0)
        {
            printf("%c", cpy[batas/2]);
        }
        // Fungsi do while untuk nge print character bagian belakang yang dibalik
        i=batas-1;
        // Fungsi if dengan kondisi nilai variabel batas ganjil, sehingga ketika nilai variabel batas ganjil bagian belakangnya tidak ngeprint lagi
        if(batas%2!=0)
        {
            batas+=2;
        }
        do{
            printf("%c", cpy[i]);
            i--;
        }while(i>=batas/2);
        printf("\n");
    }
    // Fungsi else dengan kondisi character tk dengan index 0 sama dengan '!'
    else
    {
        printf("==== Inputan Tidak Valid! ====\n");
    }
    return 0; // Fungsi yang menandakan bahwa program telah berakhir
}