#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: string to copy
 *
 * Return: pointer to array or NULL
 */

char *_strdup(char *str)
{
	char *dup;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i++;

	dup = malloc(sizeof(*str) * i);
	if (dup == NULL)
	{
		return (NULL);
	}

	j = 0;
	while (str[j] != '\0')
	{
		dup[j] = str[j];
		j++;
	}
	return (dup);
}
