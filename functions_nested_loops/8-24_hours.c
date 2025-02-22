#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - permet de calculer les minutes de sa journée sur 24h
 * Return: Always (0) (Success)
 *
 */
void jack_bauer(void)
{
	int hr;
	int min;

	for ( hr = 0; hr <= 24; hr++)
	{
		for (min = 0; min <= 1440; min++)
		{
			_putchar(min);
		}
	}
	_putchar(hr);
	_putchar(':');
	_putchar('\n');
}
