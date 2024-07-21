/* B20 - Простое число/
Проверить число на простоту.
*/
#include <stdio.h>

int main()
{
    int num, i;
    scanf("%d", &num);
   
//По определению простое число то, которое без остатка делится только на 1 и само себя.   
    
    for (i = 2; i < num; ++i)
    {
        if (num % i == 0)
        {
            printf("NO\n");
            return 0;
        }
    }
    
    (num == 1) ? printf("NO\n") : printf("YES\n");
    return 0;
}
