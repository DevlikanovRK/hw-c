/*
A8 - Наибольшее из трех чисел.
Ввести три числа и найти наибольшее из них.
*/
#include <stdio.h>

int main()
{
    int a, b, c, max;
    
    scanf("%d%d%d", &a, &b, &c);
    
    (a > b) ? (max = a) : (max = b);
    (max > c) ? ({}) : (max = c);
    
    printf("%d", max);
    
    return 0;
}
