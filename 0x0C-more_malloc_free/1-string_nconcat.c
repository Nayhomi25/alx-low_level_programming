#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters from s2 to be appended to s1
 *
 * Return: a pointer to the new memory or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;

	while (s1[i] != '\0')
	{
		i++
	}
	cat = malloc(sizeof(char) * (i + n + 1));

	if (cat == NULL)
	{
		return (NULL);
	}
	i = j = 0;

	while (s1[i] != '\0')
	{
		cat[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		cat[i] = s2[j];
		i++, j++;
	}
	cat[i] = '\0';
	return (cat);
}
