#include "main.h"
/**
 * _puts_recursion - permet d'utiliser la recursion
 *@s: est la chaine de caractère
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
