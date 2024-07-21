/*
B21 - Заглавные в строчные.
Дан текст состоящий из английских букв и цифр, заканчивается символом «.» Перевести все заглавные английские буквы в строчные.
*/
#include <stdio.h>

int main()
{
    char chr;
    
    while (chr != '.')
    {
        scanf("%c", &chr);
        if (chr >= 'A' && chr <= 'Z')
        {
            chr += 0x20;
            printf("%c", chr);
        }
        else if (chr == '.')
            return 0;
        
        else
            printf("%c", chr);
    }
    
    return 0;
}
