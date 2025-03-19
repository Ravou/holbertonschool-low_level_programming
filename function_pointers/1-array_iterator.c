#include "function_pointers.h"
/**
 * array_iterator - exécute une fonction donnée en paramètre
 * @array: est le tabaleau a exécuté
 * @action: est le pointeur de la fonction
 * @size: la taille du tableau
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
