#include "main.h"
#include <stdio.h>
/**
 * print_array - print array of integers
 * @a: array of integers
 * @n: integer to check
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);
}
