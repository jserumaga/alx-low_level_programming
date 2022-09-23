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
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++
	}
	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}

	return (dest);
}

