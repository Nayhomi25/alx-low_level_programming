#include "main.h"

/**
 * _strncat - concatenates 2 strings without
 * @dest: destination string
 * @src: source string
 * @n: number of characters to print
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
