#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all th elements of a listint_t list
 * @h: the list to  be printed
 * Return: the elements of the list
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		i++;
		h = h->next;
	}

	return (i);
}
