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
	int c = 0;
	int f_d;
	int m_d;
	int l_d;

	while (c <= 999)
	{
		f_d = (c / 100 + '0');
		m_d = (c / 10 % 10 + '0');
		l_d = (c % 10 + "0");

		if ((f_d < m_d) && (m_d < l_d))
		{
			_putchar(f_d);
			_putchar(m_d);
			_putchar(l_d);

			if (c != 789)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		c++;
	}
	_putchar('\n');
	return (0);
}
