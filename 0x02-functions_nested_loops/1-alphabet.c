#include "main.h"

/**
 * print_alphabet - This is the function that prints the alphabet
 *
 * Descritption:
 *
 * Return: Zero with succcess
 *
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
