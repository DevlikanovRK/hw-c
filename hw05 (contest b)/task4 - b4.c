/*
B4 - Ровно три цифры.
Ввести целое число и определить, верно ли, что в нём ровно 3 цифры. 
*/
#include <stdio.h>

int main()
{
    int num, i;
    
    scanf("%d", &num);
    
    for (i=0; num>0; i++)
    {
        num /= 10;
    }
    
    if (i == 3)
        printf("YES");
    else
        printf("NO");
    
    return 0;
}
