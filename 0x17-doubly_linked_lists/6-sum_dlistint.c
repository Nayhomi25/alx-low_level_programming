#include "lists.h"

/**
 * sum_dlistint - find the sum of all data in a linked list
 * @head: the linked list
 * Return: sum or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum;

	temp = head;
	sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
