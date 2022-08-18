#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if Big endian and 1 if little endian
 */

int get_endianness(void)
{
	unsigned int num = 1;

	char *c = (char *) &num;

	if (*c == 1)
		return (1);

	return (0);
}
