#include <stdio.h>
int main(){

    float bil1, bil2, bil3, bil4;
    int a, b, c, d;
    
    scanf("%f %f %f %f", &bil1, &bil2, &bil3, &bil4);
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    float kel1, kel2, kel3, kel4;
    int x1 = bil1, x2 = bil2, x3 = bil3, x4 = bil4;

    if (a == 1){
        if (b == 2){
            if (((c == 3) && (d == 4)) || ((c = 4) && (d == 3))){
                kel1 = x1 + bil2 - x2;
                kel2 = x2 + bil1 - x1;
                kel3 = x3 + bil4 - x4;
                kel4 = x4 + bil3 - x3;
                printf("%.2f\n%.2f\n%.2f\n%.2f\n", kel1, kel2, kel3, kel4);
            }
        }
        else if (b == 4){
            if (((c == 2) && (d == 3)) || ((c == 3) && (d == 2))){
                kel1 = x1 + bil4 - x4;
                kel2 = x2 + bil3 - x3;
                kel3 = x3 + bil2 - x2;
                kel4 = x4 + bil1 - x1;
                printf("%.2f\n%.2f\n%.2f\n%.2f\n", kel1, kel2, kel3, kel4);
            }
        }
        else if (b == 3){
            if (((c == 2) && (d == 4)) || ((c == 4) && (d == 2))){
                kel1 = x1 + bil3 - x3;
                kel2 = x2 + bil4 - x4;
                kel3 = x3 + bil1 - x1;
                kel4 = x4 + bil2 - x2;
                printf("%.2f\n%.2f\n%.2f\n%.2f\n", kel1, kel2, kel3, kel4);
            }
        }
    }
    else if (a == 2){
        if (b == 1){
            if (((c == 3) && (d == 4)) || ((c == 4) && (d == 3))){
                kel1 = x1 + bil2 - x2;
                kel2 = x2 + bil1 - x1;
                kel3 = x3 + bil4 - x4;
                kel4 = x4 + bil3 - x3;
                printf("%.2f\n%.2f\n%.2f\n%.2f\n", kel1, kel2, kel3, kel4);
            }
        }
        else if (b == 3){
            if (((c == 1) && (d == 4)) || ((c == 4) && (d == 1))){
                kel1 = x1 + bil4 - x4;
                kel2 = x2 + bil3 - x3;
                kel3 = x3 + bil2 - x2;
                kel4 = x4 + bil4 - x4;
                printf("%.2f\n%.2f\n%.2f\n%.2f\n", kel1, kel2, kel3, kel4);
            }
        }
        else{
            if (((c == 1) && (d == 3)) || ((c == 3) && (d == 1))){
                kel1 = x1 + bil3 - x3;
                kel2 = x2 + bil4 - x4;
                kel3 = x3 + bil3 - x1;
                kel4 = x4 + bil2 - x2;
                printf("%.2f\n%.2f\n%.2f\n%.2f\n", kel1, kel2, kel3, kel4);
            }
        }
    }
    else if (a == 3){
        if (b == 1){
            if (((c == 2) && (d == 4)) || ((c == 4) && (d == 2))){
                kel1 = x1 + bil3 - x3;
                kel2 = x2 + bil4 - x4;
                kel3 = x3 + bil1 - x1;
                kel4 = x4 + bil4 - x4;
                printf("%.2f\n%.2f\n%.2f\n%.2f\n", kel1, kel2, kel3, kel4);
            }
        }
        else if (b == 2){
            if (((c == 1) && (d == 4)) || ((c == 4) && (d == 1))){
                kel1 = x1 + bil4 - x4;
                kel2 = x2 + bil3 - x3;
                kel3 = x3 + bil2 - x2;
                kel4 = x4 + bil4 - x4;
                printf("%.2f\n%.2f\n%.2f\n%.2f\n", kel1, kel2, kel3, kel4);
            }
        }
        else{
            if (((c == 1) && (d == 2)) || ((c == 2) && (d == 1))){
                kel1 = x1 + bil2 - x2;
                kel2 = x2 + bil1 - x1;
                kel3 = x3 + bil4 - x4;
                kel4 = x4 + bil3 - x3;
                printf("%.2f\n%.2f\n%.2f\n%.2f\n", kel1, kel2, kel3, kel4);
            }
        }
        
    }
    else{
        if (b == 1){
            if (((c == 2) && (d == 3)) || ((c == 3) && (d == 2))){
                kel1 = x1 + bil4 - x4;
                kel2 = x2 + bil3 - x3;
                kel3 = x3 + bil2 - x2;
                kel4 = x4 + bil1 - x1;
                printf("%.2f\n%.2f\n%.2f\n%.2f\n", kel1, kel2, kel3, kel4);
            }
        }
        else if (b == 2){
            if (((c == 1) && (d == 3)) || ((c == 3) && (d == 1))){
                kel1 = x1 + bil3 - x3;
                kel2 = x2 + bil4 - x4;
                kel3 = x3 + bil1 - x1;
                kel4 = x4 + bil2 - x2;
                printf("%.2f\n%.2f\n%.2f\n%.2f\n", kel1, kel2, kel3, kel4);
            }
        }
        else{
            if (((c == 1) && (d == 2)) || ((c == 2) && (d == 1))){
                kel1 = x1 + bil2 - x2;
                kel2 = x2 + bil1 - x1;
                kel3 = x3 + bil4 - x4;
                kel4 = x4 + bil3 - x3;
                printf("%.2f\n%.2f\n%.2f\n%.2f\n", kel1, kel2, kel3, kel4);
            }
        }
    }

    return 0;
}