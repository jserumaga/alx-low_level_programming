#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strcat - function that concatinate two strings
 * *@dest: character pointer
 * @src: second character pointer argument
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int n_elem_src = 0, n_elem_dest = 0;
	int j;
	char *dest;
	char *src;

	while (src[n_elem_src] != '\0')
	{
		n_elem_src += 1;
	}
	while (dest[n_elem_dest] != '\0')
	{
		n_elem_dest += 1;
	}

	for (j = 0; j <= n_elem_src; j++)
	{
		dest[n_elem_dest + j] = src[j];
	}

	return (dest);
}

