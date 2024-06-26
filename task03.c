/*
A9 - Наибольшее из пяти чисел.
Ввести пять чисел и найти наибольшее из них.
*/
#include <stdio.h>

int main()
{
    int a, b, c, d, e, max;
    
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    
    (a > b) ? (max = a) : (max = b);
    (max > c) ? ({}) : (max = c);
    (max > d) ? ({}) : (max = d);
    (max > e) ? ({}) : (max = e);
    
    printf("%d", max);
    
    return 0;
}
