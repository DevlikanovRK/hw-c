/*
B7 - Две одинаковые цифры не рядом.
Ввести целое число и определить, верно ли, что в его записи есть две одинаковые цифры, НЕ обязательно стоящие рядом. 
*/
#include <stdio.h>

int GET_digits_quantity (int);
int IS_same_digits (int, int);

int main()
{
    int num, digits, res;
    
    scanf("%d", &num);
    digits = GET_digits_quantity(num);
    res = IS_same_digits(num, digits);
    (res == 1)?(printf("YES")):(printf("NO"));
    
    return 0;
}

int GET_digits_quantity (int number)
{
    int quantity = 0;
    
    while (number > 0)
    {
      number/= 10;
      quantity++;  
    }
    
    return quantity;
}

int IS_same_digits (int number, int digits_quantity)
{
    int i, j, k, l, ans = 0, number_tmp;
    for (i = 1; i < digits_quantity; i++)
    {
        k = number % 10;
        number /= 10;
        //printf("k = %d ", k);
        //printf("number = %d\n", number);
        number_tmp = number;
        for (j = 1; j < digits_quantity; j++)
        {
            l = number_tmp % 10;
            number_tmp /= 10;
            if (k == l)
            {
                ans = 1;
                return ans;
            }
        }
    }
    return ans;
}
