/*
A16 - В порядке возрастания.
Ввести три числа и определить, верно ли, что они вводились в порядке возрастания.
*/
#include <stdio.h>

int main()
{
    int n1, n2, n3;
    
    scanf("%d%d%d", &n1, &n2, &n3);
    
    if ((n1 < n2) && (n2 < n3))
        printf("YES");
    else
        printf("NO");    
    
    return 0;
}
