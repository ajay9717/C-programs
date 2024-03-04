#include <conio.h>
#include <stdio.h>
void main()
{
    int i;
    int a[25];
    int ton = 0, top = 0, toz = 0;
    printf("enter 25 numbers into the array\n");
    for (i = 0; i <= 24; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 24; i++)
    {
        if (a[i] < 0)
            ton = ton + 1;
        if (a[i] == 0)
            toz = toz + 1;
        if (a[i] > 0)
            top = top + 1;
    }
    printf("total no. of zeroes : %d\n", toz);
    printf("total no. of positive digits : %d\n", top);
    printf("total no. of negative digits : %d\n", ton);
}