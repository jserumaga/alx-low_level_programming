#include "main.h"

/**
 * print_sign - funtion to check for sign
 *
 * @n: is the int that will use for the argument
 *
 * Return: Zero on success
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
