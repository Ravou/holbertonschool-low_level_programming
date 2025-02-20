#include "main.h"
/**
 * print_alphabet_x10 - entry point
 *
 */
void print_alphabet_x10(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c * 10);
	}
	_putchar('\n');
}
