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
	char c;

	for (c = 'z'; c>= 'a'; c--)
	{
		putchar(c);
	}

	putcahr('\n');

	return (0);
}
