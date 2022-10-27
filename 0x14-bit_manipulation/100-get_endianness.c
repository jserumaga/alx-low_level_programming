#include "main.h"

/**
 * get_endianness - Checks the endianness
 *
 * Return: if big-endian - 0, if little-endian - 1.
 */
int get_endianness(void)
{
	int num = 1;

	return (*((char *) &num) + '0');
}
