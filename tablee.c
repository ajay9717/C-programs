#include <conio.h>
#include <stdio.h>
void main()
{
    int i, num;
    printf("enter the number ");
    scanf("%d", &num);
    printf("multiplication table of %d is as follows : \n", num);
    for (i = 1; i <= 10; i++)
    {
        printf("%d X i = %d\n",num*i);
    }
}