#include <unistd.h>
/**
 * main - entry point
 * @c: Le caractère à écrire.
 * Return: Le nombre d'octets écrits en cas de succès, -1 en cas d'erreur.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
