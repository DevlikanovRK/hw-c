/*
B9 - Все цифры четные.
Ввести целое число и определить, верно ли, что все его цифры четные.
*/
#include <stdio.h>

int main()
{
    int num, compare, flag = 1;
    scanf("%d", &num);
    
    while (num > 0)
    {
        compare = num % 10;
        num /= 10;
        if ((compare % 2) != 0)
        {
            flag = 0;
            break;
        }
    }
    
    (flag == 1)?(printf("YES")):(printf("NO"));
    return 0;
}
