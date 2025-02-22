#include "main.h"
/**
 * time_table - afficher les tables de 0 à 9
 * 
 *
 */
void times_table(void)
{
	int n, m;
	int multi;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
			multi = (n * m) + '0';
		_putchar(multi);
		_putchar(',');
		_putchar('\n');
	}
}
