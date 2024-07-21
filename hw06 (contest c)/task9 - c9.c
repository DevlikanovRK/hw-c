/*
C9 - Факториал.
Составить функцию вычисления N!. Использовать ее при вычислении факториала.
*/
#include <stdio.h>

int CALC_factor (int);

int main()
{
    int num;
    scanf("%d", &num);
	printf("%d\n", CALC_factor(num));
    return 0;
}

int CALC_factor (int number)
{
    int i, factorial = 1;
    for (i = 1; i <= number; ++i)
    {
		factorial *= i;
		//printf("%d\n", factorial); 
	}
	return factorial;
}
