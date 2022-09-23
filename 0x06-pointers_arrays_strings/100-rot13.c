#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @str: input string
 * Return: Ecoded string
 */

char *rot13(char *str)
{
	int indx1 = 0, indx2;
	char alphabet[52] = {'a','b','c','d','e','f',
		'g','h','i','j','k','l','m','n','o','p',
		'q','r','s','t','u','v','w','x','y','z','A',
		'B','C','D','E','F','G','H','I','J','K','L',
		'M','N','O','P','Q','R','S','T','U','V','W',
		'X','Y','Z'}
	char rot13key[52] = {'a','b','c','d','e','f',                                                                       
		'g','h','i','j','k','l','m','n','o','p',                                                      
		'q','r','s','t','u','v','w','x','y','z','A',                                       
		'B','C','D','E','F','G','H','I','J','K','L',
		'M','N','O','P','Q','R','S','T','U','V','W',
		'X','Y','Z'};

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
