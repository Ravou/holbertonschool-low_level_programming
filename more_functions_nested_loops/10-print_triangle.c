#include "main.h"
/**
 * print_triangle - fonction qui affiche
 * @size: la taille du triangle
 *
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (i < size)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
		for ( j = 0; j > i; j++)
		{
			if (j > i)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
