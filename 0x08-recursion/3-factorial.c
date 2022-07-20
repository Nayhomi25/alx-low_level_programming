#include "main.h"

/**
 * factorial - finds the factorial of a given numbaer
 * @n: the int
 *
 * Return: -1 if n is less than 0
 * 1 if n is 0 or 1
 * factorial of n
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
