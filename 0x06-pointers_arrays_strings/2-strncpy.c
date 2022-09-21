#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function that copy a string
 * @dest: first argument
 * @src: second argument
 * @n: third interger
 * Return: a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int n_elem_src = 0, n_elem_dest = 0;
	int j, limit;

	while (src[n_elem_src] != '\0')
	{
		n_elem_src += 1;
	}

	while (dest[n_elem_dest] != '\0')
	{
		n_elem_dest += 1;
	}

	if (n < n_elem_src)
		limt = n;
	else
		limit = n_elem_src;

	for (j = 0; j < limit; j++)
	{
		dest[j] = src[j];
	}
	while (n_elem_src < n)
	{
		dest[n_elem_src] = '\0';
		n_elem_src++
	}
	return (dest);
}
