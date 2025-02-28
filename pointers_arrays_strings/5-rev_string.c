#include "main.h"
/**
 * rev_string - fonction qui permet d'inverser une chaine de caractère
 * @s: Pointeur qui affiche la chaine de caractère
 *
 */
void rev_string(char *s)
{
	char *end = s;
	char temp;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (s < end)
	{
		temp = *s;
		*s = *end;
		*end = temp;

		s++;
		end--;
	}
}
