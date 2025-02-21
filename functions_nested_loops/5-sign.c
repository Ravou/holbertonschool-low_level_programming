#include "main.h"
/**
 * print_sign - permet de comparer les signe des nuémros
 * @n : indique le nombre
 * Return: 1 si le chiffre est positif -1 si le nombre est négative et 0 sinon
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if
		(n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
