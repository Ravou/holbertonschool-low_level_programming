#include "main.h"
/**
 * *_strchr - la fonction qui permet de localiser un caractère
 * @c : on doit chercher le caractère stocké dans la variable c
 * @s : est la chaine de caractère
 *
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
