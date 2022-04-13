#include "function_pointers.h"
/**
 * int_index - Function that searches for an integer
 * @array: pointer to array of integers
 * @size: no of elements in the array
 * @cmp: pointer to the function used to compare values
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array == 0)
		return (-1);

	if (cmp == 0)
		return (-1);

	for (i = 0; i <= size; i++)
	{
		if (cmp(array[i]) != 0)

			return (i);
	}
	return (-1);
}
