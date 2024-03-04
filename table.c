#include <conio.h>
#include <stdio.h>
void main()
{
    int num, i;
    printf("enter the table you multiplication table of\n ");
    scanf("%d", &num);
    for (i = 1; i <= 19; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}