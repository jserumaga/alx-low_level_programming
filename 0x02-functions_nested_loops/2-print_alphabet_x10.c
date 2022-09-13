#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always zero
 *
 */

void print_alphabet_x10(void)	
{
	int i, j;

	j = 0;

	while (j < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
	_putchar('\n');
	}
}
int main(void)
{
	print_alphabet_x10();
	return (0);
}
