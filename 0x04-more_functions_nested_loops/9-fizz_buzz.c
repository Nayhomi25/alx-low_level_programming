#include <stdio.h>

/**
 * main - runs the fizzbuzz test
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
<<<<<<< HEAD
			printf("Fizz ");
=======
			printf("Buzz ");
>>>>>>> c08aceab73064953eea44fa0f58748fcde4d974a
		}
		else if (i % 3 == 0)
		{
<<<<<<< HEAD
			printf("Buzz ");
=======
			printf("Fizz ");
>>>>>>> c08aceab73064953eea44fa0f58748fcde4d974a
		}
		else
		{
			printf("%d ", i);
		}
	printf("\n");
	return (0);
}
