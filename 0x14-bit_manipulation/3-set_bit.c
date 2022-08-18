#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at given index
 * @n: pointer to the bit
 * @index: point aat which the bit is to be set
 * Return: 1 if successful and -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);

	return (1);
}
