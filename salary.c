#include <conio.h>
#include <stdio.h>
void main()
{
    int hra, da, gs, bs;
    printf("enter the basic salary of an employee\n");
    scanf("%d", &bs);
    if (bs >= 15000)
    {
        hra = 500;
        da = 0.98 * bs;
    }

    else
    {
        hra = 0.10 * bs;
        da = 0.90 * bs;
    }
    gs = hra + da + bs;
    printf("Gross salary : %d", gs);
}