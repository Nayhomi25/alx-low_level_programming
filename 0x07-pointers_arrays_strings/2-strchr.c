#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: the string to be used
 * @c: the charracter to be located
 *
 * Return: p
 */

char *_strchr(char *s, char c)
{
	char *p = NULL;

	if (s != NULL)
	{
		do {
			if (*s == (char)c)
			{
				p = s;
				break;
			}
		} while (s++);
	}
	return (p);
}
