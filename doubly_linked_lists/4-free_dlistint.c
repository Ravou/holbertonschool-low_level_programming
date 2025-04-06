#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - function that free every node in the list
 * @head: pointer of the list structur
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
