#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_to_uint - convert binary number into unsigned int
 * @b: character string containing binary number for conversion
 * Return: converted integer
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int convert = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
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
