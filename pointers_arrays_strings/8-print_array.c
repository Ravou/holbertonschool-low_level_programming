#include "main.h"
#include <stdio.h>
/**
 * print_array - Affiche n éléments d'un tableau d'entiers
 * @a: Tableau d'entiers à afficher
 * @n: Nombre d'éléments à afficher
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
