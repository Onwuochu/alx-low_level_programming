#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for functions main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* now my code goes like this */
	if (n > 0)
		printf("%d is positive\n" n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	printf("\n");
	return (0);
}
