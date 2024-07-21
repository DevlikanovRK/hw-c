/*
B11 - Перевернуть число.
Ввести целое число и «перевернуть» его, так чтобы первая цифра стала последней и т.д.
*/
#include <stdio.h>

int main()
{
    int num, mun = 0;
    scanf("%d", &num);
    if (num > 0 && num < 10)
    {
        printf("%d\n", num);
        return 0;
    }
    
    while (num > 0)
    {
        mun *= 10;
        mun += num % 10;
        num /= 10; 
    }
    printf("%d", mun);
    
    return 0;
}
