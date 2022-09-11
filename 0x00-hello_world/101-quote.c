#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is the entry point
 *
 * Description:
 *
 * Return: Zero when successful
 *
 */
int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(2, str1, 59);

	return (1);

}
