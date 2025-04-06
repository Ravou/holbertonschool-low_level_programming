#include "lists.h"
/**
 * sum_dlistint - function sum of all the data (n) of the list
 * @head: pointer of the header of the list
 * return: (0) if the list is empty
 */
int sum_dlistint(dlistint_t *head);
{
	int sum = 0;
	dlistint *temp;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
		return (sum);
}
