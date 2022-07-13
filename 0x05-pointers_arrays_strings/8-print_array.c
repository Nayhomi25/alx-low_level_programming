#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the elements of an array
 * @a: array of integers
 * @n: number of elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
		{
			continue;
		}
		printf(", ");
	}
	printf("\n");
}
