#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @n: integer to check
 * Return: last digit of integer
 *
 */
int print_last_digit(int n)
{
	_putchar(n + '0');
	return (n % 10);
}
