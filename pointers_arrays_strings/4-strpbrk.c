#include "main.h"
/**
 *_strpbrk - fonction qui localise les occurences dans une chaine
 *@s: est la chaine de caractère initial
 *@accept: est la chaine de caractère de référence
 *
 * Return :
 * - Un pointeur vers le premier caractère dans s
 * - (NULL) si aucune correspondance n'est trouvé
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int a = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[i] == accept[a])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
