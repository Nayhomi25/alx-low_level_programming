#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)

{
	char fig;

	for (fig = '0'; fig <= '9'; fig++)
	{
		putchar(fig);
	}

	for (fig = 'a'; fig <= 'f'; fig++)
	{
		putchar(fig);
	}

	putchar('\n');

	return (0);
}
