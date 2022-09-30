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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv index %d is = %s\n", i, argv[i]);
	}
}
