#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a:value to be swap
 * @b:value to be swap
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
