#include "main.h"

/**
 * jack_bauer - affiche toutes les heures et minutes de la journée
 * Return: Nothing
 */
void jack_bauer(void)
{
	int h, m;
	char digit1, digit2;
	
	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			digit1 = (h / 10) + '0';
			digit2 = (h % 10) + '0';
			_putchar(digit1);
			_putchar(digit2);
			_putchar(':');
			
			digit1 = (m / 10) + '0';
			digit2 = (m % 10) + '0';
			_putchar(digit1);
			_putchar(digit2);
			_putchar('\n');
		}
	}
}
