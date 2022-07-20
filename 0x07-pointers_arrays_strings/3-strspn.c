#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 *
 * @s: first substring
 * @accept: second substring
 *
 * Return: number of bytes that compose the lenght
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int a = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++)
		{
			if (s[i] == accept[j])
			{
				a++;
			}

			if (accept[j] == '\0')
			{
				return (a);
			}
		}
	}
	return (a);
}
