#include "main.h"
#include <stdlib.h>
/*
 *_strdup- fonction qui retourne a un pointeur le dublon
 *@str: la chaine de caractère doublé
 *Return : si str est égale à (NULL) et si la mémoire est insuffisant
 *
 */
char *_strdup(char *str)
{
	char *dup;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	dup = (char *)malloc((i + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		dup[i] = str[i];

	dup[i] = '\0';
	return (dup);
}
