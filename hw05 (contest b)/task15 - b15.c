/*
B15 - Количество четных чисел.
Дана последовательность ненулевых целых чисел, в конце последовательности число 0. Посчитать количество четных чисел.
*/
#include <stdio.h>

int main()
{
    int seq, i = 0;
    
    do
    {
        scanf("%d", &seq);
        if ((seq % 2) == 0)
            ++i;
    } while (seq != 0);
    
    printf ("%d", i - 1);
    
    return 0;
}
