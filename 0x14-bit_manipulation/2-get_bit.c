#include "main.h"

/**
 * get_bit - finds the value of a bit at a given index
 * @n: the bits
 * @index: the value at which to find the bit. starts at 0
 * Return: the value of the bit at index or -1 in case of error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, checker;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	checker = n & div;

	if (checker == div)
		return (1);

	return (0);
}
