/*
C4 - Функция по фомрмуле.
Используя указанную функцию для n заданных чисел, вычислить f(x). Среди вычисленных значений найти наибольшее.
*/
#include <stdio.h>

int DO_func(int);

int main()
{
    int seq, res, res_tmp;  
    scanf("%d", &seq);
	res = DO_func(seq);
	res_tmp = res;
	
    while (seq != 0)
    {  
		scanf("%d", &seq);
		res_tmp = DO_func(seq);
		(res_tmp > res) ? (res = res_tmp) : ({});
	}
	printf("%d\n", res);  
    return 0;
}

int DO_func(int number)
{
    int result;
    if (number >= -2 && number <2)
		result = number * number;
    else if (number >= 2)
		result = number * number + 4 * number + 5;
	else
		result = 4;
	return result;
}
