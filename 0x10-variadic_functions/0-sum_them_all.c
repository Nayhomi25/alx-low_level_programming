#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: first argument
 * @...: other arguments to be passed
 *
 * Return: the sum of the parameters or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int num; 
	unsigned int i;
	va_list add;

	if (n == 0)
	{
		return (0);
	}
	num = 0;
	va_start(add, n);
	for (i = 0; i < n; i++)
	{
		num += va_arg(add, int);
	}
	va_end(add);
	return (num);
}
