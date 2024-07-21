/*
A4 - Произведение трех чисел.
Ввести три числа, найти их сумму и произведение. 
*/
#include <stdio.h>

int main()
{
    int a, b, c, sum, product;
    
    scanf("%d%d%d", &a, &b, &c);
    sum = a + b + c;
    product = a * b * c;
    printf("%d+%d+%d=%d\n", a, b ,c, sum);
    printf("%d*%d*%d=%d\n", a, b ,c, product);
    
    return 0;
}
