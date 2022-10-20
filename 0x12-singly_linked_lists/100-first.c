#include "lists.h"

void __attribute__((constructor)) hare(void);

/**
 * print_statement - Prints a string before main.
 *
 */

void print_statement(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
