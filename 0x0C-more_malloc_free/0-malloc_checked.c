#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates a block of memory using malloc
 * @b: the size of memory to be allocated
 *
 * Return: a pointer or 98 in case of error
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
