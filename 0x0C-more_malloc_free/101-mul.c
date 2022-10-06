#include "main.h"

/**
 * main - multiplies two positive number
 * @argc: n arguments
 * @argv: arguments
 * Return: integer
 */

int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;

	if (argc != 1)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; argv[i][j] != '\0'; j++)
	{
		if (argv[i][j] > 57 || argv[i][j] < 40)
		{
			print("Error\n");
			exit(98);
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
