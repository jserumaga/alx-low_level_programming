#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry poin to the program
 *
 * Description: A program that prints lower case in reverse
 *
 * Return: Zero when success
 *
 */

int main(void)
{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower--)
	{
		putchar(lower);
	}

	putcahr('\n');

	return (0);
}
