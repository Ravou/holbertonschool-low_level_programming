#include "lists.h"
/**
 * sum_dlistint - function sum of all the data (n) of the list
 *@head: pointer of the header of the list
 *Return: (0) if the list is empty or (sum)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
