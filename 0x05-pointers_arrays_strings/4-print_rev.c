#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: srring to be reversed
 * Return: void
 */

void print_rev(char *s)
{
	int lent = 0, index;

	while (s[index])
	{
		lent++;
	}

	for (index = lent - 1; inde >= 0; index--)
	{
		_putchar(s[index]);
	}

	_putchar('\n');

}
