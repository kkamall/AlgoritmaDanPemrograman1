#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    float arr[3];

    for(i=0; i<n; i++)
    {
        scanf("%f", &arr[i]);
    }

    int depan, belakang, jumlah=0, x;
    for(i=0; i<n; i++)
    {
        depan = arr[i];
        x = arr[i] * 1000;
        belakang = (arr[i] - depan)*100;
        if(x%2!=0)
        {
            belakang+=1;
        }
        if(depan%belakang==0)
        {
            jumlah++;
        }
    }

    if(jumlah>=3)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}