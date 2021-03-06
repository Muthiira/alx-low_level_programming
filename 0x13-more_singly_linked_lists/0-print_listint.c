#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - prints all elements in listint_t list
 * @h: pointer to list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
