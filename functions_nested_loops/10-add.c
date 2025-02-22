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
	int tens, ones;
	
	if (result < 0)
	{
		_putchar('-');
		result = -result;
	}

	tens = result / 10;
	ones = result % 10;

	
	if (tens != 10)
	{
		_putchar(tens + '0');
	}
	_putchar(ones+ '0');
	return (0);
}
