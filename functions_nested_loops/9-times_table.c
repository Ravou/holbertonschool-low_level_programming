#include "main.h"
/**
 * time_table - afficher les tables de 0 à 9
 *
 *
 */
void times_table(void)
{
	int n, m;
	int multi1, multi2, multi3, multi4, multi5, multi6, multi7, multi8, multi9, multi10;
	
	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			multi1 = (n * m) + '0';
			multi2 = (n * m) + '0';
			multi3 = (n * m) + '0';
			multi4 = (n * m) + '0';
			multi5 = (n * m) + '0';
			multi6 = (n * m) + '0';
			multi7 = (n * m) + '0';
			multi8 = (n * m) + '0';
			multi9 = (n * m) + '0';
			multi10 = (n * m) + '0';
			_putchar(multi1);
			_putchar(multi2);
			_putchar(multi3);
			_putchar(multi4);
			_putchar(multi5);
			_putchar(multi6);
			_putchar(multi7);
			_putchar(multi8);
			_putchar(multi9);
			_putchar(multi10);
			_putchar(',');
			_putchar('\n');
		}
	}
}
