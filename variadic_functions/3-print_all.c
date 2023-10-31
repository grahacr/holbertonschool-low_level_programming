#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	va_start(args, format);
	char *separator = "";

	while (*format)
	{
		if (*format == 'c')
		{
			printf("%s%c", separator, va_arg(args, int));
		}
		else if (*format == 'i')
		{
			printf("%s%d", separator, va_arg(args, int));
		}
		else if (*format == 'f')
		{
			printf("%s%f", separator, va_arg(args, double));
		}
		else if (*format == 's')
		{
			char *string = va_arg(args, char *);
			if (string == NULL)
			{
				printf("%s(nil)", separator);
			}
			else
			printf("%s%s", separator, string);

		}
		separator = ", ";
		format++;
	}
	printf("\n");
	va_end(args);
}
