#include "main.h"

/**
 * _islower - Vérifie si un  caractère est un lettre miniscule
 * @c: le caractère à tester
 *
 * Return: 1 si c'est une lettre miniscule, 0 sinon
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
