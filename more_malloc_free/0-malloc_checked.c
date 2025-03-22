#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Alloue de la mémoire dynamiquement avec malloc.
 *@b: Taille en octet à allouer
 *
 * Return: Pointeur vers la mémoire allouée.
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
