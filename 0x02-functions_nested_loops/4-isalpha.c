#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always zero
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c  >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
