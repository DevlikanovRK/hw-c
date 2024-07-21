/*
A12 - Сумма цифр.
На вход подается произвольное трехзначное число, напечать сумму цифр.
*/
#include <stdio.h>

int main()
{
    int number, sum;
    
    scanf("%d", &number);
    sum = number % 10;
    sum += (number/10) % 10;
    sum += (number/100) % 10;
    printf("%d\n", sum);
    
    return 0;
}
