#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int mult = 1;
	unsigned int convert;

	while (b[i] != '\0')
	{
	convert += (b[i] * mult - '0');
	}
	return (0);
}
