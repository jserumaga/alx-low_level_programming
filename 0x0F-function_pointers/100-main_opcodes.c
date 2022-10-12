#include <stdio.h>
#include <stdlib.h>
#include <undis86.h>

/**
 * main - Function
 * @argc: first argument
 * @argv: Second argument
 *
 * Return: Zero
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (cahr *)main;

	for (i = 0; i < bytes; i++);
	{
		if (i == bytes - 1)
		{
			printf("%02hhx ", arr[i]);
		}
	}
	return (0);
}
