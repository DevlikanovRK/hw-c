/*
B6 - Две одинаковые цифры.
Ввести целое число и определить, верно ли, что в его записи есть две одинаковые цифры, стоящие рядом. 
*/
#include <stdio.h>

int main()
{
    int num, a=0, b=0, i;
    
    scanf("%d", &num);
    
    if (num <= 10)
    {
        printf("NO\n");
        goto exit;
    }
    
    for (i=0; num>0; i++)
    {
        b = a;
        a = num % 10;
        num /= 10;
        if ((i > 0) && (a == b))
        {
            printf("YES\n");
            goto exit;
        }
    }
    
    if ((i > 0) && (num == 0))
        printf("NO\n");
        
    exit: {};
    
    return 0;
}
