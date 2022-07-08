#include "main.h"

/**
 * print_square - prints a square using the # sign
 * @size: the size of the square to be printed
 * Return: void
 */

void print_square(int size)
{
	int h, b;

	if (size <= 0)
	{


		for (h = 0; h <= size; h++)
		{
			for (b = 0; b <= size; b++)
			{
				_putchar('#');
			}

			if (h == size - 1)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
