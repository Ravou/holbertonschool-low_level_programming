#include <stdio.h>
/**
 * print_to_98 - Affiche tous les nombres naturels de n à 98
 * @n: Nombre de départ
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else
			n--;
	}
	printf("98\n");
}
