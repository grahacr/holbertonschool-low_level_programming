#include "main.h"
/**
 * print_numbers - print numbers zero through nine
 * @int: integer to read
 */

void print_numbers(int)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
