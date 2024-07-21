/*
C3 - Среднее арифметическое.
Написать функцию, которая возвращает среднее арифметическое двух переданных ей аргументов (параметров).
*/
#include <stdio.h>

//float DO_middle(int, int);
int DO_middle(int, int);

int main()
{
    int a, b;    
    scanf("%d %d", &a, &b);
    //printf("%f", DO_middle (a,b));
    printf("%d\n", DO_middle (a,b));  
    return 0;
}

//float DO_middle(int a, int b)
int DO_middle(int a, int b)
{
    //float mid = (float) (1.0*a + b)/2;
    int mid = (a + b)/2;  
    return mid;
}
