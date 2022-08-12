#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - creates a new node at the end of the a singly linked list
 * @head: a  pointer to the head node of the singly linked list
 * @str: the string to be added to the linked list
 *
 * Return: the address of the new element or null if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	char *dub;
	int lent;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dub = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (lent = 0; str[lent];)
		lent++;

	new->str = dub;
	new->len = lent;
	new->next = *head;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}

	return (*head);
}
