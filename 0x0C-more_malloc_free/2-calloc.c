#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory to an array using malloc
 * @nmemb: The elements of the array
 * @size: the size of the array
 *
 * Return: A pointer to the memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(ptr + i) = 0;
	return ((void *)ptr);
}
