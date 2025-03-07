#include "main.h"

/**
 * factorial - Calcule le factoriel d'un nombre donné
 * @n: Le nombre dont on veut le factoriel
 *
 * Return: Le factoriel de n, ou -1 si n est inférieur à 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
