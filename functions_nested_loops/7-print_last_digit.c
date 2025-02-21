#include "main.h"
/**
 * print_last_digit - afficher le dernier chiffre du dernier nombre
 * Return : Always (0) (Success)
 *
 */
int print_last_digit(int n)
{
	int Last_digit = n % 10;
	
	_putchar(Last_digit + '0');
	return (Last_digit);
}
