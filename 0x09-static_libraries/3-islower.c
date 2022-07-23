#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: the character to be checked
 *
 * Return: return 1 if character is lowercase, return 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
