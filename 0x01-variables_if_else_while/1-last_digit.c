#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program shows greater than 5, is less than 6, or is 0
 *
 * Description: program will assign a random number
 *
 * Return: Always (0) when success
 *
 */

int main(void)
{
	int n;
	int l;

	srand((time(0));
	n = rand - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is %d and greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}

	printf("\n");
	return (0);

}



