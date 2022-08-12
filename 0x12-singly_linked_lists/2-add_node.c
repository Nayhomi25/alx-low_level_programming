#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - creates a new node at the beginning of the a singly linked list
 * @head: a  pointer to the head node of the singly linked list
 * @str: the string to be added to the linked list
 *
 * Return: the address of the new element or null if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dub;
	int lent;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dub = strdup(str);
	if (dub == NULL)
	{
		free(new);
		return (NULL);
	}

	for (lent = 0; str[lent];)
		lent++;

	new->str = dub;
	new->len = lent;
	new->next = *head;

	*head = new;

	return (new);
}
