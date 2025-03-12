#include "main.h"
#include <stdlib.h>
/*
 *create_array - permet de créer un tableau de caractère 
 *@size: est la taille du tableau
 *@c: est le caractère
 *Return: si size == 0 alors en renvoie a (NULL)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *tableau;

	if (size == 0)
		return (NULL);

	tableau = (char *)malloc(size * sizeof(char));
	if (tableau == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		tableau[i] = c;
	}
	return (tableau);
}
