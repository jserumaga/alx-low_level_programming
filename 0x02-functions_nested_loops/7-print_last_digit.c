#include "main.h"

/**
 * main - Entry point
 *
 * Description
 *
 * Return: Zero always
 *
 */
int print_last_digit(int)
{
	int last_digit = l % 10;

	if (l > 0)
		last_digit = last_digit * -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
