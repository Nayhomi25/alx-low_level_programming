#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int lent = 0, index = 0;
	char temp;

	while (s[index++])
	{
		lent++;
	}

	for (index = lent - 1; index >= lent / 2; index--)
	{
		temp = (s[index]);
		s[index] = s[lent - index - 1];
		s[lent - index - 1] = temp;
	}


}
