#include "main.h"
/**
 * print_numbers - permet d'afficher un nombre de 0 à 9
 *
 */
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
