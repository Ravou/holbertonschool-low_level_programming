#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct dog to print
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
