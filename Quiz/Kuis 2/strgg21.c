/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal Kusi 2 Alpro 1 C1 2021 - strgg21
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

// Library :
#include <stdio.h>  // Deklarasi I/O
#include <string.h> // Operasi string

// Deklarasi Fungsi
int main()
{
    char str[901], penentu[100], hasil[100];
    /*
        (1) str = string awal inputan user
        (2) penentu = genap / ganjil
        (3) kk = kata kunci string yang akan di cek kesamaannya
        (4) hasil = string bentukan dari karakter posisi ganjil atau genap
    */
    int n, i, j=0, l, m, nilai=0, cek=0;
    /*
        (1) n = panjang dari string kk
        (2) i, j, l, m = variabel buat indeks di fungsi for dan string
        (3) nilai = variabel berisi banyaknya string yang sama dengan string kk
        (4) cek = buat ngecek perhuruf apakah sama antara karakter string str dengan karakter string kk 
    */
   // Meminta inputan user
    scanf("%s %s %d", &str, &penentu, &n);
    char kk[n+1];
    scanf("%s", &kk);

    // Fungsi if dengan kondisi string penentu identik dengan kata genap
    if(strcmp(penentu, "genap") == 0)
    {
        // Fungsi for untuk mengcopy string str ke string hasil yang indeknya menyesuaikan dengan genap
        for(i=1; i<strlen(str); i+=2)
        {
            hasil[j]=str[i];
            j++;
        }
        // Penambahan null di akhir agar menjadi sebuah string
        hasil[j]='\0';
    }
    // Fungsi if dengan kondisi string penentu identik dengan kata ganjil
    else
    {
        // Fungsi for untuk mengcopy string str ke string hasil dengan indeksnya menyesuaikan dengan ganjil
        for(i=0; i<strlen(str); i+=2)
        {
            hasil[j]=str[i];
            j++;
        }
        // Penambahan null di akhir agar menjadi sebuah string
        hasil[j]='\0';
    }

    // Fungsi for untuk mengecek kesamaan string str dengan string kk
    for(i=0; i<strlen(hasil); i++)
    {
        m=0;
        // Fungsi for untuk pengecekan kesamaan per huruf
        for(l=0; l<strlen(kk); l++)
        {
            if(kk[l]==hasil[i+m])
            {
                cek++;
            }
            m++;
        }
        // Fungsi if dengan kondisi nilai cek sama dengan panjang string kk, maka nilai dari variabel nilai akan bertambah 1
        if(cek==strlen(kk))
        {
            nilai++;
        }
        // Variabel cek kembali berniali 0
        cek=0;
    }

    // Fungsi untuk mengeluarkan string hasil dan nilai pada variabel nilai
    printf("%s\n%d\n", hasil, nilai);

    // Fungsi yang memberikan sistem operasi tanda untuk keluar dari program
    return 0;
}