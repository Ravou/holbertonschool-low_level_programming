#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - permet d'allouer la mémoire
 *@b : la taille en octet à allouer
 *
 * Return: Pointeur vers la mémoire allouée
 * Si l'allocation échoué, retourne (void *)98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		return ((void *) 98);
	return (ptr);
}
