#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of anumber
 * @n: number to be used
 *
 * Return: the square root n
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (_sqrt_recursion(1, n));
}

/**
 * _find_sqrt - finds square root recursively, needs pre param
 *
 * @prev: previous result of function
 * @find: constant int to find sq root for
 *
 * Return: square root of find, or -1 if not foundn
 */

int _find_sqrt(int prev, int find)
{
	if (prev > find)
		return (-1);
	if (prev * prev == find)
		return (prev);
	return (_sqrt_recursion(prev + 1, find));
}
