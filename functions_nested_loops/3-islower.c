#include "main.h"
/**
 * int _islower(int c) - Entry point
 * Return: 0 (Success)
 */
int _islower(int c)
{
	for (c = 'A'; c <= 'z'; c++)
	{
		if (c)
		{
			_putchar(c);
			_putchar(1);
			_putchar('\n');
		}
		else
		{
			_putchar(c);
			_putchar(0);
			_putchar('\n');
		}
	}
	return (0);
}
