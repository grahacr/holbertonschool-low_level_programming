#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bits = sizeof(unsigned long) * 8;
	int mask = 1UL << index;

	if (index >= bits)
	{
		return (-1);
	}
	if ((n & mask) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
