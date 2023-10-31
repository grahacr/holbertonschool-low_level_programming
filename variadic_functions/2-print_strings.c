#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - print strings
 * @separator: separator between strings
 * @n: number of strings passed to function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	va_start(args, n);
	int i;

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str != NULL)
		{
			printf("%s", str);
			if (separator != NULL && i < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(args);
}
