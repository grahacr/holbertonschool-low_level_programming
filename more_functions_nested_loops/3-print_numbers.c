#include "main.h"
/**
 * print_numbers - print numbers zero through nine
 * @n: digit
 *
 */
void print_numbers(int n)

{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		_putchar(digit);
	}
	_putchar('\n');
}
