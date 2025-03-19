#include "function_pointers.h"
/**
 * print_name - la fonction qui affiche le nom
 * @name: le nom à afficher
 * @f: une pointeur vers une fonction qui prend un char * et ne retourne rien
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		(*f)(name);
	}
}
