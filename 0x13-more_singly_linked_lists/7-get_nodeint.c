#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - gets the nth node of a listint_t list
 * @head: a pointer to the head node of the list
 * @index: index of the node, strating at 0
 * Return: the nth node of the list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
		count++;
	}
	return (head);
}
