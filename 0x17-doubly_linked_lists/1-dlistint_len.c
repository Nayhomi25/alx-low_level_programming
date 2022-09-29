#include "lists.h"

/**
 * dlistint_len - prints the number of elements in a linked list
 * @h: the linked list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	const dlistint_t *temp;

	temp = h;


	while (temp != 0)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
