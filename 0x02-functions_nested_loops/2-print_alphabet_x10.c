#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always zero
 *
 */
void print_alphabet_x10(void)	
{
	char i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
