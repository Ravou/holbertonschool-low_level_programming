#include "main.h"
/**
 * print_diagonal - permet d'afficher le diagonal
 * @n: affiche le nombre de fois qu'il faut de diagonal
 *
 */
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar(' ');
			i++;
			while (j < n)
				_putchar('\\');
			j++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
