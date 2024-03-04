#include <conio.h>
#include <stdio.h>
void main()
{
    int r, c, sum;
    for (r = 1; r <= 2; r++)
    {
        for (c = 1; c <= 2; c++)
        {
            sum = r + c;
            printf("r=%d c=%d sum=%d", r, c, sum);
            printf("\n");
        }
    }
}