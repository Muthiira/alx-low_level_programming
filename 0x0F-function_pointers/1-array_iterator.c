#include "function_pointers.h"
#include "stdlib.h"
#include "stddef.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: array of integers
 * @size: size of the array
 * @action: a pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
