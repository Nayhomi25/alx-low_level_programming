#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add the values of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: a+b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts the value of two intergers
 * @a: first integer
 * @b: second interger
 *
 * Return: a-b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply the value of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides the values of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: a/b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - divides the value of two intergers and prints the remainders
 * @a: first integer
 * @b: second integer
 *
 * Return: a % b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
