#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strncat - a function that concatenates two strings
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 * @n: is the third argument
 * Return: A pointer to the destination string @dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int n_elem_src = 0, n_elem_dest = 0;
	int j;

	while (src[n_elem_src] != '\0')
	{
		n_elem_src += 1;
	}
	while (dest[n_elem_dest] != '\0')
	{
		n_elem_dest += 1;
	}

	if (n < n_elem_src)
		n_elem_src = n;

	for (j = 0; j < n_elem_src; j++)
	{
		dest[n_elem_dest + j] = src[j];
	}
	return (dest);
}
