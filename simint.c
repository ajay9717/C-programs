#include<conio.h>
#include<stdio.h>
void main()
{
    int i=1;
    float p,n,r,si;
    for(i=1;i<=3;)
    {
        printf("enter the principal amount\n");
        scanf("%f",&p);
        printf("enter the time taken\n");
        scanf("%f",&n);
        printf("enter the rate of interest\n");
        scanf("%f",&r);
        si=(p*n*r)/100;
        printf("simple interest :%f\n",si);
        i++;


    }

}