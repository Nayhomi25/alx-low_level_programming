#include <stdio.h>
#include <unistd.h>

/** main - Entry point
 *
 * Description: 'print to output without using printf or puts'
 *
 * Return: Always return 0 (success)
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
