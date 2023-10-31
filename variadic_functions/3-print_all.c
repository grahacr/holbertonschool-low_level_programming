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
	const char *format_ptr = format;
	char *separator = "";

	while (*format_ptr)
	{
		if (*format_ptr == 'c')
		{
			int character = va_arg(args, int);
			printf("%s%c", separator, character);
		}
		else if (*format_ptr == 'i')
		{
			int integer = va_arg(args, int);
			printf("%s%d", separator, integer);
		}
		else if (*format_ptr == 'f')
		{
			double floating = va_arg(args, double);
			printf("%s%f", separator, floating);
		}
		else if (*format_ptr == 's')
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
		format_ptr++;
	}
	printf("\n");
	va_end(args);
}
