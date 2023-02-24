/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal TP8 Alpro 1 C1 2021 - EDBB211
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
    char str[100];                                  // Variabel untuk menampung string masukan user
    scanf("%s", &str);                              // Fungsi minta inputan string dari user
    char arrstr[50][50], arrstr1[50][50], pola='a'; 
    /* 
        (1) arrstr = Buat nyimpen string yang udah ditambah nilai k, 
        (2) arrstr1 = Buat nyimpen string yang masih sama namun terpisah, 
        (3) Pola = buat ngisi bagian kosong pada pola pesan agar berbentuk persegi
    */
    int i=0, j=0, l=0, k=0, batas=0, maks, nomor=1;
    /*
        (1) i, j, l = Buat Index array string, 
        (2) k = nilai buat nambahin alphabetnya, 
        (3) batas = banyaknya string dari array of string (buat batas), 
        (4) maks = buat nentuin string mana yang terpanjang, 
        (5) nomor = buat penomoran di bagian kamus
    */

   // Proses memisahkan string masukan user menjadi beberapa string yang dipisahkan oleh tanda backslash (\)
    for(i=0; i<strlen(str); i++)
    {
        if(str[i] != '\\')
        {
            arrstr[j][l] = str[i];
            l++;
        }
        else
        {
            arrstr[j][l] = '\0';
            j++;
            l=0;
            batas++;
        }
    }
    arrstr[j][l] = '\0';
    
    // Proses peng-copy-an string dari variabel arrstr ke arrstr1, karena variabel arrstr akan berisi string yang sudah ditambahkan nilai k
    for(i=0; i<=batas; i++)
    {
        strcpy(arrstr1[i], arrstr[i]);
    }

    // Proses pencarian nilai k
    i=batas;
    for(j=0; j<strlen(arrstr[i]); j++)
    {
        k+=arrstr[i][j];
    }
    k%=26;

    // Pencarian string terpanjang dan penambahan string dengan nilai k
    maks=strlen(arrstr[0]);
    for(i=0; i<=batas; i++)
    {
        // Pencarian string terpanjang
        if(maks<strlen(arrstr[i]))
        {
            maks=strlen(arrstr[i]);
        }
        
        // Penambahan string dengan nilai k
        for(j=0; j<strlen(arrstr[i]); j++)
        {
            for(l=0; l<k; l++)
            {
                if((arrstr[i][j] >= 'a') && (arrstr[i][j] <= 'z'))
                {
                    arrstr[i][j]++;
                    if(arrstr[i][j]>'z')
                    {
                        arrstr[i][j]='a';
                    }
                }
                if((arrstr[i][j] >= 'A') && (arrstr[i][j] <= 'Z'))
                {
                    arrstr[i][j]++;
                    if(arrstr[i][j]>'Z')
                    {
                        arrstr[i][j]='A';
                    }
                }
            }
        }
    }

    // Keluaran bagian "Pola Pesan"
    printf(">> Pola Pesan <<\n");
    for(i=0; i<=batas; i++)
    {
        // Keluaran string dengan index i bagian depan
        for(j=0; j<(strlen(arrstr[i])+1)/2; j++)
        {
            printf("%c", arrstr[i][j]);
        }

        // Pengisian bagian tengah bila panjang dari string dengan index i kurang dari panjang string terpanjang
        for(j=0; j<maks-strlen(arrstr[i]); j++)
        {
            if(pola=='{')
            {
                pola='a';
            }
            printf("%c", pola);
            pola++;
        }

        // Keluaran string dengan index i bagian belakang
        for(j=(strlen(arrstr[i])+1)/2; j<strlen(arrstr[i]); j++)
        {
            printf("%c", arrstr[i][j]);
        }

        // New line
        printf("\n");
    }

    // Keluaran bagian "Path Directory Terenkripsi"
    printf("\n>> Path Directory Terenkripsi <<\n");
    l=0;
    for(i=0; i<=batas; i++)
    {
        printf("%s", arrstr[i]);
        if(l<batas)
        {
            printf("/");
        }
        l++;
    }
    
    // Keluaran bagian "Kamus"
    printf("\n\n>> Kamus <<\n");
    for(i=0; i<=batas; i++)
    {
        printf("%d. [%s] -> [%s]\n", nomor, arrstr[i], arrstr1[i]);
        nomor++;
    }

    return 0;
}