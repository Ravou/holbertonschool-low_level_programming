#include "main.h"
/**
 * rev_string - fonction qui permet d'inverser une chaine de caractère
 * @s: Pointeur qui affiche la chaine de caractère
 *
 */
void rev_string(char *s)
{
	int s[10] = s;
	int i;

	while (s[10] != '\0')
	{
		s[10]++;
	}
	for (i = s[10] - 1; i >= 0; i--)
	{
		_putchar(s);
	}
	_putchar('\n');
}

