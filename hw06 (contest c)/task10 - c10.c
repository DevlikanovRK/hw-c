/*
C10 - Простые множители числа.
Составить функцию, печать всех простых множителей числа. Использовать ее для печати всех простых множителей числа.
*/
#include <stdio.h>

int CALC_simple_nums (int);

int main()
{
    int num;
    scanf("%d", &num);
	CALC_simple_nums(num);
    return 0;
}

int CALC_simple_nums (int number)
{
    int i;
    for (i = 2; i <= number; ++i)
    {
		REPEAT:
		if (number % i == 0)
		{
			printf("%d ", i);
			number /= i;
			goto REPEAT;
		}
	}
	return 0;
}
