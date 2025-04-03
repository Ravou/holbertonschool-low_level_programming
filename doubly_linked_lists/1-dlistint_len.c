#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - fonction affiche les éléments de la liste
 * @h: pointeur qui pointe vers le premier élément
 * Return: le nombre de nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
