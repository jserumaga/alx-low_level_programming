#include "main.h"

/**
*rev_string - function reverses the string
*@s: string to be reversed
*Return: Reversed string
*/

void rev_string(char *s)
{
int i = 0, j = 0;
char str[500];

while (*(s + i))
{
*(str + i) = *(s + i);
i++;
}
i = i - 1;
while (i >= 0)
{
*(s + i) = *(str + j);
j++;
i--;
}
}
