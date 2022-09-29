#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: list to be freed
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
