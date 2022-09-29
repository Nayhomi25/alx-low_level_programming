#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of a doubly linked list
 * @head: head node of list
 * @n: data to be added to node
 * Return: address of new node or null if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	last = (*head);

	if (new == NULL)
		return (NULL)

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (NULL);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;

	return (new);

}
