#include "main.h"
#include <stdlib.h>
/**
 * str_concat - fonction qui permet de concatené deux chaine de caractère
 * @s1: première chaine de caractère
 * @s2: deuxième chaine de caractère
 * Return: en cas d'echec (NULL)
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	concat = (char *)malloc((i + j + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		concat[k] = s1[k];
	for (k = 0; k < j; k++)
		concat[i + k] = s2[k];
	concat[i + j] = '\0';
	return (concat);
}
