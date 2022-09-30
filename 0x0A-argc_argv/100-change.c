#include "maim.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: Array of arguments
 *
 * Return: Zero
 */

int main(int argc, char *argv[])
{
	int a, n = 0, i, t;
	int c[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		_putchar("Error");
		return (1);
	}
	a = atoi(argv[1]);
	if (a <= 0)
	{
		_putchar("0");
		return (1);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			t = a / c[i];
			a -= t * c[i];
			n += t;
			if (a == 0)
				break;
		}
	}
	printf("%d\n", n);
	return (0);
}

