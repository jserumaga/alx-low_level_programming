#include <stdio.h>
/**
 * main - This si the entry point
 *
 * Description: Program for combinations
 *
 * Return: Zero when successful
 *
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a <= 2; a++)
	{
		for (b = 1; b <= 2; b++)
		{
			for (c = 0; c <= 2; c++)
			{
				putchar("%d %d %d\n", a, b, c);

			}
		}
	}
}
