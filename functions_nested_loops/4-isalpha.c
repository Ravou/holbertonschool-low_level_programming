#include "main.h"
/**
 * _isalpha - permet de vérifier les caractères alphabétique seulement
 * @c: il est le caractère a tester
 * Return: Si c'est une lettre en Majiscule ou miniscule (1) sinon (0)
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
