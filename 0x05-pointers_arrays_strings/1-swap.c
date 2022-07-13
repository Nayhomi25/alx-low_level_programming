#include "main.h"

/**
 * swap_int- swaps the value of two integers in a pointer
 * @a: integer one
 * @b: integer two
 *
 * Result: void
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
