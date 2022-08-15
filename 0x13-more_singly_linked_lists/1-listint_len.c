#include "lists.h"

/**
 * listint_len - prints the number of elements or nodes in a linked list
 * @h: the list to be printed
 * Return: number of elements or nodes in a list
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	const listint_t *temp;

	temp = h;

	while (temp != 0)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
