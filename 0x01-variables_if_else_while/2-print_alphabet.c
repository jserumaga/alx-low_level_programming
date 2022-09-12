#include <stdio.h>

/**
 * main - A program the prints alphabatics in lowe cases
 *
 * Description: This is a C program for alphabet
 *
 * Return: Always 0 for succes
 *
 */

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
