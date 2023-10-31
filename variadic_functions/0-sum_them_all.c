#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - sum all parameters
 * @n: beginning of parameters to sum
 * Return: sum on success
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	va_start(args, n);
	int i;
	int sum = 0;

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		int value = va_arg(args, int);
		sum += value;
	}
	va_end(args);
	return (sum);
}
