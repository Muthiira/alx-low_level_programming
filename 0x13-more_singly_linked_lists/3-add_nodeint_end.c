#include "lists.h"
/**
 * add_nodeint_end - adds new node at the end
 * @head: pointer to the first node in the list
 * @n: data to insert in new node
 * Return: adress of new node or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = *head;
	temp = (listint_t *)malloc(sizeof(listint_t));
	temp->n = n;
	temp->next = NULL;
	while (ptr != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (temp);
}
