#include "3-calc.h"

/**
 * op_add - Addition function
 * @a: input one
 * @b: input two
 * Return: 0
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction function
 * @a: input one
 * @b: input two
 * Return: 0
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Mulitiplication function
 * @a: input one
 * @b: input twon
 * Return: 0
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division functions
 * @a: input one
 * @b: input two
 * Return: 0
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Function
 * @a: input one
 * @b: input two
 * Return: 0
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
