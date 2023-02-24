#include <stdio.h>
#include <math.h>
int main(){

    int sisi11, sisi12, sisi13;
    int sisi21, sisi22, sisi23;
    int selisih;
    int tinggi1, tinggi2;
    float luas1, luas2;

    scanf("%d %d %d %d %d %d", &sisi11, &sisi12, &sisi13, &sisi21, &sisi22, &sisi23);

    if ((sisi11 == sisi12) && (sisi11 == sisi13) && (sisi21 == sisi22) && (sisi21 == sisi23)){
        printf("segitiga sama sisi\n");
        tinggi1 = sqrt((sisi11 * sisi11) - ((sisi12 * 0.5) * (sisi12 * 0.5)));
        luas1 = sisi11 * tinggi1 * 0.5;
        tinggi2 = sqrt((sisi21 * sisi21) - ((sisi22 * 0.5) * (sisi22 * 0.5)));
        luas2 = sisi21 * tinggi2 * 0.5;
        if (luas1 > luas2){
            printf("segitiga pertama\nselisih %d\n", selisih = luas1 - luas2);
        }
        else{
            printf("segitiga kedua\nselisih %d\n", selisih = luas2 - luas1);
        }
    }
    else if (((sisi11 == sisi12) || (sisi11 == sisi13) || (sisi12 == sisi13)) && ((sisi21 == sisi22) || (sisi21 == sisi23) || (sisi22 = sisi23))){
        printf("segitiga sama kaki\n");
        if (sisi11 == sisi12){
            tinggi1 = sqrt((sisi11 * sisi11) - ((sisi13 * 0.5) * (sisi13 * 0.5)));
            luas1 = sisi13 * tinggi1 * 0.5;
            if (sisi21 == sisi22){
                tinggi2 = sqrt((sisi21 * sisi21) - ((sisi23 * 0.5) * (sisi23 * 0.5)));
                luas2 = sisi23 * tinggi2 * 0.5;
                if (luas1 > luas2){
                    printf("segitiga pertama\nselisih %d\n", selisih = luas1 - luas2);
                }
                else{
                    printf("segitiga kedua\nselisih %d\n", selisih = luas2 - luas1);
                }
            }
            else if (sisi21 == sisi23){
                tinggi2 = sqrt((sisi21 * sisi21) - ((sisi22 * 0.5) * (sisi22 * 0.5)));
                luas2 = sisi22 * tinggi2 * 0.5;
                if (luas1 > luas2){
                    printf("segitiga pertama\nselisih %d\n", selisih = luas1 - luas2);
                }
                else{
                    printf("segitiga kedua\nselisih %d\n", selisih = luas2 - luas1);
                }
            }
            else{
                tinggi2 = sqrt((sisi22 * sisi22) - ((sisi21 * 0.5) * (sisi21 * 0.5)));
                luas2 = sisi21 * tinggi2 * 0.5;
                if (luas1 > luas2){
                    printf("segitiga pertama\nselisih %d\n", selisih = luas1 - luas2);
                }
                else{
                    printf("segitiga kedua\nselisih %d\n", selisih = luas2 - luas1);
                }
            }
        }
        else if (sisi11 == sisi13){
            tinggi1 = sqrt((sisi11 * sisi11) - ((sisi12 * 0.5) * (sisi12 * 0.5)));
            luas1 = sisi12 * tinggi1 * 0.5;
            if (sisi21 == sisi22){
                tinggi2 = sqrt((sisi21 * sisi21) - ((sisi23 * 0.5) * (sisi23 * 0.5)));
                luas2 = sisi23 * tinggi2 * 0.5;
                if (luas1 > luas2){
                    printf("segitiga pertama\nselisih %d\n", selisih = luas1 - luas2);
                }
                else{
                    printf("segitiga kedua\nselisih %d\n", selisih = luas2 - luas1);
                }
            }
            else if (sisi21 == sisi23){
                tinggi2 = sqrt((sisi21 * sisi21) - ((sisi22 * 0.5) * (sisi22 * 0.5)));
                luas2 = sisi22 * tinggi2 * 0.5;
                if (luas1 > luas2){
                    printf("segitiga pertama\nselisih %d\n", selisih = luas1 - luas2);
                }
                else{
                    printf("segitiga kedua\nselisih %d\n", selisih = luas2 - luas1);
                }
            }
            else{
                tinggi2 = sqrt((sisi22 * sisi22) - ((sisi21 * 0.5) * (sisi21 * 0.5)));
                luas2 = sisi21 * tinggi2 * 0.5;
                if (luas1 > luas2){
                    printf("segitiga pertama\nselisih %d\n", selisih = luas1 - luas2);
                }
                else{
                    printf("segitiga kedua\nselisih %d\n", selisih = luas2 - luas1);
                }
            }
        }
        else{
            tinggi1 = sqrt((sisi12 * sisi12) - ((sisi11 * 0.5) * (sisi11 * 0.5)));
            luas1 = sisi11 * tinggi1 * 0.5;
            if(sisi21 == sisi22){
                tinggi2 = sqrt((sisi21 * sisi21) - ((sisi23 * 0.5) * (sisi23 * 0.5)));
                luas2 = sisi23 * tinggi2 * 0.5;
                if (luas1 > luas2){
                    printf("segitiga pertama\nselisih %d\n", selisih = luas1 - luas2);
                }
                else{
                    printf("segitiga kedua\nselisih %d\n", selisih = luas2 - luas1);
                }
            }
            else if(sisi21 == sisi23){
                tinggi2 = sqrt((sisi21 * sisi21) - ((sisi22 * 0.5) * (sisi22 * 0.5)));
                luas2 = sisi22 * tinggi2 * 0.5;
                if (luas1 > luas2){
                    printf("segitiga pertama\nselisih %d\n", selisih = luas1 - luas2);
                }
                else{
                    printf("segitiga kedua\nselisih %d\n", selisih = luas2 - luas1);
                }
            }
            else{
                tinggi2 = sqrt((sisi22 * sisi22) - ((sisi21 * 0.5) * (sisi21 * 0.5)));
                luas2 = sisi21 * tinggi2 * 0.5;
                if (luas1 > luas2){
                    printf("segitiga pertama\nselisih %d\n", selisih = luas1 - luas2);
                }
                else{
                    printf("segitiga kedua\nselisih %d\n", selisih = luas2 - luas1);
                }
            }
        }
    }
    else if (((sisi11 == sqrt((sisi12 * sisi12) + (sisi13 * sisi13))) || (sisi12 == sqrt((sisi11 * sisi11) + (sisi13 * sisi13))) || (sisi13 == sqrt((sisi11 * sisi11) + (sisi12 * sisi12)))) && ((sisi21 == sqrt((sisi22 * sisi22) + (sisi23 * sisi23))) || (sisi22 == sqrt((sisi21 * sisi21) + (sisi23 * sisi23))) || (sisi23 == sqrt((sisi21 * sisi21) + (sisi22 * sisi22))))){
        printf("segitiga siku-siku\n");
        if (sisi11 == sqrt((sisi12 * sisi12) + (sisi13 * sisi13))){
            luas1 = sisi12 * sisi13 * 0.5;
            if (sisi21 == sqrt((sisi22 * sisi22) + (sisi23 * sisi23))){
                luas2 = sisi22 * sisi23 * 0.5;
                if (luas1 > luas2){
                    printf("segitiga pertama\nselisih %d\n", selisih = luas1 - luas2);
                }
                else{
                    printf("segitiga kedua\nselisih %d\n", selisih = luas2 - luas1);
                }
            }
            else if (sisi22 == sqrt((sisi21 * sisi21) + (sisi23 * sisi23))){
                luas2 = sisi21 * sisi23 * 0.5;
                if (luas1 > luas2){
                    printf("segitiga pertama\nselisih %d\n", selisih = luas1 - luas2);
                }
                else{
                    printf("segitiga kedua\nselisih %d\n", selisih = luas2 - luas1);
                }
            }
            else{
                luas2 = sisi21 * sisi22 * 0.5;
                if (luas1 > luas2){
                    printf("segitiga pertama\nselisih %d\n", selisih = luas1 - luas2);
                }
                else{
                    printf("segitiga kedua\nselisih %d\n", selisih = luas2 - luas1);
                }
            }
        }
        else if (sisi12 == sqrt((sisi11 * sisi11) + (sisi13 * sisi13))){
            luas1 = sisi11 * sisi13 * 0.5;
            if (sisi21 == sqrt((sisi22 * sisi22) + (sisi23 * sisi23))){
                luas2 = sisi22 * sisi23 * 0.5;
                if (luas1 > luas2){
                    printf("segitiga pertama\nselisih %d\n", selisih = luas1 - luas2);
                }
                else{
                    printf("segitiga kedua\nselisih %d\n", selisih = luas2 - luas1);
                }
            }
            else if (sisi22 == sqrt((sisi21 * sisi21) + (sisi23 * sisi23))){
                luas2 = sisi21 * sisi23 * 0.5;
                if (luas1 > luas2){
                    printf("segitiga pertama\nselisih %d\n", selisih = luas1 - luas2);
                }
                else{
                    printf("segitiga kedua\nselisih %d\n", selisih = luas2 - luas1);
                }
            }
            else{
                luas2 = sisi21 * sisi22 * 0.5;
                if (luas1 > luas2){
                    printf("segitiga pertama\nselisih %d\n", selisih = luas1 - luas2);
                }
                else{
                    printf("segitiga kedua\nselisih %d\n", selisih = luas2 - luas1);
                }
            }
        }
        else{
            luas1 = sisi11 * sisi12 * 0.5;
            if (sisi21 == sqrt((sisi22 * sisi22) + (sisi23 * sisi23))){
                luas2 = sisi22 * sisi23 * 0.5;
                if (luas1 > luas2){
                    printf("segitiga pertama\nselisih %d\n", selisih = luas1 - luas2);
                }
                else{
                    printf("segitiga kedua\nselisih %d\n", selisih = luas2 - luas1);
                }
            }
            else if (sisi22 == sqrt((sisi21 * sisi21) + (sisi23 * sisi23))){
                luas2 = sisi21 * sisi23 * 0.5;
                if (luas1 > luas2){
                    printf("segitiga pertama\nselisih %d\n", selisih = luas1 - luas2);
                }
                else{
                    printf("segitiga kedua\nselisih %d\n", selisih = luas2 - luas1);
                }
            }
            else{
                luas2 = sisi21 * sisi22 * 0.5;
                if (luas1 > luas2){
                    printf("segitiga pertama\nselisih %d\n", selisih = luas1 - luas2);
                }
                else{
                    printf("segitiga kedua\nselisih %d\n", selisih = luas2 - luas1);
                }
            }
        }
    }
    else{
        printf("tidak sama\n");
    }

    return 0;
}