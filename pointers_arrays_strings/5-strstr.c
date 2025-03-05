#include "main.h"
#include <stddef.h>
/*
 *_strstr - la fonction qui permet de localiser une sous chaine
 *@needle : est la sous chaine
 *@haystack: est la chaine initiale
 *Return :
 *-return au pointeur vers le début du sous chaine (&haystack[h])
 *-return a (NULL) si je ne trouve pas
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int h = 0;

	while (haystack[h] != '\0')
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[h + i] != needle[i])
			{
				break;
			}
			if (needle[i] == '\0')
			{
				return (&haystack[h]);
			}
		}
		h++;
	}
	return (NULL);
}
