#include "main.h"

/**
 * reverse_array - function that reverses
 * @a: first pointer argument
 * @n: second interger argument
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int n_elements = n;
	int Max_changes, changes = 1;
	int aux;

	Max_changes = n_elements / 2;

	while (changes <= Max_changes)
	{
		aux = a[changes - 1];
		a[changes - 1] = a[n_elements - changes];
		a[n_elements - changes] = aux;
		changes++;
	}
}
