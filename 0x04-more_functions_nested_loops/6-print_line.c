#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a straight line
 * @n: argument
 * Return: zero
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	putchar('\n');
}
