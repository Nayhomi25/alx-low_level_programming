#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)

{
	int t;
	int o;

	for (t = 0; t <= 9; t++)
	{
		for (o = 0; o <= 9; o++)
		{
			putchar(t + '0');
			putchar(o + '0');

			if (!(t == 9 && o == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);

}

