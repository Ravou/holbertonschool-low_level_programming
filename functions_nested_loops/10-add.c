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
	int digit;

	if (result < 0)
	{
		_putchar('-');
		result = -result;
	}

	if (result / 10 != 0)
	{
		_putchar('0');
	}
	else
	{
		int divisor = 1000000000;
		int leading_zero = 1;

		while (divisor > 0)
		{
			digit = result / divisor;
			result %= divisor;
			divisor /= 10;

			if (digit != 0 || !leading_zero)
			{
				_putchar( digit + '0');
				leading_zero = 0;
			}
		}
	}
	return (0);
}
