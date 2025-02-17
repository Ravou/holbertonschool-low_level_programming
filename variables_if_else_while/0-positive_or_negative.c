#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main: main entry
 * Return: (0) (Success)
 */
 
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	
	if (n > 0) 
	{
		printf("Afficher que n est positif\n");	
	}
	else if (n < 0) 
	{
		printf("Afficher que n est négatif\n");
	} 
	else 
	{
		printf("Afficher que n est zéro\n");
	}
	return (0);

}
