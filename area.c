#include <conio.h>
#include <stdio.h>
void main()
{
    float r;
    float pi = 3.14;
    float area;
    printf("enter the radius of circle\n");
    scanf("%f", &r);
    area = pi * r * r;
    printf("area : %f", area);
}