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
		printf("n is positive\n");	
	}
	else if (n < 0) 
	{
		printf("n is equal 0\n");
	} 
	else 
	{
		printf("n is negative\n");
	}
	return (0);

}
gcc positive_or_negative.c -o positive_or_negative
