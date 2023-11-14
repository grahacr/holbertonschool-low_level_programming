#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;
	unsigned long int bits = sizeof(unsigned long) * 8;

	if (index >= bits)
	{
		return (-1);
	}
	else
	{
		return (n | mask)
	}
}