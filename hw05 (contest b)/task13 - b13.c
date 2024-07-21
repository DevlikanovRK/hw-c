/*
B13 - Количество четных и нечетных цифр.
Посчитать количество четных и нечетных цифр числа.
*/
#include <stdio.h>

int main()
{
    int num, even = 0, odd = 0, tmp;
    scanf("%d", &num);
    if (num == 0)
        {
            even = 1;
            odd = 0;
            printf("%d %d", even, odd);
            return 0;
        }
        
    while (num > 0)
    {
        tmp = num % 10;        
        if ((tmp % 2) == 0)
            even++;
        else 
            odd++;
        num /= 10;
    }
    
    printf("%d %d", even, odd);
    return 0;
}
