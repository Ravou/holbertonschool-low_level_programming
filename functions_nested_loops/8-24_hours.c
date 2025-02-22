#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - permet de calculer les minutes de sa journée sur 24h
 * Return: Always (0) (Success)
 *
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar(m);
			_putchar('\n');
		}
	}
	_putchar(h);
}
