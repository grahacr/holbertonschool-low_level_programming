#include "main.h"
/**
 * print_line - print line ending in new line
 * @n: integer to check
 * Return: 0 on success
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
