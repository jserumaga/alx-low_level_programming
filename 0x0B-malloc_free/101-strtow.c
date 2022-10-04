#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * word_len - locates the index making the end of the first
 * word within a string
 * @str: The string to be search
 * Return: The index making the end of the intial word
 *
 */

int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}

/**
 * count_word - Counts the number of words contained within a string
 * @str: The string to be searched
 *
 * Return: The number of words contained within str
 */

int count_word(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index != ' '))
		{
			words++;
			index += word_len(str + index);
		}
	}
	
	return (words);
}

/**
 * strtow - splits a string into words
 * @str: The string to be split.
 *
 * Return: if str = NULL, str = "", or the function fails - NULL.
 * Otherwise - a pointer to an array of string (words).
 */

char **strtow(char *str)
{
char **strings;
int index = 0, words, w, letters, l;

if (str == NULL || str[0] == '\0')
	return (NULL);

words = count_word(str);
if (words == 0)
	return (NULL);

strings = malloc(sizeof(char *) * (words + 1));
if (strings == NULL)
	return (NULL);

for (w = 0; w < words; w++)
{
	while (str[index] == ' ')
		index++;

	letters = word_len(str + index);

	strings[w] = malloc(sizeof(char) * (letters + 1));

	if (strings[w] == NULL)
	{
		for (; w >= 0; w--)
			free(strings[w]);

		free(strings);
		return (NULL);
	}

	for (l = 0; l < letters; l++)
		strings[w][l] = str[index++];

	strings[w][l] = '\0';

}
strings[w] = NULL;

return (strings);
}
