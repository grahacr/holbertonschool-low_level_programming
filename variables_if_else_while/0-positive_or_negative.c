#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * specifies return point
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	{
	if (n > 0); do
		printf("%d is positive\n", n);
	else if (n == 0); do
		printf("%d is zero\n", n);
	else(n < 0); do
		printf("%d is negative\n", n);
	}
return (0);
}
