#include "main.h"
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'A'; c <= 'z'; c++)
	{
		if (c)
		{
			_putchar(c);
			_putchar('l');
			_putchar('o');
			_putchar('w');
			_putchar('e');
			_putchar('r');
			_putchar('c');
			_putchar('a');
			_putchar('s');
			_putchar('e');
			_putchar('\n');
		}
		else
		{
			_putchar(c);
			_putchar('n');
			_putchar('o');
			_putchar('t');
			_putchar(' ');
			_putchar('l');
			_putchar('o');
			_putchar('w');
			_putchar('e');
			_putchar('r');
			_putchar('c');
			_putchar('a');
			_putchar('s');
			_putchar('e');
			_putchar('\n');
		}
	}
	return (0);
}
