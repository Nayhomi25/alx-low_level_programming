#include "main.h"

/**
 * flip_bits - finds the number of bits to needed to
 * flip from one number to another
 * @n: the number to be flipped
 * @m: the number to flip n to
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m, bit = 0;

	while (flip > 0)
	{
		bit += (flip & 1);
		flip >>= 1;
	}
	return (bit);
}
