#include <stdio.h>

double Cabs(double number)
{
    return number < 0 ? -number : number;
}

double Cpow(double number, double degree)
{
    double res = 1.0;

    for (int i = 0; i < Cabs(degree); i++)
        res *= number;

    return degree == 0 ? res : degree < 0 ? 1.0 / res : res;
}

int Cfactorial(int number)
{
    for (int i = number - 1; i > 0; i--)
        number *= i;
    
    return number == 0 ? 1 : number;
}


