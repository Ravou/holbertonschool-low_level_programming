#include "main.h"
/**
 * _isdigit - permet de vérifier le digit
 * @c: est un variable
 * Return: (1) si c'est un digit, (0) sinon
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
