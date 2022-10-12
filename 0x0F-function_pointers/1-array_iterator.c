#include "function_pointers.h"

/**
 * array_iterator - function that prints array.
 * @array: Aarry to be printed
 * @size: is the size of array
 * @action: is the pointer
 * Return: Pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
