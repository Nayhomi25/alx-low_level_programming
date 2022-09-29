#include "lists.h"

/**
 * get_dnodeint_at_index - find the nth node of a doubly linked list
 * @head: the list to be searched
 * @index: index of the node
 * Return: the node orvnull if it doen't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
