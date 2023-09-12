#include "search_algos.h"

/**
 * jump_search - performs jump search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t idx = 0, j = sqrt(size);

	if (array == NULL)
		return (-1);

	while (idx < size && array[idx] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		idx += j;
	}

	j = idx - j;
	printf("Value found between indexes [%lu] and [%lu]\n", j, idx);
	idx = idx >= size ? size - 1 : idx;
	while (j <= idx)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
		j++;
	}
	return (-1);
}
