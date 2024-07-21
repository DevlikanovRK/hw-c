#include <stdio.h>

int main ()
{
    int n;			//number in dec
    int p;			//base of searching number
    int dgt=1;		//digit
    int mod;		//modulo (reminder)
    int num = 0;	//searching number
    
    scanf("%d%d", &n, &p);
    while (n != 0)
    {
        mod = (n % p);
        num += mod * dgt;
        dgt *= 10;        
        n /= p;
    }
    printf("num = %d", num);
    
    return 0;
}
