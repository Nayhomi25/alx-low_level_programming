#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints the contents of a linked list
 * @h: linked list to be printed
 *
 * Return: number of nodes or elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		i++;
	}

	return (i);
}
