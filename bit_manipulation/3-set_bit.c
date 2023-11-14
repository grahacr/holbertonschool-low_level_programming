#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * set_bit - set bit at certain index
 * @n: integer input
 * @index: index integer to set bit
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits = sizeof(unsigned long) * 8;

	if (index >= bits)
	{
		return (-1);
	}
	else
	{
		*n = *n | (1UL << index);
		return (1);
	}
}
