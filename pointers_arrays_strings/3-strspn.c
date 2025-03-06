#include "main.h"
/**
 * int _strspn - fonction qui permet d'afficher le prefix d'une sous caractère
 * @s : la référence a une partie de du début de chaine de caractère
 * @accept: la chaine de caractère comparatif
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int n = 0;
	int a = 0;

	while (s[i] != '\0')
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[i] == accept[a])
			{
				n++;
				break;
			}
		}
		if (accept[a] == '\0')
		{
			break;
		}
		i++;
	}
	return (n);
}
