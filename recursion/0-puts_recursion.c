#include "main.h"
/**
 * _puts_recursion - permet d'utiliser la recursion
 *@s: est la chaine de caractère
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != ('\0'))
	{
		if (s[i] > 0)
		{
			_putchar(s[i]);
		}
		_putchar('\n');
	}
}
