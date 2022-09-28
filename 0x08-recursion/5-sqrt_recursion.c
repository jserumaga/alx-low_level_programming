#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of anumber
 * @n: number to be used
 *
 * Return: the square root n
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt_recursion(0, n));
}
