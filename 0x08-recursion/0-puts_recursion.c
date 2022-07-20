#include "main.h"

/**
 * _puts_recursion - prints a string to the
 * @s: the string to be printed
 *
 * Return: the string *s
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putcjhar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n);
}
