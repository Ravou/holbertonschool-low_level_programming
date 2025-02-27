#include "main.h"
/**
 * swap_int - permet d'échanger les valeurs
 * @a: nombre à échanger
 * @b: nombre à échanger
 *
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
