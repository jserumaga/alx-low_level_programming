#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print a diagonal
 * @n: argument
 * Return: returns nothing
 */

void print_diagonal(int n)
{
	in len, space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
			{
				_putcar(' ');
			}

			_putchar('\\');

			if (len == (n - 1))
			{
				continue;
			}
			_putchar('\n');
		}
	}
}
