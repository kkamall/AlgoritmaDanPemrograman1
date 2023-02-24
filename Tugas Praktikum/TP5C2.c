#include <stdio.h>
int main()
{
    char huruf;
    int ukuran;
    scanf("%c %d", &huruf, &ukuran);

    int nilai = 0, bil;
    if((huruf == 'A') || (huruf == 'I') || (huruf == 'U') || (huruf == 'E') || (huruf == 'O'))
    {
        bil = 0;
    }
    else
    {
        bil = 1;
    }

    int baris, bintang, spasi;

    for(baris = 0; baris<ukuran; baris++)
    {
        for(spasi = 0; spasi<ukuran*4; spasi++)
        {
            printf(" ");
        }
        for(bintang=0; bintang<=baris; bintang++)
        {
            printf("*");
        }
        for(spasi=ukuran*3; spasi>baris*2; spasi--)
        {
            printf(" ");
        }
        for(bintang=0; bintang<=baris; bintang++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(baris=0; baris<ukuran; baris++)
    {
        for(bintang=0; bintang<ukuran; bintang++)
        {
            printf("*");
        }
        for(spasi=0; spasi<ukuran*3; spasi++){
            printf(" ");
        }
        if(baris<ukuran-2)
        {
            for(bintang=0; bintang<ukuran*5; bintang++)
            {
                printf("*");
            }
        }
        else
        {
            for(bintang=0; bintang<ukuran; bintang++)
            {
                printf("*");
            }
            for(spasi=0; spasi<ukuran; spasi++)
            {
                printf(" ");
            }
            for(bintang=0; bintang<ukuran; bintang++)
            {
                printf("*");
            }
            for(spasi=0; spasi<ukuran; spasi++)
            {
                printf(" ");
            }
            for(bintang=0; bintang<ukuran; bintang++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}