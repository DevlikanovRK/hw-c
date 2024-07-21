/*
B12 - Наименьшая и наибольшая цифра.
Организовать ввод натурального числа с клавиатуры. Программа должна определить наименьшую и наибольшую цифры, которые входят в состав данного натурального числа.
*/
#include <stdio.h>

int main()
{
    int num, min, max, tmp;
    scanf("%d", &num);
    if (num < 0)
        return 0;
    else if (num > 0 && num < 10)
        {
            min = max = num;
            printf("%d %d", min, max);
            return 0;
        }
    
    min = num % 10;
    max = (num / 10) % 10;
    num /= 100;
    if (min > max)
    {
        tmp = min;
        min = max;
        max = tmp;
    }
    
    while (num > 0)
    {
        tmp = num % 10;        
        if (tmp < min)
            min = tmp;
        if (tmp > max)
            max = tmp;
        num /= 10;
    }
    
    printf("%d %d", min, max);
    return 0;
}
