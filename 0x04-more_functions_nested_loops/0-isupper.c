#include "main.h"

/**
*_isupper - function that checks for uppercase character.
*@c: is the character to be checked
*Return: 1 whether it is, 0 otherwise
*/

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}

return (0);
}
