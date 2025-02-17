#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
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
gcc positive_or_negative.c -o positive_or_negative
