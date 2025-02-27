#include "main.h"
/**
 * -strlen.c - qui permet de calculer la longueur d'une chaine de caractère.
 * @s: permet d'afficher le retour de la longueur de chaine
 * Return: la longueur de chaine
 *
 */
int _strlen(char *s)
{
	int length = 0; 

	while (s[length] != '\0')
	{
		length++;
	}
	return length;
}
