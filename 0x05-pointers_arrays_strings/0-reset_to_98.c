#include "main.h"

/**
 * reset_to_98 - resets the value of a pointer
 *
 * @n: the new value of n
 *
 * Result : void
 */

void reset_to_98(int *n)
{
	int a;
	int *n;

	a = 402;
	n = &a;

	_putchar((n % 10) + '0', n);
	_putchar('\n');
	return (0);
}
