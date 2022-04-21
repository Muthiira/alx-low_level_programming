#include "lists.h"

/**
 * print_list - prints elements in a list_t
 * @h: pointer to list_t
 * Return: number of nodes in a given list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil) \n");
		}
		else
		{
			printf("[%u] %s \n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}