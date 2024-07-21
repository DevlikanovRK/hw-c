/*
B1 - Квадраты и кубы.
Ввести натуральное число вывести квадраты и кубы всех чисел от 1 до этого числа. Число не превосходит 100.
*/
#include <stdio.h>

int main()
{
    int num, i;
    
    scanf("%d", &num);
    
    for (i=1; i<=num; i++)
    {
        printf("%d %d %d\n", i, i*i, i*i*i);
    }
    
    return 0;
}
