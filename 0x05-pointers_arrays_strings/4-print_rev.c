#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: srring to be reversed
 * Return: void
 */

void print_rev(char *s)
{
	int lent;

	for (lent = 0; s[lent] != '\0'; lent++)
	{
	}
	for (lent = lent - 1; lent >= 0; lent--)
	{
		_putchar(s[lent]);
	}
	_putchar('\n');
}

}
