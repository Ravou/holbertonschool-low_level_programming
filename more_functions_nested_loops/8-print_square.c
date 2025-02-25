#include "main.h"
/**
 * print_square - permet d'afficher les square
 * @size: est la taille des square
 *
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i == size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
		for (j = 0; j == size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
