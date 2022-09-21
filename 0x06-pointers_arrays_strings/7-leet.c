#include "main.h"

/**
 * leet - function that encodes as string
 * @array: Pointer argument
 * Return: Encoded string
 */

char *leet(char *array)
{
	int i, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; array[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (array[i] == a[j])
			{
				array[i] = b[j];
			}
		}
	}
	return (array);
}
