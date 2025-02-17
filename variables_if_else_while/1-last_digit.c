#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: Always (0) (Success)
 *
*/
int main(void)
{
	int n;
	int last_digit = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	
	if (last_digit > 5 )
	{
		printf("last digit of %d is %d and is greater than 5\n",n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("last digit of %d is %d and is zero\n", n, last_digit);
	}
	else if (last_digit < 6) 
	{
		printf("last digit of %d is %d ans is less than 6\n", n,last_digit);
	}
	return (0);
}
