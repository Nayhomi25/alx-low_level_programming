#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by new line
 *
 * @seperator: string to be printed between n
 * @n: numbers of integers passed to the function
 *
 * Return: void
 */

void print_numbers(const char *seperator, unsigned int n, ...)
{
	va_list prints;
	unsigned int i;

	va_start(prints, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(prints, unsigned int));
		if (i < (n - 1) && seperator != NULL)
		{
			printf("%s", seperator);
		}

	}
	va_end(prints);
	printf("\n");
}
