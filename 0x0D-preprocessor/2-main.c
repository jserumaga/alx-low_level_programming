#include <stdio.h>

/**
 * main - prints the name of the file program was compiled from
 * Return: Zero
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
