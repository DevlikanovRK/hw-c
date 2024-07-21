/*
C8 - Строчную в заглавную.
Составить функцию, которая переводит латинскую строчную букву в заглавную. И показать пример ее использования.
*/
#include <stdio.h>

char DO_up (char);

int main()
{
    char chr;
    while (chr != '.')
    {
        scanf("%c", &chr);
        if (chr == '.')
			return 0;
        printf("%c", DO_up(chr));
    }
    return 0;
}

char DO_up (char chr)
{
    return ((chr >= 'a' && chr <= 'z') ? (chr - ('a' - 'A')) : (chr));
}
