#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: integer number of _ to be printed
 * Return: void
 *
 */
void print_line(int n)
{
	char a;

	for (a = o; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
