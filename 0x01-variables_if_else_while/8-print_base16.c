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
	int hex;

	for (hex = 0; hex <= 9; hex++)
	{
		putchar(hex);
	}
	for (hex = 'a', hex <= 'f'; hex++)
	{
		putchar(hex);
	}

	putchar('\n');

	return (0);
}
