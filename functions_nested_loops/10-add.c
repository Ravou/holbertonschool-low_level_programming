#include "main.h"
/**
 * add - Additionne deux entiers et affiche le résultat avec _putchar
 * @n: le premier entier à additionner
 * @m: le second entier à additionner
 *
 * Return: Toujours 0 (succès)
 */
int add(int n, int m)
{
	int result = n + m;
	
	if (result < 0)
	{
		_putchar('-');
		result = -result;
	}
	
	if (result >= 10)
	{
		_putchar((result / 10) + '0');
	}
	_putchar((result % 10) + '0');
	return (0);
}
