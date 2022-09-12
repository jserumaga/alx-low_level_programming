#include <stdio.h>
#include <stdlib.h>

/**
 * main - This is the entry point
 *
 * Descritption: A program that prints lower case except q and e
 *
 * Return: Always print 0 for success
 *
 */
int main(void)
{
	int lower, e, q;

	e = 'e';
	q = 'q';

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != e && lower != q)
			putchar(lower);
	}

	putchar('\n');
	return (0);
}
