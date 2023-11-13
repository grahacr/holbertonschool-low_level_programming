#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 */
void print_binary(unsigned long int n)
{
	int count = sizeof(n);
	int i;

	for (i = count - 1; i >= 0; i--)
	{
		int bit = (n >> i) & 1;
		_putchar(bit + '0');
	}
}	
