/*
C5 - Сумма от 1 до N.
Составить функцию, которая определяет сумму всех чисел от 1 до N и привести пример ее использования.
*/
#include <stdio.h>

int DO_sum(int);

int main()
{
    int num, res;  
    scanf("%d", &num);
    res = DO_sum(num);
    printf("%d\n", res);  
    return 0;
}

int DO_sum(int number)
{
    int i, result = 0;
    for (i = 1; i <= number; ++i)
        result += i;
    return result;
}
