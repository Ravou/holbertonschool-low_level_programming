#include "main.h"
/**
 * print_last_digit - afficher le dernier chiffre du dernier nombre
 * @n : permet de trouver le Last digit
 * Return: (last_digit) (Success)
 *
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -last_digit;
	_putchar(last_digit + '0');
	return (last_digit);
}
