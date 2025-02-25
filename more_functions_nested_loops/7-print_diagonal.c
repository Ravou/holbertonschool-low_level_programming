#include "main.h"
/**
 * print_diagonal - permet d'afficher le diagonal
 * @n: affiche le nombre de fois qu'il faut de diagonal
 *
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
		else
		{
		_putchar('\n');
		}
}
