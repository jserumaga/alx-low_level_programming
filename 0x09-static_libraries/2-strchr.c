#include "main.h"

/**
 * _strchr - function that locates a character in the string
 * @s: character pointer argument
 * @c: Character to be located
 *
 * Return: pointer to spot s with c or null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
