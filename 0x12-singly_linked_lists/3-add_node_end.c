#include "lists.h"
/**
 * add_node_end - adds new node at the end of the list
 * @head: pointer to adress of new node
 * @str:  value of str field ot the new node
 * Return: head of new list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *trav, *new;

	if (head == NULL)
		return (NULL);

	trav = *head;

	/*creating new node*/
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = (str == NULL) ? "(nil)" : strdup(str);
	/*new->len = (str == NULL) ? 0 : _strlen(str);*/
	new->next = NULL;

	/* transverse to the end of the list */
	if (trav == NULL)
	{
		*head = new;
		return (*head);
	}

	while (trav->next != NULL)
		trav = trav->next;
	trav->next = new;

	return (*head);
}
