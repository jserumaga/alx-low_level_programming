#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This is the entry point
 *
 * Description: A program that prints all possible combinations numbers
 *
 * Return: Zero when successful
 *
 */
int main(void)
{
	int a, b, c;


	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				putchar("%d, %d, %d\n", a, b, c);
			}
		}
	}

	return (0)
}

