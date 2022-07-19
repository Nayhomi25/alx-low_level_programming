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
	int i = 0;

	while (n--)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
