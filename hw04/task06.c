/*
A14 - Максимальная цифра.
Дано трехзначное число, напечатать макисмальную цифру.
*/
#include <stdio.h>

int main()
{
    int number, position, max;
    
    scanf("%d", &number);
    max = number % 10;
    position = (number/10) % 10;
    (position > max) ? (max = position) : ({});
    position = (number/100) % 10;
    (position > max) ? (max = position) : ({});
    printf("%d\n", max);
    
    return 0;
}
