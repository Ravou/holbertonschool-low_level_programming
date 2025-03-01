#include "main.h"
/**
 * puts_half - fonction qui permet d'afficher que la moitié de la chaine
 * @str : affiche la seconde moitié de la chaine de caractère
 *
 */
void puts_half(char *str)
{
	int i = 0;
	int n = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		n = i / 2;
	}
	else
	{
		n = (i + 1) / 2;
	}

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
