#include "main.h"
#include <stdio.h>
/**
 * _abs - calcul la valeur absolue d'un entier
 * @j: permet de donner d'une valeur absolue d'un nombre
 * Return: si c'est négative ou égal à zero (0) sinon (1)
 *
 */
int _abs(int j)
{
	if (j <= 0)
	{
		return (0);
	}
	else if (j >= 0)
	{
		return (1);
	}
	return (0);
}
