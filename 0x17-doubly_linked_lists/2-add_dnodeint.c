#include "lists.h"

/**
 * add_dnodeint - add a node at the beginning of a doubly linked list
 * @head: the pointer t the first node
 * @n: data for new node
 *
 * Return: address of new element or null if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;

	new_node->next = (*head);
	new_node->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new_node;
	(*head) = new_node;

	return (new_node);
}
