#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @str: input string
 * Return: Ecoded string
 */

char *rot13(char *str)
{
	int indx1 = 0, indx2;
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	CHAR ROT13[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (str[indx1])
	{
		for (indx2 = 0; indx2 < 52; indx2++)
		{
			if (str[indx1] == alphabet[indx2])
			{
				str[indx1] = rot13key[indx2];
				break;
			}
		}
		indx++;
	}
	return (str);
}
