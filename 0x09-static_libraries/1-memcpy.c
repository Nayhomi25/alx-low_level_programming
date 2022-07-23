#include "main.h"

/**
 * _memcpy - copies the memory area from a src pointer to a dest pointer
 *
 * @src: the source pointer
 * @dest: the destination pointer
 * @n: the number of bytes to use
 *
 * Return: @dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n--)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
