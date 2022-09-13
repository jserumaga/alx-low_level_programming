#include <stdio.h>

/**
 * main - This is the entry point
 *
 * Descritption:
 *
 * Return: Zero with succcess
 *
 */
void print_alphabet(void);
{
	char *c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c)
	}

	putchar('\n');
}

int main(void)
{
	putchar("Alphabet\n");
	print_alphabet();
	return (0);
}
