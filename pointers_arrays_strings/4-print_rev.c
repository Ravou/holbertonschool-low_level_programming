#include "main.h"
/**
 * print_rev - permet d'afficher la chaine de caractère à l'envers
 * @s: pointeur vers la chaine à afficher
 *
 */
void print_rev(char *s)
{
	int str = *s;
	int i;

	for (i = str - 1; i >= 0; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
