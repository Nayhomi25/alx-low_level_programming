#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - finds the lenght or number of nodes in a singly linked list
 * @h: The head node of the singly linked list
 * Return: lenght of the linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	const list_t *temp;

	temp = h;


	while (temp != 0)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
