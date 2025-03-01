#include "main.h"
/**
 * _atoi - Convertit une chaîne de caractères en un entier.
 * @s: La chaîne à convertir.
 *
 * Return: L'entier converti.
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0;
	
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9') && s[i] != '+' && s[i] != '-')
	{
		i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}
		else if (s[i] == '+')
		{
			sign = 1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			break;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return result * sign;
}
