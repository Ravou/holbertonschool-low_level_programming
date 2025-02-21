#include "main.h"
/**
 * print_last_digit - afficher le dernier chiffre du dernier nombre
 * @n : permet de trouver le Last digit
 * Return: (Last_digit) (Success)
 *
 */
int print_last_digit(int n)
{
	int Last_digit = n % 10;

	_putchar(Last_digit + '0');
	return (Last_digit);
}
