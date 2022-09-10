#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 for success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if(n > 0)
		printf("%d n is positive\n", n);
	
	else if (n == 0)
		printf("%d n is zero\n", n);

	else(n < 0)
		printf("%d n is negative\n", n);

	return (0);
}