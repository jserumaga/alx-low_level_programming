#include "main.h"

/**
 * string_toupper - function thet changes lowercase to uppercase of a string
 * @array: argument
 * Return: character
 */

char *string_toupper(char *array)
{
	int counter = 0;

	while (array[counter] != '\0')
	{
		if (array[counter] >= 97 && array[counter] <= 122)
			array[counter] -= 32;
		counter += 1;
	}
	return (array);
}
