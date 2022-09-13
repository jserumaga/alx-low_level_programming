#include "main.h"
#include <stdio.h>
/**
 * _abs - if the function to print absolute
 * * @n: is the int to be used in the argument
 * * Return: Zero when success
 * */
int _abs(int n)
{
	if (n > 0 || n == 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
