#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - permet de calculer les minutes de sa journée sur 24h
 * @hr : donne la valeur de l'heure
 * @min: donne la veleur de min
 * Return: Always (0) (Success)
 *
 */
void jack_bauer(void)
{
	int hr;
	int min;

	for (hr = 0; hr <= 24; hr++)
	{
		for (min = 0; min <= 1440; min++)
		{
			_putchar(hr + '0');
			_putchar(min + '0');
			_putchar("%d: %d", hr,min);
			_putchar('\n');
		}
	}
}
