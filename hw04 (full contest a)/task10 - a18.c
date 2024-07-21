/*
A18 - Above, Less, Equal.
Ввести два числа. Если первое число больше второго, то программа печатает слово Above. Если первое число меньше второго, то программа печатает слово Less. А если числа равны, программа напечатает сообщение Equal.
*/
#include <stdio.h>

int main()
{
    int n1, n2;
    
    scanf("%d%d", &n1, &n2);
    
    if (n1 > n2)
        printf("Above");
    else if (n1 < n2)
        printf("Less");
    else
        printf("Equal");
    
    return 0;
}
