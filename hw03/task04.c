/*
A6 - Разность двух чисел.
Ввести два числа и найти их разность.
*/
#include <stdio.h>

int main()
{
    int a, b, diff;
    
    scanf("%d%d", &a, &b);
    diff = a - b;
    printf("%d", diff);
    
    return 0;
}
