#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always (0) (Success)
*/

int main(void)
{
	int n;


	srand(time(0));
	n =  rand() - RAND_MAX / 2;

	int Last_digit;

	Last_digit = (n % 10);
	if (Last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, Last_digit);
	}
	else if (Last_digit < 6 && Last_digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6\n", n, Last_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is zero\n", n, Last_digit);
	}
	return (0);
}
