#incldue "function_pointers.h"

/**
 * print_name -  Prints a name
 * @name: One to be printed
 * @f: pointer to the printing function
 * Return: zero.
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
