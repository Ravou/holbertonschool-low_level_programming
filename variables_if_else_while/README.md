0-positive_or_negative.c
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        return (0);
}
if n > 0
{
        puts("is positive");
        return (n);
}
if n == 0
{
        puts("is zero");
        return (n);
}
if n < 0
{
        puts("is negative");
        return (n);
}
