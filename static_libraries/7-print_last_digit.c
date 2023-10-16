#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @n: integer to check
 * Return: last digit of integer
 *
 */
int print_last_digit(int n)
{
	int v = n * ((n > 0) - (n < 0));
	int m = (v % 10);

	_putchar(m + '0');
	return (m % 10);
}
