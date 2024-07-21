/*
B19 - Сумма цифр равна 10.
Ввести натуральное число и определить, верно ли, что сумма его цифр равна 10.
*/
#include <stdio.h>

int main()
{
    int num, sum = 0;
    scanf("%d", &num);
    while (num > 0)
    {
		sum += num % 10;
		num /= 10;
	}
	(sum == 10) ? (printf("YES")) : (printf("NO"));
    
    return 0;
}
