/*
A10 - Наименьшее из пяти чисел.
Ввести пять чисел и найти наименьшее из них.
*/
#include <stdio.h>

int main()
{
    int a, b, c, d, e, min;
    
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    
    (a < b) ? (min = a) : (min = b);
    (min < c) ? ({}) : (min = c);
    (min < d) ? ({}) : (min = d);
    (min < e) ? ({}) : (min = e);
    
    printf("%d", min);
    
    return 0;
}
