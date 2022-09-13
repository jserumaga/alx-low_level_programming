#include "main.h"
/**
 * _islower(int c) - Checks lower cases
 *
 *  * Return: Zero successfully
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
