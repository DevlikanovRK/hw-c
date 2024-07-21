/*
C1 - Модуль числа.
Составить функцию, модуль числа и привести пример ее использования. 
*/
#include <stdio.h>

int DO_abs(int);

int main()
{
    int num;    
    scanf("%d", &num);
    printf("%d", DO_abs(num));    
    return 0;
}

int DO_abs(int num)
{
    return (num<0)?-num:num;
}
