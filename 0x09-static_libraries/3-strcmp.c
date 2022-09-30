#include "main.h"

/**
 * _strcmp -  function that compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: 0 if s1 and s2 are equals
 */

int _strcmp(char *s1, char *s2)
{
	int c = 0, i = 0;

	while (s1[i] != '\0')
	{
		c = s1[i] - s2[i];
		i += 1;
		if (c != 0)
			break;
	}
	return (c);
}
