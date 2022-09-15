#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -This is the entry point
 *
 * Description: This is program for combinations
 *
 * Return: Zero when success
 *
 */
int main(void)
{
	int c = 0;
	int f_d;
	int l_d;

	while (c <= 99)
	{
		f_d = (c / 10 + '0');
		l_d = (c % 10 + '0');

		if (f_d < l_d)
		{
			putchar(f_d);
			putchar(l_d);

			if (c != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
	putchar('\n');
	return (0);
}
