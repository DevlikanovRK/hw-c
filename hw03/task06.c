/*
A13 - Произведение цифр.
На вход подается произвольное трехзначное число, напечать произведение цифр.
*/
#include <stdio.h>

int main()
{
    int number, product;
    
    scanf("%d", &number);
    product = number % 10;
    product *= (number/10) % 10;
    product *= (number/100) % 10;
    printf("%d\n", product);
    
    return 0;
}
