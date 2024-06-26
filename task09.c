/*
A17 - Время года.
Ввести номер месяца и вывести название времени года.
*/
#include <stdio.h>

int main()
{
    int num;
    
    scanf("%d", &num);
    
    if ((num >= 4) && (num < 6))
        printf("spring");
    else if ((num >= 7) && (num < 9))
        printf("summer");
    else if ((num >= 9) && (num < 12))
        printf("autumn");
    else
        printf("winter");
    
    return 0;
}
