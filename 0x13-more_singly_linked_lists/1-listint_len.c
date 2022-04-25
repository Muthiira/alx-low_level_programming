#include "lists.h"
/**
 * listint_len - displays number of elements in a listint_t list
 * @h: pointer to list
 * Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		count = count + 1;
		temp = temp->next;
	}
	return (count);
}
