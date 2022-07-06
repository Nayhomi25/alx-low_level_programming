#include "main.h"

/**
 * _isalpha - checks for an alphabetic character
 *
 * @c: character to check for
 *
 * Return: return 1 if successful, return 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}

		_putchar('\n');
}
