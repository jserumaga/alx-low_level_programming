#include <unistd.h>

/**
 * _putchar - Writes the character c tp stdout
 * @c: The character tp print
 *
 * Recturn: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
