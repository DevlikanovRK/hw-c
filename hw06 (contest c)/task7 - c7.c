/*
C7 - Число N в P-ую систему.
Составить функцию, которая переводит число N из десятичной системы счисления в P-ичную систему счисления.
*/
#include <stdio.h>

int TRANS_N_to_numsys_P(int, int);

int main()
{
    int n, p;  
    scanf("%d%d", &n, &p);
    printf("%d\n", TRANS_N_to_numsys_P(n, p));
    
    return 0;
}

int TRANS_N_to_numsys_P(int n, int p)
{
    int result = 0, pwr = 1, tmp;
    while (n > 0)
    {
        tmp = n % p;
        result += tmp * pwr;
        pwr *= 10;
        n /= p;
    }
    
    return result;
}
