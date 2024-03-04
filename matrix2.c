#include <conio.h>
#include <stdio.h>
void main()
{
    int row, col;
    int x[4][2];
    printf("enter data into given matrix\n");
    for (row = 0; row <= 3; row++)
    {
        for (col = 0; col <= 1; col++)
        {
            scanf("%d", &x[row][col]);
        }
    }
    printf("the data you entered is ");
    for (row = 0; row <= 1; row++)
    {
        for (col = 0; col <= 1; col++)
        {
            printf("%d", x[row][col]);
        }
    }
    getch();
}