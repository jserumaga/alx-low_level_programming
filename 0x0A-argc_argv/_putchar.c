#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: The character to print
 *
 * Return: Zero on success
 * On error, -1 is returned, and erno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
