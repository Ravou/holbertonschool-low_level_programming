#include "main.h"
/*
 *_strstr - la fonction qui permet de localiser une sous chaine
 *@needle : est la sous chaine
 *@haystack: est la chaine initiale
 *Return :
 *-retour au pointeur vers le début du sous chaine (&needle[i])
 *-retour a (NULL) si je ne trouve pas
 */
char *_strstr(char *haystack, char *needle)
{
	int i, int h, int n;

	while (haystack[h] != '\0')
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (h > needle[i] && i < haystack[h])
			{
				n++;
				return (&needle[i]);
			}
		}
	}
	return (NULL);
}
