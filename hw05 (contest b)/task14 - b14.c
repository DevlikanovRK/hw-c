/*
B14 - Посчитать числа.
Дана последовательность ненулевых целых чисел, в конце последовательности число 0. Посчитать количество чисел.
*/
#include <stdio.h>

int main()
{
    int seq, i = 0;
    
    do
    {
        scanf("%d", &seq);
        ++i;
    } while (seq != 0);
    
    printf ("%d", i - 1);
    
    return 0;
}