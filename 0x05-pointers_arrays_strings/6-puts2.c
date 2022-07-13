#include "main.h"

/**
 * puts2 - prints every other character in a string
 * @str: string to be printed
 * Return: void
 */

void puts2(char *str)
{
	int lent = 0,  index = 0;

	while (str[index++])
	{
		lent++;
	}

	for (index = 0; index < lent; index += 2)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
