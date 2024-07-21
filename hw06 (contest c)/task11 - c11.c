/*
C11 - НОД.
Составить функцию, которая определяет наибольший общий делитель двух натуральных и привести пример ее использования.
*/
#include <stdio.h>

int CALC_GCD (int, int);

int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
	printf("%d\n",CALC_GCD(num1, num2));
    return 0;
}

int CALC_GCD (int number_1, int number_2)
{
    int GCD = -1;
    while (number_1 > 0 && number_2 > 0)
    {
		if (number_1 > number_2)
		{
			number_1 %= number_2;
			GCD = number_2;
		}
		else if	(number_2 > number_1)
		{
			number_2 %= number_1;
			GCD = number_1;
		}
		else
		{
			GCD = number_1;
			return GCD;
		}
	} 
    return GCD;
}
