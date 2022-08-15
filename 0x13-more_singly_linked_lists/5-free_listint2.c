#include "lists.h"

/**
 * free_listint2 - frees a list and sets the head to null
 * @head: a pointer to the address of the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *end;

	end = *head;

	while (end)
	{
		temp = end->next;
		free(end);
		end = temp;
	}

	*head = NULL;
}
