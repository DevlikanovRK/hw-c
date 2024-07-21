/*
C2 - Степень числа.
Составить функцию, возведение числа N в степень P. int power(n, p) и привести пример ее использования.
*/
#include <stdio.h>

int DO_power(int, int);

int main()
{
    int numBase, numPower;    
    scanf("%d %d", &numBase, &numPower);
    printf("%d\n", DO_power(numBase, numPower));    
    return 0;
}

int DO_power(int numBase, int numPower)
{
    int i, exp=1;  //exponentiation
    for (i=1; i<=numPower; i++)
        exp *= numBase;   
    return exp;
}
