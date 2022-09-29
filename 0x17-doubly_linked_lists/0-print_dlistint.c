#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: linked list to be printed
 *
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
