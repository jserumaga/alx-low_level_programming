#include <stdio.h>
#include <stdlib.h>

/**
 * main - This is the entry point
 *
 * Description: A program that prints out numbers
 *
 * Return: Always zero
 *
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num);
	}

	putchar('\n');
	return (0);
}
