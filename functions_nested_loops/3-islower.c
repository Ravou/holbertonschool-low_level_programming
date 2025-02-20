#include "main.h"
/**
 * _islower(int c) - Entry point
 * @c: le caractère à tester
 * Return: 1 si c'est une lettre miniscule, 0 sinon
 *
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
