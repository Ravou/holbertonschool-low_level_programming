#include "main.h"
/**
 * more_numbers - affiche 10 fois les numéros de 1 à 14
 *
 */
void more_numbers(void)
{
	int n;
	int c;

	for (n = 0; n < 10; n++)
	{
		for (c = 0;  c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar('0' + (c / 10));
			_putchar('0' + (c % 10));
			}
		}
		_putchar('\n');
	}
}
