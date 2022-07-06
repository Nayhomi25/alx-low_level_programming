#include "main.h"

/**
 * print_times_table - prints the n times table starting with 0
 *
 * @n: the integer
 *
 */

void print_times_table(int n);
{
	int a, b, d;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(0);

			for (b = 1; b <= n; b++)
			{
				d = a * b;

				_putchar(',');
				_putchar(' ');

				if (d <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(d + '0');
				}
				else if (d <= 99)
				{
					_putchar(' ');
					_putchar((d / 10) + '0');
					_putchar((d % 10) + '0');
				}
				else
				{
					_putchar(((d / 100) % 10) + '0');
					_putchar(((d / 10) % 10) + '0');
					_putchar((d % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
