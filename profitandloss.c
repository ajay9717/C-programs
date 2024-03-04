#include <conio.h>
#include <stdio.h>
void main()
{
    float sp, cp, profit, loss;
    printf("enter the cost price of given item\n");
    scanf("%f", &cp);
    printf("enter the selling price of given item\n");
    scanf("%f", &sp);
    if (cp > sp)
    {
        printf("the seller has made loss and the loss is given below\n");
        loss = cp - sp;
        printf("loss = %f", loss);
    }
    if (cp < sp)
    {
        printf("the seller has made profit and the profit is given below\n");
        profit = sp - cp;
        printf("profit = %f", profit);
    }
    else
    {
        printf("the seller has neither made loss nor profit");
    }
    getch();
}