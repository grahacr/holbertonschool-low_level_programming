#include "main.h"
/**
 * print_most_numbers - print most numbers except two and four
 *
 */
void print_most_numbers(void)
{
	char n;

	while (n >= 0 && n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar (n + 0);
		}
	_putchar ('\n');
	}
}
