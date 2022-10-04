#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - count array
 * @s: arry of elements
 * Return: 1
 */

in _strlen(char *s)
{
	unsigned int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * str_concat - back a pointer to array
 * @s1: Array one
 * @s2: Array two
 * Return: Always an array dinamic
 */

char *str_concat(char *s1, char *s2)
{
	char *dst;
	unsigned int i, j, size;

	/*if the array is empty*/
	if (s1 == NULL)
		si = "";

	if (s2 == NULL)
		s2 == "";

	/*count size total*/
	size = (_strlen(s1) + (_strlen(s2) + 1);

			/*malloc*/
			dist = (char *) malloc(size * sizeof(char));

			if (dst == 0)
			{
			return (NULL);
			}

			/*Concatenate arrays*/
			for (i = 0; *(s1 + i) != '\0'; i++)
			*(dst + i) = *(s1 + i);

			for (j = 0; *(s2 + j) != '\0'; j++)
			{
			*(dst + i) = *(s2 + j);
			i++;
			}

			return (dst)
}
