#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - permet d'allouer la mémoire
 *@b : la taille en octet à allouer
 *
 *return : si malloc est (NULL) et en cas d'echec return (98) pour terminer le programme.
 */
void *malloc_checked(unsigned int b)
{
        void *ptr;

        ptr = malloc(b);
        if (ptr == NULL)
                exit(98);
        return (ptr);
}
