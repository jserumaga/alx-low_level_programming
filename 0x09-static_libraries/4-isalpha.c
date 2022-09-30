#include "main.h"

/**
 * _isalpha - is the function for that checks for alphabetic character.
 *
 * @c: is the int to be used n the argument
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
