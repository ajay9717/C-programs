#include <conio.h>
#include <stdio.h>
void main()
{
    float s1, s2, s3, s4, s5;
    float per;
    printf("enter the marks of 5 different subjects\n");
    scanf("%f%f%f%f%f", &s1, &s2, &s3, &s4, &s5);
    per = (s1 + s2 + s3 + s4 + s5) / 5;
    printf("percentage : %f\n", per);
    if (per >= 60)
        printf("1st divsion");
    if (per >= 50 && per <= 59)
        printf("2nd division");
    if (per >= 40 && per <= 49)
        printf("3rd division");
    if (per <= 40)
        printf("fail");
}