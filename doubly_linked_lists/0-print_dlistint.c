#include "lists.h"

/**
 * print_dlistint - fonction affiche les éléments de la liste
 * @h: pointeur qui pointe vers le node suivant et précédente
 * Return: le nombre de nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}	
