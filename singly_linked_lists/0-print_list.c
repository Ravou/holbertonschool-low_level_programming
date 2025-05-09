#include "lists.h"
#include <stdio.h>
/**
 * print_list - une fonction qui permet d'afficher une liste
 * @h: est un pointeurs vers la liste
 * Return: nombre de nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
