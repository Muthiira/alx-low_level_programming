#include "lists.h"
#include <stdlib.h>

/**
 * list_len - finds number of elements in a linked list_t
 * @h: pointer to list
 * Return: number of elements in a list_t
 *
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
