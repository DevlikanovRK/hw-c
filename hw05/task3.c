/*
B3 - Сумма квадратов.
Ввести два целых числа a и b (a ≤ b) и вывести сумму квадратов всех чисел от a до b.
*/
#include <stdio.h>

int main()
{
    int a, b, i, square, sum=0;
    
    scanf("%d%d", &a, &b);
    
    for (i=a; i<=b; i++)
    {
        square = i * i;
        sum += square;
    }
    printf("%d ", sum);
    
    return 0;
}
