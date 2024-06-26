/*
A11 - Сумма максимума и минимума.
Напечатать сумму максимума и минимума.
*/
#include <stdio.h>

int main()
{
    int a, b, c, d, e, min, max, sum;
    
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    
    (a < b) ? (min = a, max = b) : (min = b, max = a);
    //printf("%d %d\n", min, max);
    (min < c) ? ({}) : (min = c);
    //printf("min = %d\n", min);
    (min < d) ? ({}) : (min = d);
    //printf("min = %d\n", min);
    (min < e) ? ({}) : (min = e);
    //printf("min = %d\n", min);
    (max > c) ? ({}) : (max = c);
    //printf("max = %d\n", max);
    (max > d) ? ({}) : (max = d);
    //printf("max = %d\n", max);
    (max > e) ? ({}) : (max = e);
    //printf("max = %d\n", max);
    //printf("min = %d, max = %d\n", min, max);
    
    sum = min + max;
    printf("%d\n", sum);
    
    return 0;
}
