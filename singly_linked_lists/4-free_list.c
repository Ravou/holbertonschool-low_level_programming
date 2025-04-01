#include "lists.h"
#include <stdlib.h>

/**
 * free_list - libère la list_t list
 * @head: pointeur de du premier node de la liste
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
