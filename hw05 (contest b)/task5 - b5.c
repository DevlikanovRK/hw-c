/*
B5 - Сумма цифр.
Ввести целое число и найти сумму его цифр. 
*/
#include <stdio.h>

int main()
{
    int num, i, sum=0;
    
    scanf("%d", &num);
    
    for (i=0; num>0; i++)
    {
        sum += num % 10;
        num /= 10;
    }
    
    printf("%d", sum);
    
    return 0;
}
