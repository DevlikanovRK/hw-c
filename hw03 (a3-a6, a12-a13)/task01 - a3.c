/*
A3 - Сумма трех чисел.
Ввести три числа, найти их сумму. 
*/
#include <stdio.h>

int main()
{
    int a, b, c, sum;
    
    scanf("%d%d%d", &a, &b, &c);
    sum = a + b + c;
    printf("%d+%d+%d=%d", a, b ,c, sum);
    
    return 0;
}
