#include "main.h"

/**
 * _memset - sets the memory area of a pointer to a constant byte
 *
 * @s: the  pointer used
 *
 * @b: the constant byte
 *
 * @n: the number of space to be filled
 *
 * Return: the Pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = s;

	while (n--)
	{
		*p++ = (unsigned char) b;
	}

	return (s);
}
