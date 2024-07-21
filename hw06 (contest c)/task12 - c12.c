/*
C12 - Sin как сумма ряда.
Составить функцию, которая вычисляет синус как сумму ряда (с точностью 0.001)
sin(x) = x - x3/3! + x5/5! - x7/7! + ...(x в радианах)
*/
#include <stdio.h>
#define pi 3.1415926535

double CALC_sin (double);
double CALC_pow (double, int);
int CALC_fact (int);

int main()
{
    double angle;
    scanf("%lf", &angle);       //input angle in degrees
    angle *= pi/180;            //angle in rad
    //printf("angle = %.6f\n\n", angle);  
    printf("%.3f\n", CALC_sin(angle));
    
    return 0;
}

double CALC_sin (double angle)
{
    int i, sign = -1;
    double sin = angle, tmp;
    for (i = 3; i <= 7; i += 2)
    {
        //printf("i = %d\t", i);
        tmp = CALC_pow(angle, i) / CALC_fact (i);
        (sign > 0) ? (sin += tmp) : (sin -= tmp);
        //printf("sin = %.6f\n", sin);
        sign *= -1;
    } 
    return sin;
}

double CALC_pow (double n, int p)
{
    int i;
    for (i = 1; i < p; ++i)
        n *= n;
    return n;
}

int CALC_fact (int number)
{
    int i, fact = 1;
    for (i = 1; i <= number; ++i)
        fact *= i;
    //printf("FACT_I = %d\n", fact);
    return fact;
}
