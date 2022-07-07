#include "main.h"

/**
 * more_numbers - prints 10times the numbers from 0 -14
 *
 * Return: void
 */

void more_numbers(void)
{
	int n, x;

	for (x = 0; x <= 9; x++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
