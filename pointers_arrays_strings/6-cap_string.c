#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to modify.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int j;
	int cap_next = 1;
	char separators[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

		while (str[i] != '\0')
		{
			if (cap_next && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= ('a' - 'A');
			}
			if (isspace(str[1]) || ispunct(str[i]))
			{
				cap_next = 1;
			}
			else
			{
				cap_next = 0;
			}
			i++;
		}
		return (str);
}
