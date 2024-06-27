/*
A19 - Существует ли треугольник.
Даны стороны треугольника a, b, c. Определить существует ли такой треугольник.
*/
#include <stdio.h>

int main()
{
    int a, b, c;
    
    scanf("%d%d%d", &a, &b, &c);
    
    if (((a + b) > c) && ((b + c) > a) && ((a + c) > b))
        printf("YES");
    else
        printf("NO");
    
    return 0;
}
