#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to the address of the head node of the list
 * Return: the data of the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	temp = *head;
	val = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (val);
}
