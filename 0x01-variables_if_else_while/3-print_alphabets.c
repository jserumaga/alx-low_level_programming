#include <stdio.h>

/**
 * main - this is the standard entry
 *
 * Description: Program that prints alphabet
 *
 * Return: Always zero when success
 *
 */
int main(void)
{
	int L;

	for (L = 'a'; L <= 'z'; L++)
	{
		putchar(L);

	}

	putchar('\n');

	for (L = 'A'; L <= 'Z'; L++)
	{
		putchar(L);
	}

	putchar('\n');

	return (0);

}
