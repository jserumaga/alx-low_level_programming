#include "main.h"
#include <stdio.h>

/**
 * main - this is a function program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 on succes
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
