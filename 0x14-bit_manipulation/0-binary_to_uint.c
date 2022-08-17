#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to a string of chars
 * Return: the unsigned int number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int n = 0;

	if (b == NULL)
		return (0);

	while (b[n] == '0' || b[n] == '1')
	{
		num <<= 1;
		num += b[n] - '0';
		n++;
	}
	return (num);
}
