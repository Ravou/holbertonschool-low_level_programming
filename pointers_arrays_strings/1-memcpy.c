#include "main.h"
/**
 * *_memcpy - fonction qui permet de copié dans une zone de mémoire
 * @n : le byte a copié
 * @src : la zone de mémoire à copié
 * @dest : transmettre le byté copié dans cette zone de mémoire
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
