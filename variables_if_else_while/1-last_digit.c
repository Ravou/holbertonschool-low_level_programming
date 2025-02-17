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
	int Last_digit = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	
	if (Last_digit > 5 )
	{
		printf("Last digit of %d is %d and is greater than 5\n",n, Last_digist);
	}
	else if (Last_digit == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, Last_digist);
	}
	else if (Last_digit < 6) 
	{
		printf("Last digit of %d is %d ans is less than 6\n", n,Last_digist);
	}
	return (0);
}
