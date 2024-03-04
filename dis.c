#include <conio.h>
#include <stdio.h>
void main()
{
    int qty;
    float tot, price;
    printf("enter the price per item\n");
    scanf("%f", &price);
    printf("enter the quantity purchased\n");
    scanf("%d", &qty);
    if (qty >= 1000)
    {
        tot = price * qty;
        tot = tot - (price * qty * 0.10);
    }
    else
    {
        tot = price * qty;
    }
    printf("Total expenses : %f", tot);
}