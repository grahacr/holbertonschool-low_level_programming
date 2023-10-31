#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i;
	va_start(args, n);

	for (i = 0; (unsigned int)i < n; i++)
	{
		int num = va_arg(args, int);

		printf("%d", num);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
