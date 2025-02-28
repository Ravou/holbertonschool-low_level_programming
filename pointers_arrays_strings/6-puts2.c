#include "main.h"
/**
 * puts2 - permet d'afficher chaque caractère d'une chaine
 * @str: le pointeur aui affiche chaque caractère d'une chaine
 *
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{

	if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	i++;
	}
	_putchar('\n');
}
