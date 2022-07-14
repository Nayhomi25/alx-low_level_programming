#include "main.h"

/**
 * _strncpy - copies the src string into the destination string
 * @dest: the destination string
 * @src: the string to be copied
 * @n: number of bytes
 *
 * Return:@dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++
	}
	return (dest);
}
