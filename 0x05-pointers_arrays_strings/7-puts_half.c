#include "main.h"
#include <stdio.h>

/**
*puts_half - function that prints half of a string
*@str: string argument
*Return: Zero always
*/

void puts_half(char *str)
{
int j, i = 0;

while (*(str + i))
i++;
j = i / 2;
if (i % 2)
j += 1;
while (j < i)
{
putchar(*(str + j));
j++;
}
putchar('\n');
}
