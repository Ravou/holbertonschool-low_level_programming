#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_dnodeint - function for add a new node at the beginning
 * @head: is a pointeur to the list structur
 * @n: interger of the list
 * Return: the adresse of the new element or (NULL) if it failled
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
