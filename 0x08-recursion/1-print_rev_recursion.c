#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: string to be reversed
 */

void _print_rev_recursion(char *s)
{
	int i, l;
	char temp;

	if (i < l / 2)
	{
		temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
		i++;
	}
	_putchar(*s);
}
