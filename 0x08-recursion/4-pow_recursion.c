#include "main.h"

/**
 * _pow_recursion - finds the value of x raised to the power of y
 * @x: base number
 * @y: power
 *
 * Return: value of x*y
 */

int _pow_recursion(int x, int y)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
