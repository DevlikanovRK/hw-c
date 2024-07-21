/*
B16 - НОД.
Составить программу для вычисления НОД с помощью алгоритма Евклида. Даны два натуральных числа. Найти наибольший общий делитель.
*/
#include <stdio.h>

int main()
{
    int num1, num2;
    
    scanf("%d%d", &num1, &num2);
    while (num1 > 0 && num2 > 0)
        (num1 > num2) ? (num1 %= num2) : (num2 %= num1);
    
    printf ("%d\n", !num1 ? num2 : num1);
    
    return 0;
}
