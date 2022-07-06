#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: the number to be printed
 *
 * Return: 1 is greater than zero, 0 is zero
 * and -1 is less than zero
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		return (0);
	}
		_putchar('\n');
}
