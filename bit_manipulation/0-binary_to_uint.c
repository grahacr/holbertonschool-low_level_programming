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
	unsigned int convert = 0;

	while (b != NULL)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			convert = convert * 2 + (b[i] - '0');
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (convert);
}
