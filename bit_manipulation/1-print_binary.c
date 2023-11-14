#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary - print unsigned long int in binary representation
 * @n: integer input to convert to binary and print
 */
void print_binary(unsigned long int n)
{
	int i;
	int bits = sizeof(n) * 8;
	int start = 0;

	for (i = bits - 1; i >= 0; i--)
	{
		int bit = (n >> i) & 1;

		if (bit == 1)
		{
			start = 1;
		}
		if (start)
		{
			_putchar(bit + '0');
		}
	}
	if (start == 0)
	{
		_putchar('0');
	}
}
