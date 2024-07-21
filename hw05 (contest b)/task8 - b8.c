/*
B8 - Ровно одна цифра 9.
Ввести целое число и определить, верно ли, что в нём ровно одна цифра «9».
*/
#include <stdio.h>

int main()
{
    int nine = 9, num, compare, count;
    scanf("%d", &num);
    
    while (num > 0)
    {
        compare = num % 10;
        num /= 10;
        if (compare == nine)
            count++;
    }
    
    (count == 1)?(printf("YES")):(printf("NO"));
    return 0;
}
