#include "main.h"
/**
 * malloc_checked - function allocates memory
 * Return: pointer to the allocated memory
 * @b: number of bytes to allocate
 */

void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);
	return (n);
}
