#include "main.h"
/**
 * print_line - affiche le nombre de caractère
 * @n: le nombre de fois de caractère
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
