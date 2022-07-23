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
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
