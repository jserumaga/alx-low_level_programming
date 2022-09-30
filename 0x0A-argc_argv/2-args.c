#include "main.h"
#include <stdio.h>

/**
 * main - Print name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Retunr: Always 0 on succes
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv index %d is = %s\n", i, argv[i]);
	}
}
