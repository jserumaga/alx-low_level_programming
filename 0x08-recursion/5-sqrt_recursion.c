#include "main.h"

/**
 * _sqrt_check - returns the natural square root of anumber
 * @g: guess at sqrt
 * @c: number to find sqrt of
 *
 * Return: -1 or sqrt of c
 */

int _sqrt_check(int g, int c)
{
	if (g * g == c)
		return (g);
	if (g * g > c)
		return (-1);
	return (_sqrt_check(g + 1, c));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 *
 * Return: natural square root or -1 if not foundn
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt_check(1, n));
}
