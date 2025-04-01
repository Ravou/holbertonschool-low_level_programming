#include "lists.h"
#include <stdio.h>
/**
 * list_len - function qui retourne le nombres d'éléments
 * @h: pointeur des nodes
 * Return: le nombre de d'éléménts
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
