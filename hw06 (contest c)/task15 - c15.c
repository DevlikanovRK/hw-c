/*
C15 - Цифры по возрастанию.
Составить функцию логическую функцию, которая определяет, верно ли, что в заданном числе все цифры стоят по возрастанию. Используя данную функцию решить задачу.
*/
#include <stdio.h>

char CHECK_increase (int, int);
int CALC_digits_quantity (int);

int main()
{
    char flag;
    int num, q;
    scanf("%d", &num);
    q = CALC_digits_quantity (num);
    //printf("q = %d\n", q);
    if (q == 0 || q == 1)
    {
        printf("YES");
        return 0;
    }
    flag = CHECK_increase(num, q);
    (flag == 0) ? (printf("NO")) : (printf("YES"));
    return 0;
}

char CHECK_increase (int number, int quantity)
{
    char flag = 0;
    int i, dgt1, dgt2;
    for (i = 1; i < quantity; ++i)
    {
        dgt1 = number % 10;
        dgt2 = (number / 10) % 10;
        if (dgt1 > dgt2)
        {
            flag = 1;
            number /= 10;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int CALC_digits_quantity (int number)
{
    int quantity = 0;    
    while (number > 0)
    {
      ++quantity;
      number/= 10; 
    }
    return quantity;
}
