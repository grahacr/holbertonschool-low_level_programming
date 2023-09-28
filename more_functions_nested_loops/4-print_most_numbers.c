#include "main.h"
/**
 * print_most_numbers - print most numbers except two and four
 * Return: void on success
 */
void print_most_numbers(void)
{
	char n = '0';

	while (n >= 0 && n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n);
		}
		n++
	}
	_putchar ('\n');
}
