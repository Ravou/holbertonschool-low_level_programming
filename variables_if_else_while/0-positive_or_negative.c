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
if (n > 0) {
    // Afficher que n est positif
} else if (n < 0) {
    // Afficher que n est négatif
} else {
    // Afficher que n est zéro
}
gcc positive_or_negative -o .c
