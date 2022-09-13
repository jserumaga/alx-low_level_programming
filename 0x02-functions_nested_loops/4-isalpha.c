#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always zero
 *
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
