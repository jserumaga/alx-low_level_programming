#include "main.h"

/**
 * main - This is the entry point
 *
 * Descritption:
 *
 * Return: Zero with succcess
 *
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c)
	}

	putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
