#include "main.h"
/**
 * times_table - Affiche la table de multiplication de 0 à 9
 *
 */
void times_table(void)
{
	int n, m, prod;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			prod = n * m;
			
			if (m != 0)
			{
				_putchar(',');
				_putchar(' ');
	
				if (prod < 10)
					_putchar(' ');
			}

			if (prod >= 10)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else
			{
				_putchar(prod + '0');
			}
		}
		_putchar('\n');
	}
}
