#include <stdio.h>
#include <stdlib.h>

/**
 * main - This is the entry point
 *
 * Decription: The program that prints numerals
 *
 * Return: Always print zero on success
 *
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}

