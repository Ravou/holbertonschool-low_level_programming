#include "main.h"
#include <string.h>
/**
 * print_rev - permet d'afficher la chaine de caractère à l'envers
 * @*s: le pointeur a modifier
 *
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
