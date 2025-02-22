#include "main.h"
/**
 * add - Affiche un entier avec _putchar
 * @n: l'entier à afficher
 * @m: le second entier à additionner
 * Return: Always (0) (Success)
 */
int add(int n, int m)
{
	int result = n + m;

	if (result < 0)
	{
		_putchar('-');
		result = -result;
	}

	if (result / 10 != 0)
	{
		add(result / 10, 0);
	}
	_putchar((result % 10) + '0');
	return (0);
}
