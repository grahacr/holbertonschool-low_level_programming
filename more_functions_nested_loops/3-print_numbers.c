#include "main.h"
/**
 * print_numbers - print numbers zero through nine
 */
void print_numbers(void)

{
	int n = digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		_putchar(digit);
	}
	_putchar('\n');
}
