#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int mask = 1UL << index;

	if ((n & mask) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (-1);
}
