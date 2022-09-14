#include "main.h"
/**
 * print_times_table - This is a function that prints the n times table.
 *
 * @n: This is the int that to be used as argument
 *
 * Return: Zero
 *
 */
void print_times_table(int n)
{
	int i, j, z;

	if (n >= 0 && n < 15)
	{
		for (i = 0; i = < n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				z = i * j;

				if (j == 0)
					_putchar('0');
				else if (z < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(z % 10 + '0');
				}
				else if (z >= 10 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((z / 10) % 10 + '0');
					_putchar(z % 10 + '0');
				}
				else if (z > 99 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(z / 100 + '0');
					_putchar((z / 10) % 10 + '0');
					_putchar(z % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
