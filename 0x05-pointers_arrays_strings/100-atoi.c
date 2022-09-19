#include <stdio.h>
#include "main.h"

/**
*_atoi - converts a string to integer
*@s: argument character
*Return: integer
*/

int _atoi(char *s)
{
int res = 0;

for (int i = 0; str[i] != '\0'; ++i)
res = res * 10 + str[i] - '0';

return (res);
}
