#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: the string to be printed in a pointer
 * Return: void
 */

void _puts(char *str)
{
	for (; *str; str++)
	{
		_putchar(*str);
	}
}
