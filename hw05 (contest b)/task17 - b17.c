/*
B17 - Счастливые числа.
Ввести натурально число и напечатать все числа от 10 до введенного числа - у которых сумма цифр равна произведению цифр
*/
#include <stdio.h>

int DO_sum (int);
int DO_mult (int);

int main()
{
    int num, sum, mult, i;
    scanf("%d", &num);
        
    for (i = 10; i <= num; ++i)
        {
            sum = DO_sum (i);
            mult = DO_mult (i);
            if (sum == mult)
                printf("%d ", i);
        }
        
    return 0;
}

int DO_sum (int number)
{
    int sum = 0;
    while (number > 0)
        {
            sum += number % 10;
            number /= 10;
        }
        
    return sum;
}

int DO_mult (int number)
{
    int mult = 0;
    
    if (number == 0)
        return mult;
    
    mult = 1;
    while (number > 0)
        {
            mult *= number % 10;
            number /= 10;
        }
        
    return mult;
}
