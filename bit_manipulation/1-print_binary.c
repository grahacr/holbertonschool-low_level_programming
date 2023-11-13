#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 */
void print_binary(unsigned long int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		int bit = (n >> i) & 1;
		_putchar(bit + '0');
	}
}	
