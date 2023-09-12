#include "search_algos.h"

/**
 * binary_search - performs binary search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t idx = 0;
	int *a = array;

	if (array == NULL)
		return (-1);
	while (size)
	{
		for (idx = 0, printf("Searching in array: "); idx < size; idx++)
			printf("%d%s", a[idx], idx + 1 == size ? "\n" : ", ");

		idx = (size - 1) / 2;
		if (a[idx] == value)
			return ((a - array) + idx);
		else if (a[idx] > value)
			size = idx;
		else
		{
			a += (idx + 1);
			size -= (idx + 1);
		}
	}
	return (-1);
}
