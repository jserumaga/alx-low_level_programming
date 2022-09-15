#include <stdio.h>
#include <stdlib.h>

/**
 * main - This is the program entry point
 *
 * Description: This program print hexadecimal in lower case
 *
 * Return: Always Zero with success
 *
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
