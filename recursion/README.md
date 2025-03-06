0-puts_recursion.c
#include "main.h"
/**
 * _puts_recursion - permet d'utiliser la recursion
 *@s: est la chaine de caractère
 */
void _puts_recursion(char *s)
{
        int i;

        for (i = 0; s[i] != '\0'; i++)
        {
                if (s[i] > 0)
                {
                        _putchar(s[i]);
                }
        }
        _putchar('\n');
}
