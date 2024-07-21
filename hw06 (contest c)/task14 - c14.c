/*
C14 - Сумма цифр четна.
Составить функцию логическую функцию, которая определяет, верно ли, что сумма его цифр – четное число. Используя эту функцию решить задачу.
*/
#include <stdio.h>

char CHECK_parity (int);

int main()
{
    char flag;
    int num;
    scanf("%d", &num);
    flag = CHECK_parity(num);
    (flag == 0) ? (printf("YES")) : (printf("NO"));
    return 0;
}

char CHECK_parity (int number)
{
    char flag;
    int sum = 0;
    while (number > 0)
    {
        sum += number % 10;
        number /= 10; 
    }
    (sum % 2 == 0) ? (flag = 0) : (flag = 1);
    return flag;
}
