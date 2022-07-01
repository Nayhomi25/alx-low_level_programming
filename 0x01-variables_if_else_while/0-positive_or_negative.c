#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - Entry point
 *
 * Description: create a program that will assign randmon number to variable n
 * and print whether n is positive or negative
 *
 * Return: Always return 0 (success)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*my code*/
	if (n == 0)

	{
		printf("%d is zero\n", n);

	} else if (n > 0)

	{

		printf("%d is positive\n", n);

	} else

	{

		printf("%d is negative\n", n);
	}

	return (0);
}
