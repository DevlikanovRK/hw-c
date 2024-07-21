/*
B18 - Фибоначчи.
Вывести на экран ряд чисел Фибоначчи, состоящий из n элементов.
*/
#include <stdio.h>

int main()
{
    int n, i, f1, f2,  sum;
    scanf("%d", &n);
    f1 = 1;
    f2 = 1;
    if (n == 1)
        printf("1");
    else
        if (n != 0)
        {
            printf("1 1 ");
            for (i = 2; i < n; ++i){
                sum = f1 + f2;
                f1 = f2;
                f2 = sum;
                printf("%d ", f2);
            }
        }
    return 0;
}
