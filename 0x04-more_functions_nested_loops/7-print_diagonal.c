#include "main.h"

/**
 * print_diagonal - prints diagonal line in terminal
 *
 * @n: number of times \ is to be printed
 * Return: void
 *
 */

void print_diagonal(int n)
{
	int l, sp;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (sp = 0; sp < l; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			if (l == n - 1)
			{
				continue;
			}

			_putchar('\n');
		}
	}

	_putchar('\n');
}
