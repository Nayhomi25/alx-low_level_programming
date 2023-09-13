#include "search_algos.h"

/**
 * exponential_search - performs exponential search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t idx = 1, new = 0;
	int res;

	if (!array || !size)
		return (-1);

	while (idx < size && array[idx] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		idx <<= 1;
	}
	new = (idx >= size ? size : idx + 1) - (idx >> 1);
	idx >>= 1;
	printf("Value found between indexes [%lu] and [%lu]\n",
			idx, idx << 1 >= size ? size - 1 : idx << 1);
	res = binary_search(array + idx, new, value);
	return (res == -1 ? res : res + (int)idx);
}

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
