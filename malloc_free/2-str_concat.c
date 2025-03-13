#include "main.h"
#include <stdlib>
/**
 * str_concat - fonction qui permet de concatené deux chaine de caractère
 * @s1: première chaine de caractère
 * @s2: deuxième chaine de caractère
 * Return: en cas d'echec (NULL)
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char concat;

	for (i = 0; s1[i] = '\0'; i++)
	{
		for (j = 0; S2 [j] != '\0'; j++)
			_putchar(j);	
	}
	_putchar(j);

	concat = (char *)malloc((i+1)(j+1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	concat[k] = s1[i] + s2[j]
		for (k = 0; concat[k] = '\0'; k++)
			return(concat);
}	
