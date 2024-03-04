#include <conio.h>
#include <stdio.h>
int main()
{
    float basic_salary, hra, da, gross_salary;
    printf("enter the basic salary of an employee\n");
    scanf("%f", &basic_salary);
    if (basic_salary >= 15000)
    {
        hra = 500;
        da = 0.98 * basic_salary;
    }
    else
    {
        hra = 0.10 * basic_salary;
        da = 0.98 * basic_salary;
    }
    gross_salary = hra + da + basic_salary;
    printf("Gross salary : %f", gross_salary);
    return 0;
}