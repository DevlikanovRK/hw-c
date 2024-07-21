/*
A5 - Среднее арифметическое.
Ввести три числа, найти их среднее арифметическое.
*/
#include <stdio.h>

int main()
{
    int a, b, c, n=3, sum;
    float average = 0.2f;
    
    scanf("%d%d%d", &a, &b, &c);
    sum = a + b + c;
    average = 1.0*sum / n;
    printf("%.2f\n", average);
    
    return 0;
}
