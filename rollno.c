#include <conio.h>
#include <stdio.h>
void main()
{
    int i;
    float roll_no[25];
    for (i = 0; i <= 24; i++)
    {
        printf("enter roll number of students\n");
        scanf("%f", &roll_no[i]);
    }
    printf("the value you entered are");
    for (i = 0; i <= 24; i++)
    {
        printf("%f\n", roll_no[i]);
    }
}