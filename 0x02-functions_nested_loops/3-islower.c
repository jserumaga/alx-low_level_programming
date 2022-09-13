#include "main.h"

/**
 * main - Entry point
 *
 * Return: Zero successfully
 *
 */

int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
