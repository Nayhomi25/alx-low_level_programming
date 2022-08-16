#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - printtss the sum of all the data in a listint_t list
 * @head: pointer to the head of the list
 * Return: the sum of all the nodes in the list
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;

	int sum = 0;

	temp = head;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
