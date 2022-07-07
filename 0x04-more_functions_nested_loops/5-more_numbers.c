#include "main.h"

/**
 * more_numbers - prints 10times the numbers from 0 -14
 *
 * Return: void
 */

void more_numbers(void)
{
	int n, x;

	for (n = 0; n <= 9; n++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x < 9)
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
