#include "main.h"
#include <stdio.h>

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments array
 *
 * Return: Zero always on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
