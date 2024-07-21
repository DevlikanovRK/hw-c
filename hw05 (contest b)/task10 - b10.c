/*
B10 - Цифры по возрастанию.
Ввести целое число и определить, верно ли, что все его цифры расположены в порядке возрастания.
*/
#include <stdio.h>

int GET_digits_quantity (int);

int main()
{
    int num, digit_1, digit_2, digits, flag = 0, i;
    scanf("%d", &num);
    digits = GET_digits_quantity(num);
    //printf("digits = %d\n", digits);
    if (digits == 0 || digits == 1)
    {
        printf("YES");
        return 0;
    }
    
    for (i = 1; i < digits; i++)
    {
        //printf("num = %d\t", num);
        digit_1 = num % 10;
        //printf("digit_1 = %d\t", digit_1);
        digit_2 = (num / 10) % 10;
        //printf("digit_2 = %d\n", digit_2);
        num /= 10;
        if (digit_2 < digit_1)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    
    (flag == 1)?(printf("YES")):(printf("NO"));
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
