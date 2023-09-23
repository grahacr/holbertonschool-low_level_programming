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
	int l = n % 10;
	{
	if (l > 5)
	{printf("Last digit of %d is greater than 5", l);
	}
	else if (l == 0)
	{printf("Last digit of %d is 0", l);
	}
	else if
	{printf("Last digit of %d is less than 6 and not 0", l);	}
}
	return (0);
}
